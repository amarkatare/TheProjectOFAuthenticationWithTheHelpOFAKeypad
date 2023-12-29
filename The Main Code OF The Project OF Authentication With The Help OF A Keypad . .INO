// // The Project OF Authentication With The Help OF A Keypad .

// In this program, We want to Show Authentication with The Help of a Keypad . If our Key Presses Equal, We put it Equal, and by Pressing The Number a Hundred (100), the LED will turn on and Display a Message with The Text " Authentication has been Successfully Completed ! ". Otherwise, If Pressed and The Number is not a Hundred (100), The LED will turn off and Display a Message with The Text " Authentication was not Successfully Completed ! " .

// The Main Code OF The Project OF Authentication With The Help OF A Keypad . . INO . .




#include <Keypad.h>                                                                                                                                                                    // Library Required for this Project .


const byte ROWS = 4;                                                                                                                                                                // The four Rows .
const byte COLS = 4;                                                                                                                                                               // The Four Columns .


// Define the Symbols on The Buttons of The Keypads


float TheFirstnumber = 0;                                                                                                                                                        // Basic Definition : Number : 0 . :
float TheSecondnumber = 0;                                                                                                                                                      // Basic Definition : Number : 0 . :
float TheResult = 0;                                                                                                                                                           // Basic Definition : Number : 0 . :
bool TheSection = false ;
int TheType = 0;                                                                                                                                                             // Basic Definition : Number : 0 . :
int TheLED = 12;                                                                                                                                                            // Basic Definition : Number : 12 . :
int ThevalueCode = 123;                                                                                                                                                    // Basic Definition : Number : 123 . :


char HexaKeys [ROWS] [COLS] = {


  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}


};


byte RowPins[ROWS] = {9, 8, 7, 6};                                                                                                                                              // Connect to The Row Pinouts of The Keypad .
byte ColPins[COLS] = {5, 4, 3, 2};                                                                                                                                             // Connect to The Column Pinouts of The Keypad .


Keypad CustomKeypad = Keypad (makeKeymap (HexaKeys), RowPins, ColPins, ROWS, COLS);


void setup () {


  pinMode (LED, OUTPUT);                                                                                                                                                // Introducing The OUTPUT pin .
  Serial.begin (9600);                                                                                                                                                 // Introducing The Series .


}


void loop () {


  char key = customKeypad.getKey () ;


  if (key)


  {


    static String C = "";


    if (key == '#' )


    {


      if (C.equals ("100") )


      {


        Serial.print (" ! ! ! ! * * * * Authentication has been Successfully Completed ! * * * * ! ! ! ! ");                                                                                        // Show The Desired Message .
        digitalWrite (LED, HIGH);                                                                                                                                                                  // Turn on The LED .


      }


      else


      {


        digitalWrite (LED, LOW);                                                                                                                                                            // Turn off The LED .
        Serial.print (" ! ! ! ! * * * * Authentication was not Successfully Completed ! * * * * ! ! ! ! ");                                                                                // Show The Desired Message .


      }


      C = "";


    }


    else


    {


      C += key;


    }


  }


}
