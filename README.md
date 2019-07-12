# Simulink_Arduino

Example program for "custom" arduino simulink external mode
Tested with Arduino Due board.

Required Toolboxes:
simulink coder
matlab coder
embedded coder
instrument control toolbox

Required Packages:
Simulink Support Package for Arduino Hardware

References: https://de.mathworks.com/matlabcentral/fileexchange/39354-device-drivers


arduino_deploy.slx:

In the model configuration in Hardware Implementation select your hardware board
Click "Build Model" 

example_simulink_send_receive.slx:
Configure com port and run the simulation

If a new simulink model for deployment is made run this command in Matlab command window once:

set_param('simulink_model_name','CustomSource', fullfile('arduino_wrapper.cpp'));
