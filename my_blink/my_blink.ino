//Particle testes
//Arquivo: my_blink.ino
//Data: 21.11.2017
//Versao:


int LED_state = LOW;
int led=D7;


long previous_millis = 0;
long time_interval = 1000;

void setup(){
  pinMode(led, OUTPUT);
}

void loop (){
  unsigned long currentMillis = millis();     //Tempo atual em ms
  if (currentMillis - previous_millis > time_interval){
    previous_millis = currentMillis;          //Atualiza valor Tempo

      if (LED_state == LOW ){                   // Muda estado do led
        LED_state = HIGH;
      }
      else {
        LED_state = LOW;
      }
    digitalWrite(led, LED_state);
  }
}
