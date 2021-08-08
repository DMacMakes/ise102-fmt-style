#include <iostream>
#include <string>
#include "include/ise102.h"
using namespace std;

int main() {
  clearScreen();

  // You're greeted a loud, friendly man.

  auto loud_friendly_style = makeStyle(
    color::black, color::pale_golden_rod, emphasis::bold
    );
  print("\nYou are met by a large, friendly man in a sunflower yellow robe.\n\n");
  delay(700);
  print("\tFriendly man: ");
  print(loud_friendly_style, " Welcome to Litsbane.!! \n\n");
  delay(1000);
  print("You greet the friendly man and move on.\n\n\n");
  delay(2000);
  print("You approach a severe, glassy face, carved into an ancient stone door.\n");
  delay(2000);
  print("Your eardrums are nearly ruptured by its unexpected, booming greeting.\n\n");
  delay(1000);
  // I created a custom charcoal grey here with an rgb (red green blue) colour 
  // in hex. You drop the six digits into `color(0x______)` as i've done below.
  // Pick colours at https://www.w3schools.com/colors/colors_picker.asp
  auto stone_style = makeStyle( color(0x222222), color::silver);
  print("\t Stone face: ");
  print(stone_style, strToUpper(" Hello mushy one, do not be surprised! \n"));
  delay(1000);
  print("\t Stone face: ");
  print(stone_style, strToUpper(" I have learned english from my friend who dresses like a banana. \n"));
  delay(1000);
  print("\t Stone face: ");
  print(stone_style, strToUpper(" Welcome to our home!! \n\n"));
  
  delay(1300);
  print("Your journey has begun well.\n\n");
}
