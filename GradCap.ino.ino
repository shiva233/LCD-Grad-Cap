

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//messages to scroll

String messages[] = {
  "class of 2025 - Shiva Prakash!",
  "uw ece yippeee! :DD"  ,
  "goodbye high school, hello UWaterloo!",
  "Built with love & 5V <3",
  "arduino inside",
  "hello world :D",
  "its been 4 years :0",
  "debugging life... pls wait",
  "despite everything, it's still you",
  "int grad = 2025;",
  "now running: adult.exe",
  "Error 404: Sleep Not Found",
  "scrolling... forever",

};

int numMessages = sizeof(messages) / sizeof(messages[0]);

void setup() {
  lcd.begin(16, 2);

  // Typewriter-style "Booting GradCap"
  String bootText = "Booting GradCap";
  lcd.setCursor(0, 0);
  for (int i = 0; i < bootText.length(); i++) {
    lcd.print(bootText[i]);
    delay(150); // typing speed
  }

  delay(800); // brief pause before next steps

  // Sentimental boot sequence
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("> loading");
  lcd.setCursor(0, 1);
  bootText = "memories";
  lcd.setCursor(0, 1);
  for (int i = 0; i < bootText.length(); i++) {
    lcd.print(bootText[i]);
    delay(150); // typing speed
  }
  delay(800);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("> compiling");
  bootText = "adulthood";
  lcd.setCursor(0, 1);
  for (int i = 0; i < bootText.length(); i++) {
    lcd.print(bootText[i]);
    delay(150); // typing speed
  }
  delay(800);


  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("> linking");
  bootText = "emotions";
  lcd.setCursor(0, 1);
  for (int i = 0; i < bootText.length(); i++) {
    lcd.print(bootText[i]);
    delay(150); // typing speed
  }
  delay(800);


  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("> flashing");
  bootText = "graduation!";
  lcd.setCursor(0, 1);
  for (int i = 0; i < bootText.length(); i++) {
    lcd.print(bootText[i]);
    delay(150); // typing speed
  }
  delay(800);


  bootText = "System Ready :D";
  lcd.setCursor(0, 0);
  for (int i = 0; i < bootText.length(); i++) {
    lcd.print(bootText[i]);
    delay(150); // typing speed
  }
  delay(1500);


  lcd.clear();
}

void loop() {
  for (int i = 0; i < numMessages; i++) {
    scrollMessage(messages[i]);
  }
}

void scrollMessage(String msg) {
  String padding = "                "; // 16 spaces
  msg = padding + msg + padding;

  for (int i = 0; i < msg.length() - 15; i++) {
    lcd.setCursor(0, 0);
    lcd.print(msg.substring(i, i + 16));

    lcd.setCursor(0, 1);
    lcd.print("| :D |GRAD| :D |"); // cute emoticons always visible

    delay(190); // speed of scrolling
  }

  
  lcd.clear();
}