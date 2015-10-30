int WLU = 9;
int WLD = 10;
int WRU = 11;
int WRD = 13;


void setup() {
pinMode(WLU,OUTPUT);
pinMode(WLD,OUTPUT);
pinMode(WRU,OUTPUT);
pinMode(WRD,OUTPUT);
Serial.begin(9600);
Serial.print("0");
}

void loop() {
if(Serial.available())
  {
    if(Serial.read()=='s')
    {

delay(10000);
analogWrite(WLU, 25);
analogWrite(WLD, 25);
Serial.print("1");
delay(3000);
analogWrite(WLU, 0);
analogWrite(WLD, 0);
Serial.print("0");
delay(500);
analogWrite(WRU, 25);
analogWrite(WRD, 25);
Serial.print("2");
delay(3000);
analogWrite(WRU, 0);
analogWrite(WRD, 0);
Serial.print("0");
delay(500);
analogWrite(WLU, 50);
analogWrite(WLD, 50);
Serial.print("3");
delay(3000);
analogWrite(WLU, 0);
analogWrite(WLD, 0);
Serial.print("0");
delay(500);
analogWrite(WRU, 50);
analogWrite(WRD, 50);
Serial.print("4");
delay(3000);
analogWrite(WRU, 0);
analogWrite(WRD, 0);
Serial.print("0");
delay(500);
analogWrite(WLU, 75);
analogWrite(WLD, 75);
Serial.print("5");
delay(3000);
analogWrite(WLU, 0);
analogWrite(WLD, 0);
Serial.print("0");
delay(500);
analogWrite(WRU, 75);
analogWrite(WRD, 75);
Serial.print("6");
delay(3000);
analogWrite(WRU, 0);
analogWrite(WRD, 0);
Serial.print("0");
delay(500);
analogWrite(WLU, 100);
analogWrite(WLD, 100);
Serial.print("7");
delay(3000);
analogWrite(WLU, 0);
analogWrite(WLD, 0);
Serial.print("0");
delay(500);
analogWrite(WRU, 100);
analogWrite(WRD, 100);
Serial.print("8");
delay(3000);
analogWrite(WRU, 0);
analogWrite(WRD, 0);
delay(500);
Serial.print("9");
    }
  }

}

