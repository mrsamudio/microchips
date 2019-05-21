/*

 
 */
#include <SoftwareSerial.h>

SoftwareSerial HC06(0, 1); // RX, TX
SoftwareSerial PIC18F(19, 18); // RX, TX
String comando="";

void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
    
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  Serial.println("Configurado.");

  // set the data rate for the SoftwareSerial port
  HC06.begin(9600);
  PIC18F.begin(9600);

}

void loop() // run over and over
{
  if (HC06.available()){
    Serial.write(HC06.read());
  }
    
  if (Serial.available()){
    PIC18F.println(Serial.read());
  }

  if (PIC18F.available()){
    Serial.write(PIC18F.read());
  }
}
