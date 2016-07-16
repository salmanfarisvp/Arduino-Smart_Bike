// Arduino Smart Bike
// farissalmannbr@gmail.com




#include <Keypad.h> 


char* password = "7930";  // change the password here, just pick any 4 numbers
int position = 0;
const byte ROWS = 4;
const byte COLS = 3;
char keys[ROWS][COLS] = {
{'1','2','3'},
{'4','5','6'},
{'7','8','9'},
{'*','0','#'}
};

byte rowPins[ROWS] = { 9, 8, 7, 6};
byte colPins[COLS] = { 12, 11, 10};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup()
{
pinMode(3, OUTPUT); //bike battery
pinMode(4,OUTPUT); //bike self motor


LockedPosition(true);
}

void loop()
{
char key = keypad.getKey();
if ( key == '#' )
{
position = 0;
LockedPosition(true);
}
if (key == password[position])
{
position ++;
}
if (position == 4)
{
LockedPosition(false);
}
delay(100);
}
void LockedPosition(int locked)
{
if (locked)
{
digitalWrite(4, LOW); // password is wrong both is "OFF" state
digitalWrite(3,LOW);



}
else
{
 digitalWrite(3,HIGH); // "ON" the bike battery (engine)
digitalWrite(4,HIGH); // "ON" the self motor 
delay(2000);          // wait for 2 second to start the bike 
digitalWrite(4,LOW); // "OFF" the self after starting the bikr (after 2 second it will turn off automaticallys)



}
}
