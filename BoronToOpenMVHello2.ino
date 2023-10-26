SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

void setup() {
    Serial.begin(9600);
    Serial1.begin(9600); // Initialize serial communication
}

void loop() {
    if (Serial1.available()) {
        Serial.println("if was true");

        //  Serial.print(Serial1.read());
         delay(500);

//         delay(1000);

        //  String receivedData = Serial1.readString(); 
        Serial.print(Serial1.readString());

//         delay(2000);

//         if (receivedData == "Flood") {
//             Serial.println("Flood");
//         } else if (receivedData == "No Flood") {
//             Serial.println("No Flood");
//         } else {
//             Serial.println("Unknown data: " + receivedData);
//         }

//         delay(1000);

//         Serial.print("Received data from OpenMV: ");
//         Serial.println(receivedData);
     }
 }
 


// void loop() {
//     // Check if there is data available from the OpenMV camera
//     if (Serial.available()) {
//         String receivedData = Serial.readStringUntil('\n'); // Read data until a newline character
//         // Process and use the data received from the OpenMV here
//         Serial.print("Received data from OpenMV: ");
//         Serial.println(receivedData);
//     }
    

//}