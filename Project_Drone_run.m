clear
close all
    
%% Initialisation modèle
% Paramètres du drône quadrirotor
k = 3.13E-5;%3.13E-5; % constante de poussée
l = 0.23; % distance entre les rotor et le centre de gravité du drône (m)
m = 1.232; % masse du drône (kg)
b = 7.5*10^-7;%7.5E-5; % constante de traînée
g = 9.81; % constante de gravitation
I_M = 6.24*10^-6; % Inertie du rotor des moteurs
% Matrice d'inertie (kg.m²):
Ixx = 0.01;
Ixy = 2.119e-5;
Ixz = 3.808e-6;
Iyx = 2.006e-5;
Iyy = 0.011;
Iyz = 2.006e-5;
Izx = 3.808e-6;
Izy = 2.119e-5;
Izz = 0.019;
I = [Ixx, Ixy, Ixz; Iyx, Iyy, Iyz; Izx, Izy, Izz];
Iinv = I^-1;
% Matrice de traînée
Axx = 0.0001;
Ayy = 0.0001;
Azz = 0.0001;
A = [Axx, 0, 0; 0, Ayy, 0; 0, 0, Azz];
R = [sqrt(2)/2, sqrt(2)/2, 0; -sqrt(2)/2, sqrt(2)/2, 0; 0, 0, 1];
Rt = transpose(R);

%% Initialisation des capteurs

Bruit = 0.002;%0.012
Biais = 0.024;%0.034
retard = 0.001;%0.12

%% Initialisation PID
KpZ = 20; %
KiZ = 0; %
KdZ = 8; %
KpPhi = 190; %
KiPhi = 10; %
KdPhi = 30; %
KpTheta = 190; %
KiTheta = 10; %
KdTheta = 30; %
KpPsi = 190; %
KiPsi = 10; %
KdPsi = 30; %

KpU = 0.6; % 1.71
KiU = 0.2; % 0.64
KdU = 0; % 0

KpV = 0.6; % 1.91
KiV = 0.2; % 0.64
KdV = 0; % 0




%% Paramètres de simulation
Tfinsim = 60;
Tech = 0.001;
Tsim = (0:Tech:Tfinsim).';

%% Paramètres de consigne


% altitude de consigne (m)
Zc = 1.5;
Xc = 0;
Yc = 0;
% lacet de consigne (rad)
Psic =  0;
% tangage de consigne (rad)
Thetac = 0;
% roulis de consigne (rad)
Phic = 0;

%% Lancement Simulation
out = sim('Project_Drone');

%% Export des mesures
temps = out.x_drone.time;
x_drone = out.x_drone.signals.values(:);
y_drone = out.y_drone.signals.values(:);
z_drone = out.z_drone.signals.values(:);
phi_drone = out.phi_drone.signals.values(:);
theta_drone = out.theta_drone.signals.values(:);
psi_drone = out.psi_drone.signals.values(:);
omega1c_drone = sqrt(abs(out.omegacarre1_c.signals.values(:)));
omega2c_drone = sqrt(abs(out.omegacarre2_c.signals.values(:)));
omega3c_drone = sqrt(abs(out.omegacarre3_c.signals.values(:)));
omega4c_drone = sqrt(abs(out.omegacarre4_c.signals.values(:)));

figure; title('vitesse moteur');
subplot(2,2,1); plot(temps,omega1c_drone*60/(2*pi)); ylabel('w1 (tr/min)'); grid on
subplot(2,2,2); plot(temps,omega2c_drone*60/(2*pi)); ylabel('w2 (tr/min)'); grid on
subplot(2,2,3); plot(temps,omega3c_drone*60/(2*pi)); ylabel('w3 (tr/min)'); grid on
subplot(2,2,4); plot(temps,omega4c_drone*60/(2*pi)); ylabel('w4 (tr/min)'); grid on

figure; title('position du drone')
subplot(2,2,1); plot(temps,x_drone); ylabel('X (m)'); grid on
subplot(2,2,2); plot(temps,y_drone); ylabel('Y (m)'); grid on
subplot(2,2,3); plot(temps,z_drone); ylabel('Z (m)'); grid on
subplot(2,2,4); plot3(x_drone,y_drone,z_drone); grid on

figure; title('attitude du drone'); 
subplot(2,2,1); plot(temps,psi_drone.*180/pi); ylabel('\psi (°)'); grid on
subplot(2,2,2); plot(temps,theta_drone.*180/pi); ylabel('\theta (°)'); grid on
subplot(2,2,3); plot(temps,phi_drone.*180/pi); ylabel('\phi (°)'); grid on


