#include <Servo.h>

//Sonido Buzzer
const int buzzerPort= 13;
//Servo 
const int controlPort = 9;
const int minPos = 25;
const int maxPos = 180;
const int stepTime = 40;
int direccion = -1;
int anguloServo;
//Sensor distancia
const int trigPin = 7;
const int echoPin = 8;
int distance;
long duration;
//comunicacion
const int serialPort = 9600;
String datos;

Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  myServo.attach(controlPort);
  myServo.write(minPos);
  Serial.begin(serialPort);
  //Serial.println("Starting delay");
  delay(5000);
 // Serial.println("Starting operations");
}

void loop() {
  anguloServo=myServo.read();
  noTone(buzzerPort);
  if((anguloServo >= maxPos)||(anguloServo <= minPos)){
    direccion *= -1;
    //Serial.println("Cambio de sentido");
   //tone(buzzerPort,1000);
    //delay(1000);
  }
  distance=calcularDistancia();
  //datos= (String)anguloServo +","+ (String)distance +".";
  //Serial.println(datos);
  datos= (String)distance;
  Serial.println(datos);
  myServo.write(anguloServo+ direccion);
  delay(500);
}

//Metodo que calcula la distancia en cm
int calcularDistancia(){
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //duration = pulseIn(echoPin, HIGH);
  distance= pulseIn(echoPin, HIGH,1000)/29/2;
  return distance;
}
