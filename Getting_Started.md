# Getting Started File 

# Wires Connections

ground openMV
TX on OpenMV to RX on Boron (UART1)
RX on OpenMV to TX on Boron (UART1)
ground Boron
power Boron

You can view an updated circuit diagram here ([https://github.com/TinyCamML/Boron-and-OpenMV-Basics/commit/6557d37fab1119bf6d81e07e3c410bd5a475df15])

# Computer Connections

I connected both the Boron and OpenMV Camera to my computer via USB ports. One past issue is that OpenMV may have not had enough power to undergo what we were asking. When I plugged in the OpenMV to my computer it had enough power. USB to both Boron and OpenMV allowed us to see serial monitors for both devices and track both of their responses. 

# Code for OpenMV and Boron

Code for the OpenMV is linked here: (https://github.com/TinyCamML/Boron-and-OpenMV-Basics/commit/5c93b57ff53dc3bee2f44a02b768769cc139b24e)

Code for the Boron is linked here: (https://github.com/TinyCamML/Boron-and-OpenMV-Basics/commit/1d1e154b9737185783be5d1d862a0c3c1c278c90)

I began by running the OpenMV code on OpenMV IDE. It is important to make sure that the .tflite file saved on the camera matches the .tflite file being called in the code. 
Once I ran this code I was seeing dimensions and either "Flood" or "No Flood" on the serial monitor. Then I flashed the Boron code and opened the serial monitor. If all is successful
you should see on the VS serial monitor "Flood it was true" or "No Flood it was true". The print statment "it was true" is early in the code to tell me if serial1 is available. 
