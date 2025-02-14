#include <WiFi.h>
#include <WebSerial.h>
#include <ESPAsyncWebServer.h>

#define PWM_PIN_OUT 34

const char* ssid = "Joachim";
const char* password = "christa2";

AsyncWebServer server(80); // Déclaration du serveur web

void recvMsg(uint8_t *data, size_t len) {
  // Ici vous gérez les données reçues via WebSerial
  Serial.print("Reçu sur WebSerial: ");
  for (size_t i = 0; i < len; i++) {
    Serial.write(data[i]);
  }
  Serial.println();
}

void setup() {
    Serial.begin(115200);
    delay(5000); // Attendre que tout soit initialisé
    pinMode(PWM_PIN_OUT, INPUT);
    // Connexion WiFi en mode station
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    // Attente de la connexion WiFi
    if (WiFi.waitForConnectResult() != WL_CONNECTED) {
        Serial.println("Échec de la connexion WiFi !");
        return;
    }
    Serial.print("Adresse IP: ");
    Serial.println(WiFi.localIP());
    WebSerial.begin(&server);  // passer le serveur créé
    WebSerial.onMessage(recvMsg);
    server.begin();
}

void loop() {
    uint16_t autoSignal = pulseIn(PWM_PIN_OUT, HIGH, 25000);
    WebSerial.println(autoSignal);
    delay(10);
}
