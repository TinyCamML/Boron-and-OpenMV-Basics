# Boron-and-OpenMV-Basics

These documents show the basics of how to have the Boron and OpenMV electronics work together on a basic level. 

If the the circuit diagram is repeated correctly and code is flashed onto both devices this device will undergo the following events: 
      1. If both devices are successfully powered the Boron will begin set up and wake up the openMV via digital write. 
      2. The OpenMV will wake up, snap a photo, send "Flood" or "No Flood" back to the Boron and return to machine sleep until woken up again. 
      3. The Boron will recieve either "Flood" or "No Flood" and print this onto the serial monitor.
      4. Boron will return to sleep for 60 seconds and then repeats. 

Overall, this code does not produce a device that is independent from USB power or storing/sending data anywhere except the serial monitor. 
