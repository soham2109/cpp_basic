/*
Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:
    1. It should ask him what his earth weight is.
    2. Ask him to enter a number for the planet he wants to fight on.
    3. It should then compute his weight on the destination planet.

Here is the table of conversion:
# 	Planet 	Relative Gravity
1 	Venus 	0.78
2 	Mars 	0.39
3 	Jupiter 	2.65
4 	Saturn 	1.17
5 	Uranus 	1.05
6 	Neptune 	1.23

TESTING LOOP CONCEPT
*/

#include <iostream>
using namespace std;

int main() {
  
  int n;
  double weight;
  
  cout << "Enter your weight on Earth : ";
  cin >> weight;
  
  cout << "List of planets and their corresponding numbers : \n";
  cout << "1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n5. Uranus\n6. Neptune\n";
  cout << "Choose a number from the above list : ";
  cin >> n;

  cout << "Your weight on Planet ";

  switch(n){
    case 1:
      cout << "Venus is : "<<weight*0.78 <<"\n";
      break;
    case 2:
      cout << "Mars is : "<<weight*0.39 <<"\n";
      break;
    case 3:
      cout << "Jupiter is : "<<weight*2.65 <<"\n";
      break;
    case 4:
      cout << "Saturn is : "<<weight*1.17 <<"\n";
      break;
    case 5:
      cout << "Uranus is : "<<weight*1.05 <<"\n";
      break;
    case 6:
      cout << "Neptune is : "<<weight*1.23 <<"\n";
      break;
    default:
      cout << "Choos from the list.\n";
      break;
  }
}
