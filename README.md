<h1>🚁 Autonomous & Manual QuadCopter Project</h1>
    <h2>📌 Project Overview</h2>
    <p>The AutoQuad project, entrusted to our team of six engineering students by Dragonfly 4U, is part of the development and validation of a complex system. The goal was to design a physical demonstrator of a quadcopter drone integrating two flight modes: manual and autonomous.</p>
    <p>This project represented a high-value engineering challenge, requiring mastery of design, integration, and experimental validation processes. The specifications outlined the following requirements:</p>
    <ol>
        <li>Operating modes:
            <ul>
                <li>In manual mode, the drone should be easily controllable.</li>
                <li>In autonomous mode, it should execute a predefined sequence (takeoff, stabilization, horizontal flight, and landing) without human intervention, with the ability to switch immediately to manual mode in case of emergency.</li>
            </ul>
        </li>
        <li>Safety and signaling:
            <ul>
                <li>Mode switching should be immediate.</li>
                <li>A visible light signal, detectable from a distance of 20 meters, should indicate the activation of autonomous mode.</li>
            </ul>
        </li>
        <li>Technical design:
            <ul>
                <li>The drone should fit within a cubic size of 50 cm on each side.</li>
                <li>The base platform should be a commercially available model capable of manual flight, enhanced with sensors and onboard computers for autonomous operation.</li>
                <li>The motors should only be armed in manual mode.</li>
            </ul>
        </li>
        <li>Performance expectations:
            <ul>
                <li>Gradual takeoff, wind stability, and controlled landing.</li>
                <li>A quantitative evaluation of thrust capabilities, autonomy, and response to disturbances.</li>
            </ul>
        </li>
    </ol>
    <h2>✈️ Flight Sequence</h2>
    <p>The predefined flight sequence consists of:</p>
    <ol>
        <li>Vertical Takeoff</li>
        <li>Horizontal Flight (adjustable distance: 0 to 15m)</li>
        <li>Vertical Landing</li>
    </ol>
    <p>The drone will maintain an altitude of 1.50m ± 50cm and follow a 4-checkpoint path.</p>
    <table style="border: none;">
      <tr>
        <td align="center" style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1kNifYnU6BgreVVT3TI_HxH7QWpzfhgN6" alt="View of the flight"><br>
          <b>View of the flight</b>
        </td>
      </tr>
    </table>
    <h2>🛠️ Technical Requirements</h2>
    <ul>
        <li>The drone must be an electric quadcopter.</li>
        <li>It must be built using:
            <ul>
                <li>A commercial quadcopter base capable of manual flight.</li>
                <li>Additional components (sensors, onboard computer, etc.) for autonomous operation.</li>
            </ul>
        </li>
        <li>The autopilot must control the flight controller in the same way as a human operator using a remote control.</li>
        <li>Arming the drone is only possible in manual mode.</li>
        <li>The drone must fit within a 50cm x 50cm x 50cm cube.</li>
    </ul>
    <h2>🛠️ Used Components</h2>
    <h3>Flying Base Components</h3>
    <ul>
        <li><strong>Motors:</strong>
            <ul>
                <li>2x CW AIR226II 920KV (T-Motor)</li>
                <li>2x CCW AIR226II 920KV (T-Motor)</li>
            </ul>
        </li>
        <li><strong>ESCs:</strong> 4x AIR 20A (T-Motor)</li>
        <li><strong>Propellers:</strong>
            <ul>
                <li>2x CW Holybro 1045 S500 v2</li>
                <li>2x CCW Holybro 1045 S500 v2</li>
            </ul>
        </li>
        <li><strong>Frame & Power System:</strong>
            <ul>
                <li>Chassis: F450</li>
                <li>Battery: Tatu 4S 3700mAh 45C</li>
            </ul>
        </li>
    </ul> 
    <h3>Electronic Components</h3>
    <p>All electronic components are detailed in the 'soft-& hardware' section.</p>
    <h2>🖥️ CAD Design & Mechanical Engineering</h2>
    <p>The mechanical design of our quadcopter was entirely developed using CAD software to ensure optimal component placement, weight distribution, and aerodynamic performance.</p>
    <ul>
        <li><strong>Frame Design:</strong> Starting with the F450 frame, we optimized the structure to accommodate additional sensors and electronics while maintaining strength and minimizing weight.</li>
        <li><strong>Component Mounting:</strong> Custom-designed mounts for the following components:
            <ul>
                <li>Onboard computer housing with ventilation</li>
                <li>Sensor platforms with vibration isolation</li>
                <li>Battery compartment with quick-release mechanism</li>
                <li>Camera gimbal with stabilization</li>
            </ul>
        </li>
        <li><strong>Cable Management:</strong> Integrated cable routing to minimize electromagnetic interference and maintain a clean profile.</li>
        <li><strong>Protective Elements:</strong> Propeller guards and landing gear designed to protect critical components during testing.</li>
    </ul>
    <p>All CAD models were validated through structural analysis to ensure they could withstand the forces experienced during flight, including emergency maneuvers.</p>
    <h2>📊 Matlab/Simulink Modeling & Control</h2>
    <p>A comprehensive virtual model of the quadcopter was developed using Matlab/Simulink to design and validate the control algorithms before implementation on the physical drone.</p>
    <h3>Simulation Models</h3>
    <ul>
        <li><strong>Drone Dynamics:</strong> 6-DOF (Degrees of Freedom) model incorporating:
            <ul>
                <li>Aerodynamic forces and moments</li>
                <li>Motor dynamics and thrust models</li>
                <li>Inertial properties from CAD designs</li>
                <li>Environmental disturbances (wind, turbulence)</li>
            </ul>
        </li>
        <li><strong>Sensor Models:</strong> Realistic sensor models including noise characteristics for:
            <ul>
                <li>IMU (accelerometer, gyroscope, magnetometer)</li>
                <li>GPS/Indoor positioning system</li>
                <li>Ultrasonic altitude sensor</li>
                <li>Optical flow for velocity estimation</li>
            </ul>
        </li>
        <li><strong>Battery Discharge Model:</strong> Prediction of flight time based on power consumption and maneuvers.</li>
    </ul>
    <h3>Control System Design</h3>
    <ul>
        <li><strong>Cascaded PID Controllers:</strong> For attitude (roll, pitch, yaw) and position control.</li>
        <li><strong>State Estimation:</strong> Extended Kalman Filter for sensor fusion and state estimation.</li>
        <li><strong>Trajectory Generation:</strong> Smooth trajectory planning for the autonomous flight sequence.</li>
        <li><strong>Mode Switching Logic:</strong> Safe transition between manual and autonomous modes.</li>
    </ul>
    <h3>Simulation Results</h3>
    <p>The Matlab/Simulink model allowed us to:</p>
    <ul>
        <li>Fine-tune control parameters before real-world testing</li>
        <li>Validate the entire flight sequence in various conditions</li>
        <li>Identify and mitigate potential failure modes</li>
        <li>Optimize battery usage and flight performance</li>
    </ul>
    <p>A complete virtual testbed is available in the 'Matlab_Simulink_drone' file, allowing for parameter adjustments and scenario testing.</p>
    <h2>🔍 Testing & Performance</h2>
    <p>Extensive testing was conducted to validate both the simulation results and the physical drone performance:</p>
    <ul>
        <li><strong>Component Testing:</strong> Individual validation of sensors, motors, and control systems.</li>
        <li><strong>Hardware-in-the-Loop Testing:</strong> Integration of the physical flight controller with the simulation environment.</li>
        <li><strong>Controlled Environment Testing:</strong> Initial flight tests in indoor environments with motion capture systems.</li>
        <li><strong>Field Testing:</strong> Outdoor testing under various weather conditions.</li>
    </ul>
    <h3>Performance Metrics</h3>
    <ul>
        <li><strong>Altitude Stability:</strong> ±5cm in hover mode</li>
        <li><strong>Position Accuracy:</strong> ±10cm at checkpoints</li>
        <li><strong>Wind Tolerance:</strong> Stable operation in winds up to 15 km/h</li>
        <li><strong>Battery Life:</strong> 12 minutes of continuous flight time</li>
        <li><strong>Mode Switching:</strong> Instantaneous transition with no observable latency</li>
    </ul>
    <h2>🏆 Achievement</h2>
    <p>
        To achieve these objectives, development relies on existing platforms selected as the basis for designing the demonstrator. While these platforms are limited by incomplete information on the final product structure, they allow for assessing the feasibility and credibility of the concept for future mass production. 
    <p>
        This report details the entire development process, from the initial functional analysis to the demonstration of the assembled demonstrator. It outlines critical engineering decisions, applied methodologies, and the results of testing phases, with a focus on traceability and performance optimization. The approach followed was structured around system engineering principles: needs analysis, functional decomposition, justification of technical choices, integration of subsystems, and final validation through experimentation. This resulted in the creation of a complete virtual system under Matlab/Simulink, available in the file 'Matlab_Simulink_drone,' in order to quantify all parameters and bridge the gap between theory and practice.</p>
    <p>
        The project team comprises Nicolas ABAT, Alexandre CASTEX, Thomas FORTUNATO, Constance NGUYEN, Julien TAKTALIAN, and Joachim KOEHL as project managers. 
    </p>
