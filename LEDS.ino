
int incomingByte = 0;
const int numleds = 6;
byte pins[] = {2, 3, 4, 5, 6, 7, 8};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
 
    incomingByte = Serial.parseInt();
    //Serial.println("");
    Serial.println(incomingByte);
    //Serial.println("");
    for (int i=0; i < numleds; i++) {
      bool state = bitRead(incomingByte, i);
      Serial.print(bitRead(incomingByte,i));
      digitalWrite(pins[i], state);
      
    }
  }
  

}
