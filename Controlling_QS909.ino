
//1 Wheel 
int EL= 5; //Start=High, Stop=Low
int ZF= 4; //Direction CW=High, CCW=Low
int Signal= 3;//PWM Signal
int VR_Speed= 2;

int Rotation=0;

void setup() {
  pinMode(EL, OUTPUT); 
  pinMode(ZF, OUTPUT); 
  pinMode(Signal, INPUT);
  pinMode(VR, OUTPUT); 
}

void loop() {
  digitalWrite(EL, HIGH); //Start
  analogWrite(VR_Speed, 100) //Speed 

   for (Rotation = 0; Rotation <= 180; Rotation += 1) { 
   
    digitalWrite(ZF, HIGH); //CW rotation           
    delay(15);                      
  }
  for (Rotation = 30; Rotation >= 180; Rotation -= 1) { 
    digitalWrite(ZF, LOW); //CCW rotation             
    delay(15);                       
  }
  
}
