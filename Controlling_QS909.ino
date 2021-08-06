
//1 Wheel 
int EL= 5; //Start=High, Stop=Low
int ZF= 4; //Direction
int Signal= 3;//PWM Signal
int VR_Speed= 2;

int Rotation=0;

void setup() {
  pinMode(EL, OUTPUT); //Enable pin 
  pinMode(Signal, INPUT);
  pinMode(ZF, OUTPUT); //direction: CW (High), CCW (Low)

}

void loop() {

  analogWrite(VR_Speed, 100) //Speed Range= 

   for (Rotation = 0; Rotation <= 30; Rotation += 1) { 
    // in steps of 1 degree
    digitalWrite(ZF, HIGH); //CW rotation           
    delay(15);                      
  }
  for (Rotation = 30; Rotation >= 0; Rotation -= 1) { 
    digitalWrite(ZF, LOW); //CCW rotation             
    delay(15);                       


}
