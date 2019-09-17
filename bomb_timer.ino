 
#define ENC_A 6 //these need to be digital input pins
#define ENC_B 7
#define ENC_Menu 9
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int menu = 0;
int menuprev = 0;

static unsigned int counter4x = 0;      //the SparkFun encoders jump by 4 states from detent to detent
static unsigned int prevCounter = 0;
static unsigned int counter = 0;
int tmpdata;
int j = 0;

void setup()
{
  /* Setup encoder pins as inputs */
  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
  pinMode(ENC_Menu, INPUT);
 
  Serial.begin (9600);
  //Serial.println("Start");

   lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Initializing!");
}

void loop()
{
   menu += digitalRead(ENC_Menu);
   if (menu%3 == 0){
    lcd.clear();
    lcd.print("Set time................");
   }

   if (menu%3 == 1){
    lcd.clear();
    for (int i = 0; i<200; i++){
      delay(50);
      menu += digitalRead(ENC_Menu);
      lcd.clear();
      lcd.print(i);
      if (menu%3 != 1){
        menu = menu-1;
        j = i;
        break;
        }
      }
   }
   if (menu%3 == 2){
    lcd.clear();
    lcd.print("Ready for");
    delay(500);
    lcd.clear();
    lcd.print("Countdown");
    delay(500);
    for (; j > -1; j = j-1){
      delay(200);
      lcd.clear();
      lcd.print(j);
    }
    lcd.clear();
    lcd.print("BOOM!");
    delay(99999999);
   }
  delay(100);
}
