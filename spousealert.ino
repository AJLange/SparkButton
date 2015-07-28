// This #include statement was automatically added by the Spark IDE.
#include "SparkButton/SparkButton.h"


/* This SparkButton library has some useful functions. 
Here we blink ALL the LEDs instead of just one.*/

SparkButton b = SparkButton();


void setup() {
    // Tell b to get everything ready to go
    b.begin();
    //make sure LEDS are off
    b.allLedsOff();
     Spark.function("led",ledToggle);
}

void loop(){

}

int ledToggle(String command) {
    
    if (command=="yo"){
    b.allLedsOn(100,20,20);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(100,20,20);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(100,20,20);
    delay(1000);
    b.allLedsOff();
    return 1;
    
    // LEDs flash pink
    }
    
    else {
        return -1;
    }
}
