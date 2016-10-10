/*
  Cuber LDR -> Button code
  Each side of the cube has a LDR, this code converts it to keyboard input from 1-6.

  #Made by Amin Benali
 */

//LDR 1-3
#define BUTTON_PIN1 A0
#define BUTTON_PIN2 A1
#define BUTTON_PIN3 A2
//LDR 2-6
#define BUTTON_PIN4 A5
#define BUTTON_PIN5 A6
#define BUTTON_PIN6 A7

void setup() {                
  // initialize the digital pin as an output.


  
 Serial.begin(38400);
 
 Keyboard.set_modifier(0);
}

  int val1;
  int val2;
  int val3;
  
  int val4;
  int val5;
  int val6;
  

void loop() {

  val1 = analogRead(BUTTON_PIN1);
  Serial.print("analog 1 is: ");
 Serial.println(val1);
  
   val2 = analogRead(BUTTON_PIN2);
  Serial.print("analog 2 is: ");
  Serial.println(val2);
  
    val3 = analogRead(BUTTON_PIN3);
  Serial.print("analog 3 is: ");
 Serial.println(val3);
  
    val4 = analogRead(BUTTON_PIN4);
  Serial.print("analog 4 is: ");
 Serial.println(val4);
  
    val5 = analogRead(BUTTON_PIN5);
  Serial.print("analog 5 is: ");
  Serial.println(val5);
  
    val6 = analogRead(BUTTON_PIN6);
  Serial.print("analog 6 is: ");
 Serial.println(val6);
  
  
  
  if (val1 < 500) {
    // button pin is high due to internal pullup resistor
      Keyboard.set_key1(KEY_1);      // press key
      Keyboard.send_now();
      delay(50);  
      Serial.println("Button 1");
       
      
  }
  else { // button is pressed 
       Keyboard.set_key1(0);          // release key
       Keyboard.send_now(); 
       delay(50);   
      
  };

  
  
  
 if (val2 < 500) {
    // button pin is high due to internal pullup resistor
      Keyboard.set_key1(KEY_2);      // press key
      Keyboard.send_now();
      delay(50);  
      Serial.println("Button 2");
       
      
  }
  else { // button is pressed 
       Keyboard.set_key1(0);          // release key
       Keyboard.send_now(); 
       delay(50);   
      
  };
  
      if (val3 < 500) {
    // button pin is high due to internal pullup resistor
      Keyboard.set_key1(KEY_3);      // press key
      Keyboard.send_now();
      delay(50);  
      Serial.println("Button 3");
       
      
  }
  else { // button is pressed 
       Keyboard.set_key1(0);          // release key
       Keyboard.send_now(); 
       delay(50);   
      
  };
  
  
  
       if (val4 < 500) {
    // button pin is high due to internal pullup resistor
      Keyboard.set_key1(KEY_4);      // press key
      Keyboard.send_now();
      delay(50);  
      Serial.println("Button 4");
       
      
  }
  else { // button is pressed 
       Keyboard.set_key1(0);          // release key
       Keyboard.send_now(); 
       delay(50);   
      
  };
  
  
  
  
  
     if (val5 < 500) {
    // button pin is high due to internal pullup resistor
      Keyboard.set_key1(KEY_5);      // press key
      Keyboard.send_now();
      delay(50);  
      Serial.println("Button 5");
       
      
  }
  else { // button is pressed 
       Keyboard.set_key1(0);          // release key
       Keyboard.send_now(); 
       delay(50);   
      
  };
  
  
  
       if (val6 < 500) {
    // button pin is high due to internal pullup resistor
      Keyboard.set_key1(KEY_6);      // press key
      Keyboard.send_now();
      delay(50);  
      Serial.println("Button 6");
       
      
  }
  else { // button is pressed 
       Keyboard.set_key1(0);          // release key
       Keyboard.send_now(); 
       delay(50);   
      
  };
  
  
  
  delay(50);              // wait for a 1/20 second

  }
