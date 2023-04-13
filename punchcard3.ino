//cut-off at 700-750

#define THRESH 750

int b1 = 0;
int b2 = 0;
int b3 = 0;
int b4 = 0;
int b5 = 0;
int b6 = 0;
int b7 = 0;
int b8 = 0;
int b9 = 0;
short waszero = 0;

char ch = 0;

void setup() {

  Serial.begin(9600);

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  pinMode(A8,INPUT);
  Serial.println("Ready to read card.");
}

void loop() {

    b1 = analogRead(A0);
    b2 = analogRead(A1);
    b3 = analogRead(A2);
    b4 = analogRead(A3);
    b5 = analogRead(A4);
    b6 = analogRead(A5);
    b7 = analogRead(A6);
    b8 = analogRead(A7);

    b9 = analogRead(A8);

    /*
    Serial.print(b1);
    Serial.print("    ");
    Serial.print(b2);
    Serial.print("    ");
    Serial.print(b3);
    Serial.print("    ");
    Serial.print(b4);
    Serial.print("    ");
    Serial.print(b5);
    Serial.print("    ");
    Serial.print(b6);
    Serial.print("    ");
    Serial.print(b7);
    Serial.print("    ");
    Serial.print(b8);
    Serial.print("    ");
    Serial.println(b9);
    */

    if (b9 > THRESH) {
      if (waszero == 1) {

        waszero = 0;
        
        if (b1 > THRESH) {
          b1 = 1;
        } else {
          b1 = 0;
        }

        if (b2 > THRESH) {
          b2 = 1;
        } else {
          b2 = 0;
        }

        if (b3 > THRESH) {
          b3 = 1;
        } else {
          b3 = 0;
        }

        if (b4 > THRESH) {
          b4 = 1;
        } else {
          b4 = 0;
        }

        if (b5 > THRESH) {
          b5 = 1;
        } else {
          b5 = 0;
        }

        if (b6 > THRESH) {
          b6 = 1;
        } else {
          b6 = 0;
        }

        if (b7 > THRESH) {
          b7 = 1;
        } else {
          b7 = 0;
        }

        if (b8 > THRESH) {
          b8 = 1;
        } else {
          b8 = 0;
        }

        ch = 1*b8 + 2*b7 + 4*b6 + 8*b5 + 16*b4 + 32*b3 + 64*b2 + 128*b1;

        Serial.print(b1);
        Serial.print(b2);
        Serial.print(b3);
        Serial.print(b4);
        Serial.print(b5);
        Serial.print(b6);
        Serial.print(b7);
        Serial.print(b8);
        if (ch < 128) {
          Serial.print("    ");
          Serial.print(ch);
        }
        Serial.println("");

      }
    } else {
      waszero = 1;
    }

    
    delay(10);

}
