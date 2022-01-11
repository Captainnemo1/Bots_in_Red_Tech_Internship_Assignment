/*Made by: Hussain Sabunwala
 * Ph no: 9680437016
 * Date: 11/01/2021
 */
#include <Stepper.h>

const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 18, 12, 19, 13);
//pins in order of 1,3,2,4

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one step:
  myStepper.step(5);//takes 5 step in the forward direction
  delay(500);//delay added
  myStepper.step(-10);//takes 10 steps in the backward direction
  delay(500);
}
