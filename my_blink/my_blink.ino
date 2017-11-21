*/Particle testes
Arquivo: my_blink.ino
Data: 21.11.2017
Versao:

*/

int led = 8;
int t_on = 1000;
int t_off = 500;

void setup(){
pinMode(led,OUTPUT);
}

void loop (){
digitalWrite(led,HIGH);
delay(t_on);
digitalWrite(led, LOW);
delay(t_off);
}
