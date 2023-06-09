//
//Motor Pins
    //Enable pin for first motor
int IN1 = 4;       //control pin for first motor
int IN2 = 5;  //control pin for first motor
int IN3= 6;
int IN4= 8;
//control pin for second motor

void setup ( ) {
Serial.begin (9600); //Starting the serial communication at 9600 baud rate
//Initializing the motor pins as output
 
pinMode(IN1, OUTPUT);  
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
 
//Initializng the joystick pins as input
pinMode (7, INPUT) ;
pinMode(13,OUTPUT);                    
                       
}
void loop () {
Serial.print("IRSensorip  ");
Serial.println(digitalRead(7));
if (digitalRead(7)==0){     //Rotating the left motor in clockwise direction
//Mapping the values to 0-255 to move the motor
digitalWrite(IN1, HIGH);
digitalWrite(IN2, HIGH);

delay(1500);
Serial.print("IRSensorip  ");
Serial.println(digitalRead(7));

}
 Serial.print("IRSensorip  ");
Serial.println(digitalRead(7));
if(digitalRead(7)==0){     //Rotating the left motor in clockwise direction
//Mapping the values to 0-255 to move the motor
digitalWrite(IN3, HIGH);
digitalWrite(IN4, HIGH);
Serial.print("IRSensorip  ");
Serial.println(digitalRead(7));
}
 else {  //Motors will not move when the joystick will be at center
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
Serial.print("IRSensorip  ");
Serial.println(digitalRead(7));
}
 delay(1000);
}  
