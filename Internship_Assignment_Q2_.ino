/*Made by: Hussain Sabunwala
 * Ph no: 9680437016
 * Date: 11/01/2021
 */
#include "BluetoothSerial.h"

BluetoothSerial SerialBlt;

void setup() {
  Serial.begin(9600);
  SerialBlt.begin();
  Serial.println("Bluetooth Started! Ready to pair...");
}

void loop() {
  if (Serial.available())
  {
    SerialBlt.write(Serial.read());
  }
  if (SerialBlt.available())
  {
    Serial.write(SerialBT.read());
  }
  delay(50);
}
