<h2>📂 Soft-& Hardware Overview</h2>
    <p>This section provides all necessary files and components to replicate and build the system.</p>
    <h3>😁 Available Files</h3>
    <ul>
        <li><strong>.xlsx file</strong> – References all pin connections.</li>
        <li><strong>Antenna-Calibration.ino</strong> – Calibrates the signal transmission delay of ground anchors.</li>
        <li><strong>Anchor-Configuration.ino</strong> – Configures the ground anchors with the calibrated delay.</li>
        <li><strong>ESP32-UWB-DW1000.ino</strong> – Code for the ESP32-UWB-DW1000 used as a tag.</li>
        <li><strong>ESP-WROOM-32.ino</strong> – Code for the ESP32 used as the control and decision-making unit.</li>
    </ul>
    <h3>🔦 Arduino Code Structure</h3>
    <p>The system consists of the following Arduino files:</p>
    <ul>
        <li><strong>ESP-WROOM-32</strong>: Main controller managing the overall system.</li>
        <li><strong>ESP32-UWB-DW1000 (Tag)</strong>: Returns spatial location data to the ESP-WROOM-32.</li>
        <li><strong>ESP32-UWB-DW1000 (Anchor)</strong>: Placed on the ground to assist with positioning.</li>
    </ul>
    <h3>⚙️ Required Components for this part (this is not refering to the whole system)</h3>
    <ul>
        <li>📌 <a href="https://www.az-delivery.de/fr/products/esp32-nodemcu-module-wlan-wifi-dev-kit-c-development-board-mit-cp2102-und-usb-c-anschluss-esp-32-esp32-wroom-32-kompatibel-mit-arduino" target="_blank">ESP-WROOM-32</a></li>
        <li>📌 <a href="https://www.gotronic.fr/art-carte-esp32-uwb-dw1000-38055.htm" target="_blank">4x ESP32-UWB-DW1000</a></li>
        <li>📌 <a href="https://www.rc-passion.com/module-d-ecolage-4-voies-pour-l-entrainement/" target="_blank">Protronik 4CH Trainer</a></li>
        <li>📌 <a href="https://www.ebay.com/itm/226085044905" target="_blank">8CH PPM PWM SBUS Signal Converter</a></li>
        <li>📌 <a href="https://www.amazon.fr/RFElettronica-Transmetteur-t%C3%A9l%C3%A9commande-r%C3%A9cepteur-FS-iA10B/dp/B08YQVPX2Y" target="_blank">RC FlySky FS-i6 & FS-ia6b</a></li>
        <li>📌 <a href="https://www.studiosport.fr/batterie-lipo-4s-3700-mah-45c-xt60-tattu-a12185.html" target="_blank">Battery LiPo 4S 3700mAh 45C Tattu</a></li>
        <li>📌 <a href="https://openelab.io/fr/products/holybro-pm06-module" target="_blank">Power Module Holybro PM06 V2</a></li>
    </ul>
    <h3>💧 Setup & Usage Guide</h3>
    <h4>Anchor Calibration</h4>
    <ol>
        <li>Connect two ESP32-UWB-DW1000 modules to a computer using the micro-USB port on the board. Also, connect another ESP32-UWB-DW1000 module as the transmitter.</li>
        <li>Flashing the Firmware:
            <ul>
                <li>Upload "Antenna-Calibration.ino" to the ESP32-UWB-DW1000 that will act as an anchor. Adjust the target distance in the line <code>float this_anchor_target_distance = 1</code>. Record the plotted delay value for later use.</li>
                <li>Upload "Anchor-Configuration.ino" to the same module, updating <code>uint16_t Adelay = 16570</code> with the calibrated delay. Ensure the calibration distance remains the same (<code>float dist_m = 1</code>). Set the anchor’s address under <code>char anchor_addr[] = "84:00:5B:D5:A9:9A:E2:9C"</code>.</li>
            </ul>
        </li>
        <li>Repeat the process for the other two anchors.</li>
    </ol>
    <h4>Tag Configuration</h4>
    <ol>
        <li>Connect the ESP32-UWB-DW1000 tag to a computer via micro-USB.</li>
        <li>Upload "ESP32-UWB-DW1000.ino" to the tag.</li>
        <li>Modify the following lines in the code to set correct anchor addresses and positions:
            <pre>
Anchor anchors[3] = {
    {0x84, 0.0, 0.0, 0.0},
    {0x85, 2.0, 0.0, 0.0},
    {0x86, 1.0, 1.0, 0.0}
};
            </pre>
        </li>
    </ol>
    <h4>System Setup</h4>
    <ol>
        <li>Power the three ground anchors using external batteries or different computers for easy placement.</li>
        <li>Connect all necessary components according to the provided .xlsx file.</li>
        <li>Start the drone system (without propellers) to verify correct functionality.</li>
    </ol>
    <h3>💊 Connection Details</h3>
    <p>All connection details can be found in the following file:</p>
    <p><strong>📎 <a href="#">Download Connection File</a></strong></p>
    <h3>🔌 Electronic System Overview</h3>
    <p>Below is an image of the electronic setup:</p>
    <img src="images/electronic_setup.jpg" alt="Electronic System Overview" width="600">
