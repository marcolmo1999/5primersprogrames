/****************************************************************
**                                                            **
**                          LED Arduino                       **
**                          LED Arduino                       **
**                                                            **
** NOM: Marc Olmo                             DATA:21/12/2016 **
****************************************************************/
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
delay(500);
digitalWrite(2,LOW);
delay(500);
}
