#include "SparkButton/SparkButton.h"
#include "math.h"

/*How about we make this interactive?*/ 

Button b = Button();

void setup() {
    //Tell b to get everything ready to go
    b.begin();
}

void loop(){
    
    //When you click the second button (at the 3 o'clock position) let's turn that LED on
    if(b.buttonOn(2)){
        ledOn(3, 255, 255, 255);
    }
    //And if it's not on, then we'll turn all the LEDs off
    else {
        allLedsOff();
    }
    
    //Much like the LEDs, there are also functions to check if all the buttons are on- b.allButtonsOn()
    //or if all the buttons are off- b.allButtonsOff()
}