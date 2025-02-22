#include <SPI.h>
#include "DW1000.h"
#include "DW1000Ranging.h"

// Configuration des broches pour DW1000
#define SPI_SCK 18
#define SPI_MISO 19
#define SPI_MOSI 23
#define PIN_RST 27
#define PIN_IRQ 34
#define PIN_SS 4

// Adresse du TAG
char tag_addr[] = "7D:00:22:EA:82:60:3B:9C";

// Coordonnées des ANCHORS
struct Anchor {
    uint8_t id;
    float x, y, z;
};

Anchor anchors[3] = {
    {0x84, 0.0, 0.0, 0.0},
    {0x85, 4.0, 0.0, 0.0},
    {0x86, 2.0, 2.0, 0.0}
};

// Variables globales DW1000
float distances[3] = {0.0, 0.0, 0.0};
float xmes = 0.0, ymes = 0.0, zmes = 0.0;

// Tampons pour la moyenne glissante
#define FILTER_WINDOW_SIZE 10
float x_filter[FILTER_WINDOW_SIZE] = {0};
float y_filter[FILTER_WINDOW_SIZE] = {0};
float z_filter[FILTER_WINDOW_SIZE] = {0};
int filter_index = 0;

// Variables pour garder en mémoire la dernière position validée
static float last_valid_x = 0.0;
static float last_valid_y = 0.0;
static float last_valid_z = 0.0;

void setup() {
    Serial.begin(115200);

    // Initialisation DW1000
    SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI);
    DW1000Ranging.initCommunication(PIN_RST, PIN_SS, PIN_IRQ);
    DW1000Ranging.attachNewRange(newRange);
    DW1000Ranging.startAsTag(tag_addr, DW1000.MODE_LONGDATA_RANGE_LOWPOWER, false);

    Serial.println("DW1000 prêt. Calcul de la position (x, y, z) ...");

    // Initialisation de l'UART2
    Serial2.begin(115200, SERIAL_8N1, 16, 17);

    Serial.println("Émetteur prêt !");
}

void loop() {
    // Gestion DW1000
    DW1000Ranging.loop();

    static unsigned long lastDisplayTime = 0;
    if (millis() - lastDisplayTime > 100) {
        lastDisplayTime = millis();
        calculateTagPosition();
    }
}

void newRange() {
    DW1000Device *device = DW1000Ranging.getDistantDevice();
    uint8_t shortAddr = device->getShortAddress();

    // Associe la distance à l'ANCHOR correspondante
    for (uint8_t i = 0; i < 3; i++) {
        if (anchors[i].id == shortAddr) {
            distances[i] = device->getRange();
            break;
        }
    }
}

float applyMovingAverage(float *buffer, float newValue) {
    buffer[filter_index % FILTER_WINDOW_SIZE] = newValue;
    filter_index++;
    float sum = 0.0;
    for (int i = 0; i < FILTER_WINDOW_SIZE; i++) {
        sum += buffer[i];
    }
    return sum / FILTER_WINDOW_SIZE;
}

void calculateTagPosition() {
    float r1 = distances[0];
    float r2 = distances[1];
    float r3 = distances[2];

    // Les positions des anchors
    float x1 = anchors[0].x;
    float y1 = anchors[0].y;
    float z1 = anchors[0].z;

    float x2 = anchors[1].x;
    float y2 = anchors[1].y;
    float z2 = anchors[1].z;

    float x3 = anchors[2].x;
    float y3 = anchors[2].y;
    float z3 = anchors[2].z;

    // Calcul de xmes, ymes (projection 2D)
    xmes = (r1 * r1 - r2 * r2 + x2 * x2) / (2 * x2);
    if (fabs(xmes) < 1e-10) {
        xmes = 0.0;
    }
    ymes = (r1 * r1 - r3 * r3 + x3 * x3 + y3 * y3 - 2 * x3 * xmes) / (2 * y3);
    if (fabs(ymes) < 1e-10) {
        ymes = 0.0;
    }

    // Calcul du z
    if (r1 * r1 - xmes * xmes - ymes * ymes < 0) {
        // Si la valeur est négative, garder la dernière valeur filtrée de z
        zmes = z_filter[(filter_index - 1) % FILTER_WINDOW_SIZE];
    } else {
        zmes = sqrt(r1 * r1 - xmes * xmes - ymes * ymes);
    }

    // Appliquer la moyenne glissante
    xmes = applyMovingAverage(x_filter, xmes);
    ymes = applyMovingAverage(y_filter, ymes);
    zmes = applyMovingAverage(z_filter, zmes);

    // Vérifier si l'écart entre les nouvelles valeurs et les précédentes est > 0.7
    if (fabs(xmes - last_valid_x) > 0.7 || fabs(ymes - last_valid_y) > 0.7) {
        // Trop de différence, on rétablit les anciennes valeurs
        xmes = last_valid_x;
        ymes = last_valid_y;
        zmes = last_valid_z;
    } else {
        // Mise à jour des dernières valeurs validées
        last_valid_x = xmes;
        last_valid_y = ymes;
        last_valid_z = zmes;
    }

    // Afficher les valeurs
    Serial.print("Position filtrée : r1 = ");
    Serial.print(r1, 3);
    Serial.print(", r2 = ");
    Serial.print(r2, 3);
    Serial.print(", r3 = ");
    Serial.println(r3, 3);
    Serial.print("Position filtrée : x = ");
    Serial.print(xmes, 3);
    Serial.print(", y = ");
    Serial.print(ymes, 3);
    Serial.print(", z = ");
    Serial.println(zmes, 3);

    Serial2.print(xmes, 2);  // x avec 2 décimales
    Serial2.print(",");   
    Serial2.print(ymes, 2);  // y avec 2 décimales
    Serial2.print(",");  
    Serial2.println(zmes, 2);
}
