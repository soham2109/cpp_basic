/*
Codeacademy while loop demo
*/

#include <iostream>

int main() {
  
  int pin=0;
  int tries = 1;
  
  std::cout << "BANK OF CODECADEMY\n";

  while (pin != 1234 && tries <= 3) {
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
  }
  if (pin == 1234) {
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
  }
  else
    std::cout << "PIN not accepted!\nMaximum retries reached\n";
}
