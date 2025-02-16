<!DOCTYPE html>
<html>
<head>
    <title>Autonomous & Manual QuadCopter Project</title>
</head>
<body>
    <h1>🚁 Autonomous & Manual QuadCopter Project</h1>
    <h2>📌 Project Overview</h2>
    <p>This project aims to demonstrate, through a physical prototype, the feasibility of a quadrotor drone capable of operating in two modes:</p>
    <ul>
        <li>✅ <strong>Manual Mode</strong> – Controlled by a pilot.</li>
        <li>✅ <strong>Autonomous Mode</strong> – Executes a predefined flight sequence without pilot intervention.</li>
    </ul>
    <h2>✈️ Flight Sequence</h2>
    <p>The predefined flight sequence consists of:</p>
    <ol>
        <li>Vertical Takeoff</li>
        <li>Horizontal Flight (adjustable distance: 0 to 15m)</li>
        <li>Vertical Landing</li>
    </ol>
    <p>The drone will maintain an altitude of 1.50m ± 50cm and follow a 4-checkpoint path.</p>
    <h2>🎯 Key Objectives</h2>
    <ul>
        <li>🔹 <strong>Safety First</strong> – The manual override must be possible at any moment during autonomous flight.</li>
        <li>🔹 <strong>Smooth Takeoff & Landing</strong> – The drone must gradually take off and land gently.</li>
        <li>🔹 <strong>Stable Manual Control</strong> – It should be easy to fly manually.</li>
        <li>🔹 <strong>Clear Mode Indicator</strong> – A visible light signal must indicate when autonomous mode is active.</li>
        <li>🔹 <strong>Wind Sensitivity Analysis</strong> – The drone's stability and drift due to wind should be evaluated.</li>
    </ul>
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
    <h2>🛠️ Hardware Components</h2>
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
        <li><strong>Flight Controller:</strong> Radiolink Crossflight V1</li>
        <li><strong>Frame & Power System:</strong>
            <ul>
                <li>Chassis: F450</li>
                <li>Battery: Tatu 4S 3700mAh 45C</li>
            </ul>
        </li>
        <li><strong>Remote Control System:</strong>
            <ul>
                <li>Transmitter: FlySky FS-I6</li>
                <li>Receiver: FlySky FS-Ia6b</li>
            </ul>
        </li>
    </ul> 
    <p>💡 Feel free to contribute and follow the progress of this project! 🚀</p>
</body>
</html>
