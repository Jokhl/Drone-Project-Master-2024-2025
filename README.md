<h1>🚁 Autonomous & Manual QuadCopter Project</h1>
    <BR>
    <h2>📌 Project Overview</h2>
    <p>The AutoQuad project, entrusted to our team of six engineers by Dragonfly 4U, is part of the development and validation of a complex system. The goal was to design a physical demonstrator of a quadcopter drone integrating two flight modes: manual and autonomous.</p>
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
    <BR>
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
        <td align="center"  style="border: none;">
          <img src="https://drive.google.com/uc?export=view&id=1kNifYnU6BgreVVT3TI_HxH7QWpzfhgN6" alt="View of the flight"><br>
          <b>View of the flight</b>
        </td>
      </tr>
    </table>
    <BR>
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
    <BR>
    <h2>🛠️ Flying Base Components</h2>
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
    <h2>Electronic Components</h2>
    <p>All electronic components are detailed in the 'soft-& hardware' section.</p>
    <p>To achieve these objectives, development relies on existing platforms selected as the basis for designing the demonstrator. While these platforms are limited by incomplete information on the final product structure, they allow for assessing the feasibility and credibility of the concept for future mass production. This report details the entire development process, from the initial functional analysis to the demonstration of the assembled demonstrator. It outlines critical engineering decisions, applied methodologies, and the results of testing phases, with a focus on traceability and performance optimization. The approach followed was structured around system engineering principles: needs analysis, functional decomposition, justification of technical choices, integration of subsystems, and final validation through experimentation. This resulted in the creation of a complete virtual system under Matlab/Simulink, available in the file 'Matlab_Simulink_drone,' in order to quantify all parameters and bridge the gap between theory and practice.</p>
