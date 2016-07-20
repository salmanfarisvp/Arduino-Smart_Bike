# Arduino-Smart_Bike
This project is Used Arduino uno and   3*4 matrix keypad , when the correct pass-code is enterd then the bike will start that will help you keyless ride your bike (i am planning to use arduino primo that have an NFC then we can operate our bike using our nfc card or nfc phone),

HardWare :- 
    1 . Arduino Uno
   2.  3*4 matrix keypad
   3.  9v battery
   4.  Relay Module (or make your own)
   5.  Jumber Wires (F2F,M2F,M2M)
   

Software :-

    1.Arduino IDE
  
  
  Step 1 ==>>
  
  #Upload the Programe to your Arduino using Arduino IDE,
  
 Step 2  ==>>
 
 #Connect the keypad to arduino using Male to Male Jumber Wires (both the arduino and keypad have female connction )
  
* Arduino pin 3 to Bike battery (or bike engine switch);
* Arduino pin 4 to Bike Self 

Note :-  Pin 4 will "ON" only 2 Second , after 2 second it will turn "OFF" Automatically ;

in here =>
    R1 - D9
    R2 - D8    
    R3 - D7   
    R4 - D6
    C1 - D12
    C2 - D11
    C3 - D10
    
    // R is the Row and C is the Colum;
    //D means Digital pin of Arduino 
    
    
    
    
    
    
    
    


