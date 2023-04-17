//cut-off at 700-750
//create a system that converts an array of binary and prints ascii
//threshold is being used because it recieved a light intensity
//the reader works by detecting if light gets passed through the punch-card
//if it does get passed through it returns a t or 1 value in the 2d array
//if it doesnt get passed through it returns nil
//each line of binary has a corresponding ascii value
//it probably has to get stored in RAM to be read again or maybe it can just be converted directly to ascii
#define THRESH 750

//input is the punch card
//decode is the computer taking the input from the punch card because it is the key
//output is a for loop printing the results
//just make this a for loop through an array of b1 b2 b3 b4 -> b8
int myArray = {b1, b2, b3, b4, b5, b6, b7, b8}

//this can be contained in a function that can be called and it MUST return something it is probably not going to be a void function
//the intention is to help in taking out the nested-ifs
      for (i = 0 ; i < length(myArray); i++)
      {
        //check if point in the array is less then the threshhold and set the binary
        //you might not have to use if for this, maybe when instead or even for
        if (myArray[i] > THRESH)
        { 
          i = 1;
        }
        else 
        {
          i = 0;
        }}

char ch = 0;

void setup() {
//arduino reference is like Serial.begin(speed)
  Serial.begin(9600);
//pinMode(pin, mode)is takes input 
//so this takes input from the pins and determines if it is 1 or 0
  
//the input is the punch card
//you can probably use a for loop here
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  pinMode(A8,INPUT);
  
  //this looks like it prints to the terminal
  Serial.println("Ready to read card.");
}

void loop() {
//analogRead works in the same way a predicate to my understanding
//it reads the input and determines if it is t or nil (0) from bel thingow it looks like nil is whitespace or that was just put there as an output readability
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
    //This can be looped over
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


  if (binary > THRESH) { 
    if (waszero == 1) 
  {
        waszero = 0;

      
   //this is what the main loop function was for
   //you may be able to use a switch-case statement since those are considered a bit faster then looping through a list from 0 to the length of the array
   //but with a switch case statement you might have to repeat yourself in the same way, or it might devolve into just t or nil

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
//this print stuff out to the terminal
//you can use the array and print the array ( re-use the looping function at the beggining)
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
