/****************************************************************
**                                                            **
**                     LEDpolsador Arduino                    **
**                     LEDpolsador Arduino                    **
**                                                            **
** NOM: Marc Olmo                            DATA: 21/12/2016 **
****************************************************************/
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(4)){
  digitalWrite(2,HIGH);
}else{
  digitalWrite(2,LOW);
}
}
