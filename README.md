<h2>📂 Soft-& Hardware Overview</h2>

<p>This section provides all necessary files and components to replicate and build the system.</p>

<h3>📁 Available Files</h3>
<ul>
    <li><strong>.xlsx file</strong> – References all pin connections.</li>
    <li><strong>.ino files</strong> – Contains the control code in arduino.</li>
</ul>

<h3>🖥️ Arduino Code Structure</h3>
<p>The system consists of three Arduino files:</p>
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
