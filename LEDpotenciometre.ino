/***************************************************************
**                                                            **
**                   LEDpotenciometre Arduino                 **
**                   LEDpotenciometre Arduino                 **
**                                                            **
** NOM:Marc Olmo                              DATA: 21/12/2016**
****************************************************************/
int sensorValue=0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue= analogRead(A0);
analogWrite(3,sensorValue/4);
}
