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
    
    else if (command=="text"){
    b.allLedsOn(20,100,20);
    }
    
    else if (command=="alert"){
    b.allLedsOn(10,20,100);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(10,20,100);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(10,20,100);
    delay(1000);
    b.allLedsOff();
    return 1;
    }
    
    else if (command=="red"){
    b.allLedsOn(200,10,0);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(200,10,0);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(200,10,0);
    delay(1000);
    b.allLedsOff();
    delay(1000);
    b.allLedsOn(200,10,0);
    delay(1000);
    b.allLedsOff();
    return 1;
    }
    
    else if (command=="off"){
    b.allLedsOff();
    }
    
    else {
        return -1;
    }
}
