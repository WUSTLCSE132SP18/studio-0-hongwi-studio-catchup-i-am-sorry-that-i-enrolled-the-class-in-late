void setup() {

  pinMode(13, OUTPUT);

  
  Serial.begin(9600);
  Serial.println("Hearbeat starts");
}

void loop() {
  digitalWrite(13, HIGH); // on 
  Serial.println("on");
  delay(1000); //this should be once per second. 
  digitalWrite(13, LOW); // off
  Serial.println("off");
  delay(1000);

  
  int time = millis();
  Serial.print(time);
  Serial.println(" sec have elapsed");
   
  
  // put your main code here, to run repeatedly:

}
