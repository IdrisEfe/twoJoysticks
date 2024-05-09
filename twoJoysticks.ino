#define xleft main
#define yright main

int xPin_Main=A0;
int yPin_Left=A1;
int xPin_Right=A2;
int yPin_Main=A3;
int buttonPinX=2;
int buttonPinY=4;

int xPositionA;
int yPositionA;
int xPositionB;
int yPositionB;
int buttonSituationX;
int buttonSituationY;

void setup() {
  
  Serial.begin(9600);
  pinMode(xPin_Main, INPUT);
  pinMode(yPin_Left, INPUT);
  pinMode(xPin_Right, INPUT);
  pinMode(yPin_Main, INPUT);
  pinMode(buttonPinX, INPUT_PULLUP);
  pinMode(buttonPinY, INPUT_PULLUP);
  

}

void loop() {
  xPositionA=analogRead(xPin_Main);
  yPositionA=analogRead(yPin_Main);

  buttonSituationX=digitalRead(buttonPinX);
  buttonSituationY=digitalRead(buttonPinY);

  Serial.print("X Konumu: ");
  Serial.print(xPositionA);
  Serial.print(", ");
  
  Serial.print("Y Konumu: ");
  Serial.print(yPositionA);
  Serial.print(", ");
  
  Serial.print("X Buton Durumu: ");
  Serial.print(buttonSituationX);
  Serial.print(", ");
  
  Serial.print("Y Buton Durumu: ");
  Serial.println(buttonSituationY);
  
  
  delay(100);

}
