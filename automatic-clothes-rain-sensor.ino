#define Shujan 2
#define motor_maju 5
#define motor_mundur 6

bool cuaca = false;

void setup() {
  pinMode(Shujan, INPUT);
  pinMode(motor_maju, OUTPUT);
  pinMode(motor_mundur, OUTPUT);
}

void loop() {
  int air = digitalRead(Shujan);
  
  if (air == LOW && cuaca == false){
    digitalWrite(motor_maju, HIGH);
    digitalWrite(motor_mundur, LOW);
    delay(150);
    cuaca = true;
  }
  else if(air == HIGH && cuaca == true){
    digitalWrite(motor_maju, LOW);
    digitalWrite(motor_mundur, HIGH);
    delay(150);
    cuaca = false;
  }
  digitalWrite(motor_maju, LOW);
  digitalWrite(motor_mundur, LOW);
  delay(1000);
}
