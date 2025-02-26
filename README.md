<h2>📂 Soft-& Hardware Overview</h2>
    <p>This section aims to implement the indoor localization system based on Ultra-Wideband (UWB) technology placed on the pink support structure. We use a trilateration method to estimate the drone's position in real-time. The system relies on three fixed anchors positioned on the ground and a receiving tag installed on the drone. By measuring the distances between the anchors and the tag, we can calculate the drone's position with high accuracy, helping to improve autonomous navigation and trajectory control in confined environments :</p>
    <table style="border: none;">
      <tr>
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1mhiAB3AUSWgGtcH4OUx5kZJcbENg6C26" alt="Front View" width="auto"><br>
          <b>Front View</b>
        </td>
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1eGuo_ZY5YsGg81ZiYGtS0nQbABL58_M9" alt="Back View" width="auto"><br>
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
        <li>📌 <a href="https://www.amazon.com/Radiolink-Crossflight-Controller-Integrated-Radartracker/dp/B0C2Q17CRW">Radiolink Crossflight v1.0 with buzzer</a></li>
        <li>📌 <a href="https://www.rc-passion.com/module-d-ecolage-4-voies-pour-l-entrainement/" target="_blank">Protronik 4CH Trainer</a></li>
        <li>📌 <a href="https://www.ebay.com/itm/226085044905" target="_blank">8CH PPM PWM SBUS Signal Converter</a></li>
        <li>📌 <a href="https://www.amazon.fr/RFElettronica-Transmetteur-t%C3%A9l%C3%A9commande-r%C3%A9cepteur-FS-iA10B/dp/B08YQVPX2Y" target="_blank">RC FlySky FS-i6 & FS-ia6b</a></li>
        <li>📌 <a href="https://www.studiosport.fr/batterie-lipo-4s-3700-mah-45c-xt60-tattu-a12185.html" target="_blank">Battery LiPo 4S 3700mAh 45C Tattu</a></li>
        <li>📌 <a href="https://openelab.io/fr/products/holybro-pm06-module" target="_blank">Power Module Holybro PM06 V2</a></li>
        <li>📌 <a href="https://www.az-delivery.de/fr/products/0-96zolldisplay" target="_blank">OLED screen SSD1306 0x96 I2C</a></li>
        <li>📌 <a href="https://www.az-delivery.de/fr/products/4x4-matrix-keypad" target="_blank">Keypad 4x4 compatible Arduino</a></li>
        <li>📌 <a href="https://www.amazon.fr/Breadboard-prototype-universelle-dalimentation-Raspberry/dp/B07LF84HWK" target="_blank">Breadboard (restricted dimensions due to the printed support configuration)</a></li>
        <li>📌 <a href="https://www.amazon.fr/ARCELI-Performance-Couleur-Puissance-%C3%89missives/dp/B07PVVHBNW/ref=sr_1_7?dib=eyJ2IjoiMSJ9.cZm-YS2Aq4tNyjvKj8-KAaG564tPYUAQFLwHQLojSVbnDCz-8Dclj6YFTSlwDBk6AoNv6q0foh_i-rv9wl4Dh-yMw0bpG7Q5jfmYCIs7XDl_SqoQgRy84nm2LqYE3hc_1Y3A-pXvHJfxDxQk8riJYYeO15Dw_gzYVSodg-AhxDUr-96XLG0EXKZUXxyvKxEwo8RLCI4wD1MZazhj2R55nvLllaDLlIJSSzY_cY8OxDJQTY8f5OQSvLlkJQ9mBmYDeduEWjLDd8TR4l9E938qc0VbR3mkf1LRc1hho28aUsUKaB_OsEeFZXdTOBwf3RacH1hMXBbbTDw-1XOS6LGK19wjKuDde_gclAw3A7q1SXxMaKMLFXNzfWJmpL60HKypzZrRL4dm2zAWxyXMzuqOLGPOpUm5BwX-7tQ5u270rWSTLtAO3aMXHS_QpyeclscX.3gygZ2NSXSn_hwcfh2gS7CXBOOGdzoU5mdTnjwMjlkA&dib_tag=se&keywords=led+arduino&qid=1740479071&sr=8-7l" target="_blank">Red LED
        <li>📌 <a href="https://www.amazon.fr/ARCELI-Performance-Couleur-Puissance-%C3%89missives/dp/B07PVVHBNW/ref=sr_1_7?dib=eyJ2IjoiMSJ9.cZm-YS2Aq4tNyjvKj8-KAaG564tPYUAQFLwHQLojSVbnDCz-8Dclj6YFTSlwDBk6AoNv6q0foh_i-rv9wl4Dh-yMw0bpG7Q5jfmYCIs7XDl_SqoQgRy84nm2LqYE3hc_1Y3A-pXvHJfxDxQk8riJYYeO15Dw_gzYVSodg-AhxDUr-96XLG0EXKZUXxyvKxEwo8RLCI4wD1MZazhj2R55nvLllaDLlIJSSzY_cY8OxDJQTY8f5OQSvLlkJQ9mBmYDeduEWjLDd8TR4l9E938qc0VbR3mkf1LRc1hho28aUsUKaB_OsEeFZXdTOBwf3RacH1hMXBbbTDw-1XOS6LGK19wjKuDde_gclAw3A7q1SXxMaKMLFXNzfWJmpL60HKypzZrRL4dm2zAWxyXMzuqOLGPOpUm5BwX-7tQ5u270rWSTLtAO3aMXHS_QpyeclscX.3gygZ2NSXSn_hwcfh2gS7CXBOOGdzoU5mdTnjwMjlkA&dib_tag=se&keywords=led+arduino&qid=1740479071&sr=8-7l">Green LED
    </ul>
    <h3>💧 Setup & Usage Guide</h3>
    <h4>1. Anchor Calibration</h4>
    <ol>
        <li>Position one module as a reference tag (at the origin) and another module as the anchor to be calibrated at a known distance (e.g., 1 meter).</li>
        <li>Program the reference tag with the <code>ESP32_UWB_setup_tag</code> code (which uses the default antenna delay of 16384).</li>
        <li>Program the anchor to be calibrated with the <code>ESP32_anchor_autocalibrate</code> code, modifying:
            <ul>
                <li><code>char this_anchor_addr[]</code> with the MAC address of your anchor</li>
                <li><code>float this_anchor_target_distance</code> with the measured distance between the anchor and tag (in meters)</li>
            </ul>
        </li>
        <li>Monitor the serial output of the anchor. The program will perform a binary search to find the optimal <code>Adelay</code> value. Note the final value displayed (<code>final Adelay</code>).</li>
    </ol>
    <h4>2. Final Anchor Configuration</h4>
    <ol>
        <li>Program the anchor with the <code>ESP32_UWB_setup_anchor</code> code, modifying:
            <ul>
                <li><code>char anchor_addr[]</code> with the specific MAC address of this anchor</li>
                <li><code>uint16_t Adelay</code> with the previously calibrated value for this anchor</li>
                <li><code>float dist_m</code> with the calibration distance used (for reference)</li>
            </ul>
        </li>
        <li>Repeat this process for each anchor in your system.</li>
    </ol>
    <h4>3. Tag Configuration</h4>
    <p>For the tag that will be used for positioning:</p>
    <ol>
        <li>Program it with your main tag code <code>ESP32-UWB-DW1000</code>.</li>
        <li>In the tag code, configure the anchor positions according to your physical layout:
    <pre><code>Anchor anchors[3] = {
        {0x84, 0.0, 0.0, 0.0}, // Short address of anchor #1 and its position (x,y,z)
        {0x85, 2.0, 0.0, 0.0}, // Anchor #2
        {0x86, 1.0, 1.0, 0.0}  // Anchor #3
    };</code></pre>
        </li>
    </ol>
    <h4>Important Notes</h4>
    <ul>
        <li>The leftmost two bytes of the MAC address (<code>char anchor_addr[]</code> or <code>char tag_addr[]</code>) will become the short address used in the system.</li>
        <li>It is recommended to follow a consistent naming convention, for example using 0x81, 0x82, 0x83... for anchors.</li>
        <li>The antenna delay values (<code>Adelay</code>) are specific to each hardware module and must be individually calibrated for optimal precision.</li>
        <li>Ensure that all modules are positioned correctly during calibration for accurate results.</li>
        <li>If the calibration process doesn't converge, ensure that the physical distance between the tag and anchor matches the value in <code>this_anchor_target_distance</code>.</li>
        <li>Verify that all modules have clear line-of-sight during calibration.</li>
        <li>Make sure all connections are secure and the modules are properly powered.</li>
    </ul>
    <table style="border: none;">
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1FGZZTgq0lUtnmhsNHxwCyO7RzLgKHPUs" alt="Example of anchor positioning for tag configuration" width="auto"><br>
          <b>Example of anchor positioning for tag configuration</b>
        </td>
    </table>
    <h4>4. System Setup</h4>
    <ol>
        <li>3D Print the support give by the .step file
        <li>Power the three ground anchors using external batteries or different computers for easy placement.</li>
        <li>Connect all necessary components according to the provided .xlsx file.</li>
        <li>Start the drone system and connect the ESPs to computers to verify correct functionality.</li>
        <li>Program the <code>ESP-32-WROOM</code> code into the ESP32-WROOM. 
        <li>In addition, you may use the WiFi mode of the ESP-WROOM-32 to open a WebSerial page on your pc (which has to be connected to the same network as your card). Simply update the following WiFi credentials : <pre>
const char* ssid = "YourWiFiSSID";
const char* password = "YourWiFiPassword";</pre>
        </li>
    </ol>
    <table style="border: none;">
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1CfWfBSkVuJKMw5xtFqDtPJ2En5hf7A5C" alt="3D Print on the printer" width="auto"><br>
          <b>3D Print on the printer</b>
        </td>
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1v2WcK0cmV-BQclsd4JV1Uzgyqit0P7hA" alt="3D Print result" width="auto"><br>
          <b>3D Print result</b>
        </td>
    </table>
<h3>🔌 Electronic System Overview</h3>
<p>Once the system is installed according to the previous requirements, it can be tested.</p>
<p>At this stage, the flying base including the frame, motors, ESCs, battery, and power module is not yet present.  
The assembly on the dedicated support should therefore include the following components:</p>
<ul>
    <li><strong>Radio receiver</strong> FlySky FS-ia6b</li>
    <li><strong>PWM to PPM encoder</strong></li>
    <li><strong>Trainer module</strong> Protoronik 4ch Trainer</li>
    <li><strong>Flight controller</strong> Radiolink Crossflight v1</li>
    <li><strong>ESP32-WROOM-32</strong></li>
    <li><strong>ESP32-UWB-DW1000</strong></li>
    <li><strong>Green and red LEDs</strong></li>
    <li><strong>4x4 Keypad</strong></li>
    <li><strong>Buzzer</strong></li>
    <li><strong>OLED screen</strong></li>
</ul>
<p>Now, by connecting the <strong>ESP32-WROOM</strong> and the <strong>ESP32-UWB-DW1000</strong>, which serves as a tag, 
via their micro-USB port to a computer (or an external battery) to provide power, 
we can verify the proper functioning of the onboard electronics using:</p>
<ul>
    <li><strong>The OLED screen</strong></li>
    <li><strong>The LEDs</strong></li>
    <li><strong>The sound signals</strong></li>
</ul>
<p>These elements allow displaying the appropriate information based on the actions performed on the system and the procedure 
triggered by the remote controller.</p>


