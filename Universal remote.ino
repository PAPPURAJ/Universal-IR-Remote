#include <IRremote.h>
IRsend irsend(2);
IRrecv irrecv(A5);
decode_results results;


short int btn[8] = {10, 5, 9, 11, 4, 6, 12, 3};
unsigned long long int val[8] = {1, 2, 3, 4, 5, 6, 7, 8};


void setup() {

  Serial.begin(9600);
  Serial.println("Enabling IR Receiver");
  irrecv.enableIRIn();
  Serial.println("Enabled IR Receiver");

  pinMode(A4, OUTPUT);
  pinMode(A0, INPUT_PULLUP);

  for (short int i = 0; i < 8; i++) {
    pinMode(btn[i], INPUT_PULLUP);
  }

}

void loop() {


  if (digitalRead(A0)) {
    digitalWrite(A4, 0);
    for (short int i = 0; i < 8; i++)
      if (!digitalRead(btn[i])){
        sender(i);
        while (!digitalRead(btn[i])) {
          delay(20);
        }
      }
        

  } else {
    digitalWrite(A4, 1);
    for (short int i = 0; i < 8; i++)
      if (!digitalRead(btn[i])) {
        while (!digitalRead(btn[i])) {
          delay(20);
          receiver(i);
        }
      }



  }



}


void receiver(short int p) {
  if (irrecv.decode(&results))
  {
    Serial.print("Decoded Signal = ");
    val[p] = results.value;
   // Serial.println(val[p]);
    irrecv.resume();
    digitalWrite(A4, 0);
    delay(50);
    digitalWrite(A4, 1);
    delay(50);
    digitalWrite(A4, 0);
    delay(1500);
    digitalWrite(A4, 0);

  }

}



void sender(short int p) {
  irsend.sendSony(val[p],32);
  delay(1000);
}
