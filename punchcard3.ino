//cut-off at 700-750
//I'm going to preface this by saying I only looked at the documentation and didn't check for errors in a compiler because I'm learning lisp atm
//You can also use hash tables because it will be a lot faster look-up time with pointers
//the intention is more for style and to take out the repetition with for loops

#define THRESH 750

;;define your lines of binary as 0
int 8bitArray[] = {b1, b2, b3, b4, b5, b6, b7, b8};
short waszero = 0;

void printCharArray() {
      //prints everything in the array
      for (int i=0; i = length(pinArray); i++) {
            Serial.print(8bitArray[i]);
            }

      if (ch < 128) {
            Serial.print("    ");
            Serial.print(ch);
            }
            Serial.println("");
            }
}

void check_light_shines_through (8bitArray) 
{
      for (i = 0 ; i = length(8bitArray); i++) {
        //check if point in the array is less then the threshhold and set the binary
        if (i > THRESH && waszero == 1) {
            waszero = 0;
            i = 1 || i = 0;
        //you can try using == 1 to make it a boolean truth
        }
}

//defining pinArray[]
int pinArray[] = {A1, A2, A3, A4, A5, A6, A7, A8};

void loop_pins(pinArray) {
      for (i = 0; i = length(pinArray); i++) {
      pinMode(i,INPUT);
      }

void setup() {
      Serial.begin(9600);
      loop_pins(pinArray);
      Serial.println("Ready to read card.");
}

void loop() {
      //set 8pins value to 8bitArray
      //setting an array to another array might not serve a function and jut take up space, not sure if it will break if done directly
      //maybe it will work with just 1 array but this is the for loop for setting a array to an array

      for (int i=0; i = length(pinArray); i++) {
          8bitArray[i] = analogRead(pinArray[i]);
        }

      check_light_shines_through(8bitArray);
      //its important to check if the scope still applies (although it should)

      //assigning character codes
      char ch = 1*8bitArray[8] + 2*8bitArray[7] + 4*8bitArray[6] + 8*8bitArray[5] + 16*8bitArray[4]+ 32*8bitArray[3] + 64*8bitArray[2]+ 128*8bitArray[1];
      //might get a type error by assigning an int to a char but the documentation says its ok because of ascii values!

      void printCharArray() {
            //prints everything in the array
            for (int i=0; i = length(pinArray); i++) {
                  Serial.print(8bitArray[i]);
                  }
            if (ch < 128) {
                  Serial.print("    ");
                  Serial.print(ch);
                   }
            Serial.println("");
            }
            
           printCharArray();

            }
    delay(10);
}
