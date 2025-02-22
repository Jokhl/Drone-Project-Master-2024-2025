<h2>📂 Soft-& Hardware Overview</h2>

<p>This section provides all necessary files and components to replicate and build the system.</p>

<h3>💁 Available Files</h3>
<ul>
    <li><strong>.xlsx file</strong> – References all pin connections.</li>
    <li><strong>.ino files</strong> – Contains the control code in Arduino.</li>
    <li><strong>Calibration scripts</strong> – Includes scripts to calibrate the UWB system.</li>
    <li><strong>ESP32-UWB communication files</strong> – Handles data transmission between ESP32-UWB modules.</li>
</ul>

<h3>💧 Setup & Usage Guide</h3>
<p>Follow these steps to set up and run the system:</p>
<ol>
    <li>Upload the appropriate code to each ESP32 module:
        <ul>
            <li>Flash <strong>ESP-WROOM-32</strong> with the main controller code.</li>
            <li>Flash <strong>ESP32-UWB-DW1000 (Tag)</strong> with the tag firmware.</li>
            <li>Flash <strong>ESP32-UWB-DW1000 (Anchor)</strong> with the anchor firmware.</li>
        </ul>
    </li>
    <li>Connect all components according to the <strong>.xlsx connection file</strong>.</li>
    <li>Perform UWB calibration using the provided calibration scripts:
        <ul>
            <li>Define anchor positions in the <strong>ESP32-UWB-DW1000 (Anchor)</strong> code under <code>#define ANCHOR_POS_X</code>, <code>#define ANCHOR_POS_Y</code>, and <code>#define ANCHOR_POS_Z</code>.</li>
            <li>Set the tag reference position in the <strong>ESP32-UWB-DW1000 (Tag)</strong> code under <code>#define TAG_INIT_POS</code>.</li>
            <li>Adjust signal strength and ranging accuracy in the configuration file <code>config.h</code>.</li>
        </ul>
    </li>
    <li>Start the system and monitor the data exchange between ESP modules.</li>
    <li>Tune parameters such as update rate and filtering thresholds in <code>config.h</code> for improved accuracy.</li>
</ol>

<h3>🔦 Arduino Code Structure</h3>
<p>The system consists of the following Arduino files:</p>
<ul>
    <li><strong>ESP-WROOM-32</strong>: Main controller managing the overall system.</li>
    <li><strong>ESP32-UWB-DW1000 (Tag)</strong>: Returns space location data to the ESP-WROOM-32.</li>
    <li><strong>ESP32-UWB-DW1000 (Anchor)</strong>: Placed on the floor to assist with positioning.</li>
</ul>

<h3>⚙️ Required Components</h3>
<p>In addition to the hardware detailed on the homepage, the following components are required:</p>

<ul>
    <li>📌 <a href="https://www.az-delivery.de/fr/products/esp32-nodemcu-module-wlan-wifi-dev-kit-c-development-board-mit-cp2102-und-usb-c-anschluss-esp-32-esp32-wroom-32-kompatibel-mit-arduino" target="_blank">ESP-WROOM-32</a></li>
    <li>📌 <a href="https://www.gotronic.fr/art-carte-esp32-uwb-dw1000-38055.htm" target="_blank">4x ESP32-UWB-DW1000</a></li>
    <li>📌 <a href="https://www.rc-passion.com/module-d-ecolage-4-voies-pour-l-entrainement/" target="_blank">Protronik 4CH Trainer</a></li>
    <li>📌 <a href="https://www.ebay.com/itm/226085044905" target="_blank">8CH PPM PWM SBUS Signal Converter</a></li>
    <li>📌 <a href="https://www.amazon.fr/RFElettronica-Transmetteur-t%C3%A9l%C3%A9commande-r%C3%A9cepteur-FS-iA10B/dp/B08YQVPX2Y" target="_blank">RC FlySky FS-i6 & FS-ia6b</a></li>
    <li>📌 <a href="https://www.studiosport.fr/batterie-lipo-4s-3700-mah-45c-xt60-tattu-a12185.html" target="_blank">Battery LiPo 4S 3700mAh 45C Tattu</a></li>
    <li>📌 <a href="https://openelab.io/fr/products/holybro-pm06-module" target="_blank">Power Module Holybro PM06 V2</a></li>
</ul>

<h3>📊 Connection Details</h3>
<p>All connection details can be found in the following file:</p>
<p><strong>📎 [Download Connection File]</strong> (Link to the .xlsx file)</p>

<h3>🔌 Electronic System Overview</h3>
<p>Below is an image of the electronic setup:</p>
<img src="images/electronic_setup.jpg" alt="Electronic System Overview" width="600">
