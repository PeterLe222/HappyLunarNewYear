/* Happy Lunar New Year - Peter
 *  
 *   The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * 
 */

  // include the library code:
  #include <LiquidCrystal.h>

    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
    // center firework
    byte fw[8] = {
      B00000,
      B00000,
      B00000,
      B00100,
      B00000,
      B00000,
      B00000
    };
    // middle firework
    byte fw2[8] = {
      B00000,
      B00000,
      B01010,
      B00000,
      B01010,
      B00000,
      B00000
    };
    //biggest firework
    byte fw3[8] = {
      B00000,
      B10001,
      B00000,
      B00000,
      B00000,
      B10001,
      B00000
    };

void setup()
    {
    lcd.begin(16,2);
    /* set the status of firework, from the center to outside */
    lcd.createChar(1, fw);
    lcd.createChar(2, fw2);
    lcd.createChar(3, fw3);
    lcd.setCursor(5,0);
    /* print my name */
    lcd.print("Anh Le");
    delay(1000);
    lcd.clear();
    /* Count down from 9 to 1 */
    for(int j = 9;0 < j;j--)
    {
      lcd.setCursor(7,0);
      lcd.print(j);
      delay(1000);
    }
  }

void loop(){

    /* print Happy Lunar New Year */
    lcd.setCursor(3,0);
    lcd.print("Happy Lunar");
    lcd.setCursor(4,1);
    lcd.print("New Year");
    delay(1000);
    
    /* set random number from 0 to 16 for position of the fireworks */
    int a = random(16);
    int b = random(16);
    int c = random(16);
    int d = random(16);
    int e = random(16);
    int f = random(16);
    int g = random(16);
    int h = random(16);

    /* set the status of firework from 1 to 3 */
    for( int i = 1; i < 4; i++)
    {
      lcd.setCursor(a,1);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(b,0);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(c,1);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(d,0);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(e,1);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(f,0);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(g,1);
      lcd.write(i);
      delay(200);
      lcd.clear();
      
      lcd.setCursor(h,0);
      lcd.write(i);
      delay(200);
      lcd.clear();
    }
  }


