#include <iostream>
#include <string>
#include "include/ise102.h"
using namespace std;

int main() {
  clearScreen();

  //-------------------------------------------------------- Create Speech Styles

  auto loud_friendly_style = makeStyle(
    color::black, color::pale_golden_rod, emphasis::bold
    );
  // I created a custom charcoal grey here with an rgb (red green blue) colour 
  // in hex. You drop the six digits into `color(0x______)` as i've done below.
  // Pick colours at https://www.w3schools.com/colors/colors_picker.asp
  auto stone_style = makeStyle( color(0x222222), color::silver);
  
  //----------------------------------------------------- Friendly Lady Encounter

  print("\nYou are met by a large, friendly lady in a sunflower yellow robe.\n\n");
  delay(700);
  print("\tFriendly lady: ");
  // TODO: Have her ask your name. Use scanlib's input() function to save your 
  // response and have her welcome you by name.
  print(loud_friendly_style, " Welcome to Litsbane.!! \n\n");
  delay(700);
  print("You greet the friendly lady and move on.\n\n\n");
  delay(2000);
 
  //-------------------------------------------------------- Stone Door Encounter

  print("You approach a severe, glassy face, carved into an ancient stone door.\n");
  delay(2000);
  print("Your eardrums are nearly ruptured by its unexpected, booming greeting.\n\n");
  delay(1000);
  print("\t Stone face: ");
  print(stone_style, strToUpper(" Hello mushy one, do not be surprised! \n"));
  delay(1700);
  print("\t Stone face: ");
  print(stone_style, strToUpper(" I have learned english from my friend who dresses like a banana. \n"));
  delay(1700);
  print("\t Stone face: ");
  print(stone_style, strToUpper(" Welcome to our home!! \n\n"));
  
  // TODO: Add more encounters! Extreme characters make it easier to think
  // of voices, e.g., stone walls, frog children, flaming bushes etc

  //------------------------------------------------------------------- Summary?
  
  delay(1300);
  print("Your journey has begun well.\n\n");
}
