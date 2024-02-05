
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

SystemSleepConfiguration config;

// Various timing constants
//const unsigned long MAX_TIME_TO_PUBLISH_MS = 20000; // Only stay awake for this time trying to connect to the cloud and publish
// const unsigned long TIME_AFTER_PUBLISH_MS = 4000; // After publish, wait 4 seconds for data to go out
const unsigned long SECONDS_BETWEEN_MEASUREMENTS = 59; // What should sampling period be?
const unsigned long EARLYBIRD_SECONDS = 0; // how long before desired time should I wake up? Sample currenly takes 10 s, so wake up 10 s early


void setup() {
    Serial.begin(9600);
    Serial1.begin(9600); // Initialize serial communication
}

void loop() {

        Serial1.print("R");
    
         delay(1000);

        Serial.println(Serial1.readString());
        

         config.mode(SystemSleepMode::ULTRA_LOW_POWER)
         .gpio(D2, FALLING)
         .duration(60* 1000L); // Set seconds until wake

//Ready to sleep
        SystemSleepResult result = System.sleep(config); // Device sleeps here
     }

     int secondsUntilNextEvent() {

         //int current_seconds = Time.now();
         int seconds_to_sleep = SECONDS_BETWEEN_MEASUREMENTS - EARLYBIRD_SECONDS; //- (current_seconds % SECONDS_BETWEEN_MEASUREMENTS);

         Serial.print("Sleeping for ");
         Serial.println(seconds_to_sleep);

         return seconds_to_sleep;
 }