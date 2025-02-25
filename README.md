<h1>🚀 Summary of Tests Conducted on the Demonstrator</h1>

<p>Refer to the project report in the 'main' section for more details on the different tests conducted.</p>

<h2>⚡ Power Chain Test</h2>
<p>
    The objective of this test was to validate the choice of motorization and ensure it would satisfy the requirements by quantifying the thrust produced by the motor as a function of rotation speeds on a motor test bench.
</p>
<p>
    The methodology adopted for this test relied on a motor test bench that provided thrust measurements while varying the motor rotation speeds based on commands sent from a computer connected to the test bench.
</p>
<p>
    This test was essential as it enabled the completion of all other tests and ensured that the drone was certified capable of meeting the defined objectives without taking risks by testing it in real simulations. It was therefore an indispensable step in the validation strategy.
</p>

<p>📌 The test results can be found under the name 'Test_motor_bench'.</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1-g6ZamxnZHwk6Sl2U2UhmgXwc5o1zDx5" alt="Front View of the power chain test" width="300"><br>
      <b>Front View of the power chain test</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1c1gRYpmMrDUK6on2Ys8TTRmiHXrLoRBF" alt="Side View of the power chain test" width="300"><br>
      <b>Side View of the power chain test</b>
    </td>
  </tr>
</table>


<h2>🛩️ Flying Base Test</h2>
<p>
    The objective of this test was to verify the proper functioning of the entire flying base to ensure a reliable and functional working base capable of acquiring the autopilot. The expected validations were: reception and transmission of signals between the radio remote control and the flight controller with 6 input channels, stabilization and piloting of the drone possible without great difficulty, and sound feedback during arming and disarming.
</p>
<p>
    The methodology adopted for this test relied on a fairly simple method. The flying system was first powered autonomously, without ground connection. Then, the operator sent various instructions and commands to the flying system via the radio remote control without a precise flight plan. The objective was to observe the system's reactions and push it to its electronic limits. The entire test was observed and analyzed qualitatively to verify the proper functioning of the basic system and test its limits to a certain extent.
</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1gyZvQQwIwK_9I0Kle62mnGGhs7xUeYcP" alt="Flight of the flying base" width="300"><br>
      <b>Flight of the flying base</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1aOviJ_3V3lzWJdozZoeFVluOCefjE4hd" alt="View of the flying base" width="300"><br>
      <b>View of the flying base</b>
    </td>
  </tr>
</table>


<h2>📡 Spatial Coordinate Acquisition Test</h2>
<p>
    The objective of this test was to validate the proper functioning of the positioning beacons as part of the localization project. These tests aimed to ensure that the system allowed for accurate position acquisition and efficient data processing for automatic drone piloting. The expected validations were: acquisition of position data from ground beacons and the main beacon on the drone, and processing of acquired data to adjust the drone's trajectory in real time.
</p>
<p>
    The methodology adopted was based on creating a reference frame using positioning beacons. The test steps included: arranging the three fixed beacons on the ground to form a triangle using tape as a visual reference, configuring one beacon as the center of the reference frame, another as the endpoint of the x-axis, and the third as the endpoint of the y-axis, positioning the receiving card on the drone, powering the beacons and visualizing the coordinates in real time on the serial monitor of the computer connected to the receiver card, and varying the position of the drone to observe variations in the acquired coordinates.
</p>
<p>
    After conducting the various tests, the interpretation of the results showed that all performance criteria were met. The system positioned itself correctly in the defined reference frame by transmitting coherent coordinates and corrected itself coherently in the plane.
</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1aWt-ueR6snMo7IGHWMDvsq-sR4lq2OLv" alt="View of the test" width="300"><br>
      <b>View of the test</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1vz6uMzxpaeANnhmqQycZjO8bVxq2lo_6" alt="Ensure the good acquisition with side by side anchor and tag" width="300"><br>
      <b>Ensure the good acquisition with side by side anchor and tag</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1lPsh8ug1FLAaXvn8MKeKv_8HdM94-FMG" alt="Side by side anchor and tag" width="300"><br>
      <b>Side by side anchor and tag</b>
    </td>
  </tr>
</table>


<h2>📏 Display and Acquisition of Distance to Travel Test</h2>
<p>
    The objective of this test was to verify the proper functioning of the reception of the distance to travel via the integrated keyboard and to verify the proper display on the OLED screen used.
</p>
<p>
    The methodology adopted for this test was very simple and consisted simply of pressing different numbers and observing their display on the screen. Then, the buttons for validating the selection to record the entered value and clearing the entry, represented respectively by buttons "D" and "A" on the Keypad, were also tested. Testing the acquisition and correct interpretation of the distance was essential to ensure that the complete and assembled system did not execute an unintended order.
</p>
<p>
    After conducting the various tests, the interpretation of the results showed that all performance criteria were met. Indeed, the keys were correctly interpreted and when the conditions were correctly met, the entry was properly recorded.
</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1NsB3csfJmh_vCrh2tskT9ylf6tXGgXbf" alt="View of the test and the used components" width="300"><br>
      <b>View of the test and the used components</b>
    </td>
  </tr>
</table>



<h2>🔄 Signal Switching and Reception Test</h2>
<p>
    The objective of this test was to verify the proper functioning of the switching system and the correct reception and emission of signals. These tests validated whether the drone responded correctly to the right commands at the right times. The expected validations were: reception and transmission of signals between the radio remote control and the flight controller with 6 input channels, switching between manual mode and automatic mode with visual feedback for the operator, and arming and disarming of the drone with sound feedback and a coherent motor response.
</p>
<p>
    The methodology adopted for this test relied on several steps. The flying system was first powered autonomously, without ground connection. Then, the propellers were removed to ensure the safety of operators and equipment. Movement commands were then sent via the radio remote control to validate the reception of instructions and the response of the motors. Finally, the synchronization between light and sound signals and the corresponding actions was observed.
</p>
<p>
    After conducting the various tests, the interpretation of the results showed that all performance criteria were met. Transitions between manual and automatic modes occurred quickly and reliably. Visual and sound indicators were consistent with the actions performed, and communication with the radio remote control was stable, without notable latency. Positions were consistent with all movements, refreshing was rapid and without aberrant values.
</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1Ka3EsFYqN8lSfGo8UHW-kS36_fVNqD_k" alt="Test of the radio command on the drone" width="300"><br>
      <b>Test of the radio command on the drone</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1Nsc7zK120F_ogPw5t2Hz9_iub8flBePr" alt="Test of the signal send by the radio" width="300"><br>
      <b>Test of the signal send by the radio</b>
    </td>
  </tr>
</table>


<h2>🔋 Autonomy and Stabilization Test in Manual Mode</h2>
<p>
    The objective of this test was twofold. It was to operationally test the battery autonomy and also to determine the motor rotation speed command settings for the different flight phases, whether at takeoff or during stabilization. This would serve to implement coherent value ranges in the automatic control system based on the battery state. The expected validations were: battery autonomy consistent with theoretical calculations and extraction of stabilization values at different flight phases via a Web interface.
</p>
<p>
    The methodology adopted for this test relied on several steps. The flying system performed different consecutive flights starting the test with the battery charged to its full potential. The battery voltage was measured before and after each flight, during which the thrust command values allowing the drone to stabilize and take off were recorded using WebSerial support.
</p>
<p>
    In the end, 13 consecutive flights were made during this test and the interpretation of the results showed that all performance criteria were met. The battery discharge occurred correctly, the values were displayed correctly on the Web interface and were consistent with visual observations of the drone. The obtained results revealed a discharge curve that corresponded well to that of a LiPo battery with a thrust command that naturally increased as the battery discharged. The critical zone, marking the beginning of the critical area, was defined at exactly 15 minutes, corresponding well to the theoretical estimates made previously. Additionally, a value range for the thrust command between 1300 and 1400 was defined, encompassing more than 95% of the measured points. The results also allowed for visualization of the different stabilization levels of the drone with a command necessary to allow the drone to compensate for its own weight around 1250 and a stabilization command in the air around 1330.
</p>

<p>📌 The test results can be found under the name 'Test_pwm_takeoff_&_steady_flight'. Moreover, the code to generate the curves thanks to the values can be found under the name 'Values_analyse_&_extraction'. The last file 'Get_thrust_data_WiFi' gives the code to run on the ESP-WROOM-32 to obtain the power values on a WebSerial support.</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1hKqtqZbd135iH9xSw_mX1w1HsMueR70T" alt="Discharge curve of the used battery" width="300"><br>
      <b>Discharge curve of the used battery</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1Xxt2jTy3rwbD49rtWWFR2QejfDRoqSlG" alt="Stabilization power required" width="300"><br>
      <b>Stabilization power required</b>
    </td>
  </tr>
</table>


<h2>🛠️ Complete Flight Sequence Test Without Propellers</h2>
<p>
    The objective of the test was to test the functioning of the automatic module for a flight sequence without horizontal movement (ascent, stabilization, descent) without propellers. This allowed for easy observation of all data from the autopilot, including position acquisition and the resulting commands, by being directly connected to it via the computer's USB port. The expected validations were: position acquisition consistent with the actual position, motor commands consistent with expected behavior, and automatic system failure at the end of the flight sequence.
</p>
<p>
    The methodology adopted for this test relied on several steps. The flying system was first powered autonomously, without ground connection. Then, the propellers were removed to ensure the safety of operators and equipment. The ESP32-WROOM-32 was connected to a computer to observe the evolution of commands sent to the flight controller on the serial monitor. The three ESP32 UWB DW1000 beacons were placed on the ground and configured. A flight sequence was then defined and initiated by the operator who manually moved the drone according to the trajectory and flight stages.
</p>
<p>
    After conducting the test, the interpretation of the results showed that all performance criteria were correctly met. The commands sent by the ESP32-WROOM-32 were coherent and reliable. The different flight phases were well respected and the commands sent to the motors were coherent, with the motors starting to rotate only when the arming signal was triggered. The sequence that followed was a succession of different flight phases: linear motor startup, ascent with acceleration then deceleration, stabilization, descent with respect to the minimum ceiling, and progressive and linear motor shutdown once the ground was reached.
</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1dTtlIzr8sCuqPYHOU1dkxSBeVVuwxGWE" alt="View of the test" width="300"><br>
      <b>View of the test</b>
    </td>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1WE9X7F20h9HV1eTdGOhZ2suHoEalEelE" alt="Results of the power asked during the flight" width="300"><br>
      <b>Results of the power asked during the flight</b>
    </td>
  </tr>
</table>


<h2>✈️ Complete Flight Sequence Test With Propellers and in Semi-Automatic Mode</h2>
<p>
    The objective of the test was to test the functioning of the automatic module for a complete flight sequence without horizontal movement (ascent, stabilization, descent) with propellers. The particularity of this test was that only the thrust command was automated while all other pitch, roll, and yaw commands were left to the operator. The expected validations were: respect of the flight plan and motor commands consistent with expected behavior.
</p>
<p>
    The methodology adopted for this test relied on several steps. The flying system was first powered autonomously, without ground connection. Then, the propellers were placed on the flying system. The ESP32-WROOM-32 transmitted via WiFi to the computer the essential positioning data to observe if the evolution of the system was correct during the flight. The three ESP32 UWB DW1000 beacons were placed on the ground and configured. A flight sequence was then defined and initiated by the operator.
</p>
<p>
    After conducting the test, the interpretation of the results showed that all performance criteria were correctly met. The flight sequence was well respected despite the low battery level which prevented the system from taking off further.
</p>

<table style="border: none;">
  <tr>
    <td align="center"  style="border: none;">
      <img src="https://drive.google.com/uc?export=view&id=1JlPGEiBQBPGsqY5pi0VMuSVhQcODxLOD" alt="FLlying autonomous drone" width="300"><br>
      <b>FLlying autonomous drone</b>
    </td>
  </tr>
</table>
