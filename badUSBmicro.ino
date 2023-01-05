#include <Keyboard.h>

// Utility function
void typeKey(int key){                // declare typekey into the scope
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  Keyboard.begin();
  // initialize serial communication at 115.2K bits per second:
  Serial.begin(115200);
  // serial needs ~1 second, while HID needs ~2.5
  delay(2500);

  Serial.println("First Hello world");

  // Start Payload
  // Keyboard.press(KEY_LEFT_GUI);       //this is 'windows' key
  // Keyboard.press(114);                //114 stands for 'r' (based on ASCII table)
  // Keyboard.releaseAll();
  // delay(500);
  // Keyboard.print("notepad");
  // delay(500);
  // typeKey(KEY_RETURN);                //this is the 'enter' key
  // delay(1500);
  // Keyboard.print("Hello World\n");
  // delay(500);
  
  Serial.println("left gui");
  Keyboard.press(KEY_LEFT_GUI);   // this is 'windows' key
  delay(1000);                    // DELAY 1000
  Serial.println("release");
  Keyboard.releaseAll();
  delay(1000);                    // DELAY 1000
  // Keyboard.write(KEY_LEFT_GUI);// WINDOWS
  Serial.println("sending cmd");
  Keyboard.print("run cmd");      // STRING cmd
  delay(2000);                    // DELAY 1000
  // now select run as admin:
  Serial.println("right arrow");
  Keyboard.write(KEY_RIGHT_ARROW);// RIGHTARROW
  delay(500);                     // DELAY 1000
  Serial.println("down arrow");
  Keyboard.write(KEY_DOWN_ARROW); // DOWNARROW
  Serial.println("should have run as admin highlighted");
  delay(1000);                    // DELAY 1000
  Keyboard.write(KEY_RETURN);     // ENTER
  delay(2000);                    // DELAY 1000
  // now deal with admin permission check:
  Serial.println("left arrow");
  Keyboard.write(KEY_LEFT_ARROW); // LEFTARROW
  Serial.println("should have 'yes' highlighted");
  delay(1000);                    // DELAY 1000
  Keyboard.write(KEY_RETURN);     // ENTER

  // close notepad program
//  Keyboard.press(KEY_LEFT_ALT);
//  Keyboard.press(KEY_F4);
//  Keyboard.releaseAll();
//  Keyboard.press(KEY_RIGHT_ARROW);
//  Keyboard.releaseAll();
//  typeKey(KEY_RETURN);
//  delay(500);
//  // End Payload
//
//  // Stop Keyboard and Mouse
//  Keyboard.end();
}

void loop()
{
  static int count = 0;
  Serial.print(count);
  Serial.println(" Hello world!");
  count++;
  delay(1000);
  
  if (count > 30)
  {
    Serial.println("I'm bored.");
    Keyboard.end();
    Serial.println("Good-bye!");
    while (1);
  }

}
