#include <Servo.h>

int i = 0;

Servo servo_10;

Servo servo_11;

void setup()
{
  servo_10.attach(10);

  servo_11.attach(11);

}

void loop()
{
  servo_10.write(180);
  servo_11.write(180);
  delay(2000); // Wait for 1000 millisecond(s)
  
  servo_10.write(-180);
  servo_11.write(-180);
  delay(1000);
  
}