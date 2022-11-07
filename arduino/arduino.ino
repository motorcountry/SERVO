#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;

// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  int outPin1 = D6;
  int outPin2 = D7;

  myservo1.attach(D6,500,2500);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(D7,500,2500);
}

void loop() {
  for (pos = 500; pos <= 2500; pos += 20) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.writeMicroseconds(pos);  // set servo to mid-point
    myservo2.writeMicroseconds(pos);
    delayMicroseconds(100);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 2500; pos >= 500; pos -= 20) { // goes from 180 degrees to 0 degrees
    myservo1.writeMicroseconds(pos);              // tell servo to go to position in variable 'pos'
    myservo2.writeMicroseconds(pos);
    delayMicroseconds(100);                       // waits 15 ms for the servo to reach the position
  }
}


















//int outPin = D6;                   // 选择引脚
//int times = 2000;                  // 高电平持续时间，单位us,1ms=1000us
//
//void setup() {
//  pinMode(outPin, OUTPUT);         // 初始化引脚为输出模式
//}
//
//void loop() {
//  
//    digitalWrite(outPin, HIGH);      // 拉高
//    delayMicroseconds(times);        // 拉高持续时间，单位us,1ms=1000us
//    digitalWrite(outPin, LOW);       // 拉低
//    delayMicroseconds(20000-times);  // 拉低持续时间，拉高拉低合计为20ms，20ms为一个周期
//
//}













//#include <Servo.h>
//
//Servo myservo;  // create servo object to control a servo
//// twelve servo objects can be created on most boards
//
//int pos = 0;    // variable to store the servo position
//
//void setup() {
//  int outPin = D6;
//  myservo.attach(D6);  // attaches the servo on pin 9 to the servo object
//}
//
//void loop() {
//  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15 ms for the servo to reach the position
//  }
//  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15 ms for the servo to reach the position
//  }
//}


//
//
//
//
//
//
//
//
//











// for(int i=0;i<5;i++)
//     {
//      digitalWrite(outPin, HIGH);      // 
//      delayMicroseconds(times);        // 
//      digitalWrite(outPin, LOW);       // 
//      delayMicroseconds(20000-times);  // 
//     }
//     
//  while(1){
//    delayMicroseconds(10);
//  }
