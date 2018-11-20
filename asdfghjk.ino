#include <ContinuousServo.h>

 ContinuousServo pata1di(11);
 ContinuousServo pata2dd(9);
 ContinuousServo pata3ti(5);
 ContinuousServo pata4td(3);
 
void setup() {
  // put your setup code here, to run once:
}

void loop() {
 pata2dd.step(-10);
 pata3ti.step(10);
 delay(350);
 pata1di.step(10);
 pata4td.step(-10);
  // put your main code here, to run repeatedly:

} 
