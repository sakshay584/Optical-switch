#define safePos 1
#define extrPos 2
#define unloadPos 3

int dPos=0, aPos=0, pos=0;

void setup() {
  Serial.begin(9600);
  pinMode(A11, INPUT);
  pinMode(10, INPUT);
}

void loop() {
  dPos=digitalRead(10);
  aPos=analogRead(A11);
  //Serial.println(aPos);
  if(dPos==1) {
    pos= unloadPos; Serial.println("unload pos reached");
    }
     else if (aPos>=100 && aPos<=250){
      pos= safePos;
      Serial.println("safe pos reached");
      //Serial.println(aPos);
     }
     else if (aPos>=400 && aPos<=600)
     {
       pos= extrPos;
      Serial.println("extreme pos reached");
     // Serial.println(aPos);
     }
  delay(10);
}
