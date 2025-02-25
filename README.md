<h1>Summary of Tests Conducted on the Demonstrator</h1>
<h2>Powertrain Test</h2>
<p>
    The objective of this test was to validate the choice of the motorization and ensure it met the requirements by quantifying the thrust produced by the motor based on rotation speeds on an engine test bench.
</p>
<p>
    The methodology adopted for this test relied on an engine test bench that provided thrust by varying the motor's rotation speeds based on commands sent from the computer linked to the test bench.
</p>
<p>
    This test was essential as it enabled the execution of all other tests and ensured that the drone was certified to meet the defined objectives without taking risks by testing it in real simulations. It was therefore a crucial step in the validation strategy.
</p>

<h2>Flying Base Test</h2>
<p>
    The objective of this test was to verify the proper functioning of the flying base in its entirety to ensure a reliable and functional working base capable of acquiring the autopilot. The expected validations were: reception and transmission of signals between the remote control and the flight controller with six input channels, stabilization and piloting of the drone without major difficulty, and an audible feedback during arming and disarming.
</p>
<p>
    The methodology adopted for this test was quite simple. The flying system was first powered autonomously, without a ground connection. Then, the operator sent various commands to the flying system via the remote control without a predefined flight plan. The goal was to observe the system's reactions and push it to its electronic limits. The entire test was observed and analyzed qualitatively to verify the proper functioning of the base system and test its limits to some extent.
</p>

<h2>Coordinate Acquisition Test</h2>
<p>
    The objective of this test was to validate the proper functioning of the positioning beacons as part of the localization project. These tests aimed to ensure that the system enabled accurate position acquisition and efficient data processing for the drone's automatic piloting. The expected validations were: acquisition of position data from ground beacons and the main beacon on the drone, and processing of acquired data to adjust the drone’s trajectory in real-time.
</p>
<p>
    The methodology adopted relied on creating a reference frame using positioning beacons. The test steps included: placing the three fixed beacons on the ground to form a triangle using tape as a visual marker, configuring one beacon as the reference center, another as the x-axis end, and the third as the y-axis end, positioning the receiving board on the drone, powering the beacons, and visualizing the coordinates in real-time on the serial monitor of the computer connected to the receiving board. The drone’s position was then varied to observe changes in the acquired coordinates.
</p>
<p>
    After conducting the various tests, the interpretation of the results showed that all performance criteria were met. The system positioned itself correctly in the defined reference frame, transmitting coherent coordinates and adjusting its position consistently within the plane.
</p>

<h2>Display and Distance Acquisition Test</h2>
<p>
    The objective of this test was to verify the proper functioning of the distance reception via the integrated keyboard and to check the correct display on the OLED screen used.
</p>
<p>
    The methodology adopted for this test was very simple: pressing different numbers and checking their display on the screen. Then, the validation and deletion buttons, represented by the "D" and "A" buttons on the keypad, were also tested. The test for acquisition and correct interpretation of the distance was essential to ensure that the fully assembled system executed the desired command correctly.
</p>
<p>
    After conducting the various tests, the interpretation of the results showed that all performance criteria were met. The keys were correctly interpreted, and when the conditions were met, the input was correctly recorded.
</p>

<h2>Switching and Signal Reception Test</h2>
<p>
    The objective of this test was to verify the proper functioning of the switching system and the correct reception and transmission of signals. These tests validated whether the drone responded correctly to the appropriate commands at the right moments. The expected validations were: reception and transmission of signals between the remote control and the flight controller with six input channels, switching between manual and automatic modes with visual feedback for the operator, and arming and disarming the drone with audible feedback and a coherent motor response.
</p>
<p>
    The methodology adopted for this test involved several steps. The flying system was first powered autonomously, without a ground connection. Then, the propellers were removed to ensure the safety of operators and equipment. Movement commands were then sent via the remote control to validate the reception of commands and the motors' response. Finally, the synchronization between light and sound signals and the corresponding actions was observed.
</p>
<p>
    After conducting the various tests, the interpretation of the results showed that all performance criteria were met. The transitions between manual and automatic modes were fast and reliable. The visual and audio indicators were consistent with the performed actions, and the communication with the remote control was stable, with no noticeable latency. The positions were consistent with all movements, the refresh rate was fast, and no abnormal values were observed.
</p>

<h2>Autonomy and Stabilization Test in Manual Mode</h2>
<p>
    This test had a dual objective. It aimed to operationally test the battery’s autonomy and determine the motor speed command values for different flight phases, whether during takeoff or stabilization. This would help implement coherent value ranges in the automatic control system based on the battery's state. The expected validations were: battery autonomy consistent with theoretical calculations and extraction of stabilization values for different flight phases via a web interface.
</p>
<p>
    The methodology adopted for this test involved several steps. The flying system conducted multiple consecutive flights, starting with a fully charged battery. The battery voltage was measured before and after each flight, during which thrust command values allowing the drone to stabilize and take off were recorded. This method was justified by the system’s real operating conditions.
</p>
<p>
    Ultimately, 13 consecutive flights were conducted during this test, and the interpretation of the results showed that all performance criteria were met. The battery discharge occurred correctly, the values were correctly displayed on the web interface, and they were consistent with the visual observations of the drone. The results highlighted a discharge curve that matched a LiPo battery, with a thrust command naturally increasing as the battery discharged. The critical zone, marking the beginning of the critical phase, was defined at exactly 15 minutes, which matched previous theoretical estimates. Additionally, a thrust command range between 1300 and 1400 was established, covering more than 95% of the measured points. The results also allowed visualization of the different stabilization levels of the drone, with a command required to compensate for its own weight around 1250, and a stabilization command...
</p>
