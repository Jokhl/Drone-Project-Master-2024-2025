<h2>📂 Soft-& Hardware Overview</h2>
    <p>This section aims to implement the indoor localization system based on Ultra-Wideband (UWB) technology placed on the pink support structure. We use a trilateration method to estimate the drone's position in real-time. The system relies on three fixed anchors positioned on the ground and a receiving tag installed on the drone. By measuring the distances between the anchors and the tag, we can calculate the drone's position with high accuracy, helping to improve autonomous navigation and trajectory control in confined environments :</p>
    <table style="border: none;">
      <tr>
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1mhiAB3AUSWgGtcH4OUx5kZJcbENg6C26" alt="Front View" width="300"><br>
          <b>Front View</b>
        </td>
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1eGuo_ZY5YsGg81ZiYGtS0nQbABL58_M9" alt="Back View" width="300"><br>
          <b>Back View</b>
        </td>
      </tr>
    </table>
    <h3>😁 Available Files</h3>
    <ul>
        <li><strong>.xlsx file</strong> – References all pin connections.</li>
        <li><strong>Antenna-Calibration.ino</strong> – Calibrates the signal transmission delay of ground anchors.</li>
        <li><strong>Anchor-Configuration.ino</strong> – Configures the ground anchors with the calibrated delay.</li>
        <li><strong>ESP32-UWB-DW1000.ino</strong> – Code for the ESP32-UWB-DW1000 used as a tag.</li>
        <li><strong>ESP-WROOM-32.ino</strong> – Code for the ESP32 used as the control and decision-making unit.</li>
        <li><strong>Electrical-component-support.step</strong> – CAO file for the pink support for electrical component.</li>
    </ul>
    <h3>⚙️ Required Components for this part (this does not refer to the entire system)</h3>
    <ul style="list-style-type: none;">
        <li>📌 <a href="https://www.az-delivery.de/fr/products/esp32-nodemcu-module-wlan-wifi-dev-kit-c-development-board-mit-cp2102-und-usb-c-anschluss-esp-32-esp32-wroom-32-kompatibel-mit-arduino" target="_blank">ESP-WROOM-32</a></li>
        <li>📌 <a href="https://www.gotronic.fr/art-carte-esp32-uwb-dw1000-38055.htm" target="_blank">4x ESP32-UWB-DW1000</a></li>
        <li>📌 <a href="https://www.rc-passion.com/module-d-ecolage-4-voies-pour-l-entrainement/" target="_blank">Protronik 4CH Trainer</a></li>
        <li>📌 <a href="https://www.ebay.com/itm/226085044905" target="_blank">8CH PPM PWM SBUS Signal Converter</a></li>
        <li>📌 <a href="https://www.amazon.fr/RFElettronica-Transmetteur-t%C3%A9l%C3%A9commande-r%C3%A9cepteur-FS-iA10B/dp/B08YQVPX2Y" target="_blank">RC FlySky FS-i6 & FS-ia6b</a></li>
        <li>📌 <a href="https://www.studiosport.fr/batterie-lipo-4s-3700-mah-45c-xt60-tattu-a12185.html" target="_blank">Battery LiPo 4S 3700mAh 45C Tattu</a></li>
        <li>📌 <a href="https://openelab.io/fr/products/holybro-pm06-module" target="_blank">Power Module Holybro PM06 V2</a></li>
        <li>📌 <a href="https://www.az-delivery.de/fr/products/0-96zolldisplay" target="_blank">OLED screen SSD1306 0x96 I2C</a></li>
        <li>📌 <a href="https://www.az-delivery.de/fr/products/4x4-matrix-keypad" target="_blank">Keypad 4x4 compatible Arduino</a></li>
        <li>📌 <a href="https://www.amazon.fr/Breadboard-prototype-universelle-dalimentation-Raspberry/dp/B07LF84HWK" target="_blank">Breadboard (restricted dimensions due to the printed support configuration)</a></li>
    </ul>
    <h3>💧 Setup & Usage Guide</h3>
    <h4>Anchor Calibration</h4>
    <ol>
        <li>Connect two ESP32-UWB-DW1000 modules to a computer using the micro-USB port on the board. Also, connect another ESP32-UWB-DW1000 module as the transmitter.</li>
        <li>Flashing the Firmware:
            <ul>
                <li>Upload "Antenna-Calibration.ino" to the ESP32-UWB-DW1000 that will act as an anchor. Adjust the target distance in the line <code>float this_anchor_target_distance = 1</code> as you place the compenents physicaly. Record the plotted delay value on the serial monitor for later use.</li>
                <li>Upload "Anchor-Configuration.ino" to the same module, updating <code>uint16_t Adelay = 16570</code> with the calibrated delay value. Ensure the calibration distance remains the same as the previous one used for the calibration (<code>float dist_m = 1</code>). Finally, set the wished anchor’s address under <code>char anchor_addr[] = "84:00:5B:D5:A9:9A:E2:9C"</code>.</li>
            </ul>
        </li>
        <li>Repeat the process for the other two anchors.</li>
    </ol>
    <h4>Tag Configuration</h4>
    <ol>
        <li>Connect the ESP32-UWB-DW1000 tag to a computer via micro-USB.</li>
        <li>Upload "ESP32-UWB-DW1000.ino" to the tag.</li>
        <li>Modify the following lines in the code to set correct anchor addresses and positions depending on your real configuration :
<pre>
Anchor anchors[3] = {
    {0x84, 0.0, 0.0, 0.0},
    {0x85, 2.0, 0.0, 0.0},
    {0x86, 1.0, 1.0, 0.0}
};</pre>
        </li>
    </ol>
    <table style="border: none;">
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1FGZZTgq0lUtnmhsNHxwCyO7RzLgKHPUs" alt="Example of anchor positioning for tag configuration" width="300"><br>
          <b>Example of anchor positioning for tag configuration</b>
        </td>
    </table>
    <h4>System Setup</h4>
    <ol>
        <li>3D Print the support
        <li>Power the three ground anchors using external batteries or different computers for easy placement.</li>
        <li>Connect all necessary components according to the provided .xlsx file.</li>
        <li>Start the drone system and connect the ESPs to computers to verify correct functionality.</li>
        <li>In addition, you may use the WiFi mode of the ESP-WROOM-32 to open a WebSerial page on your pc (which has to be connected to the same network as your card). Simply update the following WiFi credentials : <pre>
const char* ssid = "YourWiFiSSID";
const char* password = "YourWiFiPassword";</pre>
        </li>
    </ol>
    <table style="border: none;">
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1CfWfBSkVuJKMw5xtFqDtPJ2En5hf7A5C" alt="3D Print on the printer" width="300"><br>
          <b>3D Print on the printer</b>
        </td>
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1v2WcK0cmV-BQclsd4JV1Uzgyqit0P7hA" alt="3D Print result" width="300"><br>
          <b>3D Print result</b>
        </td>
    </table>
    <h3>💊 Connection Details</h3>
    <p>All connection details can be found in the following file:</p>
    <p><strong>📎 <a href="#">Download Connection File</a></strong></p>
    <h3>🔌 Electronic System Overview</h3>
    <p>Détails sur l'utilisation finale – Après l’installation, comment le système est censé fonctionner en conditions réelles ? Comment vérifier qu’il marche correctement ?</p>
