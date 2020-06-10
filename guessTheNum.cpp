/*
A small game that is used to guess a number between 1-10, the number being choosen randomly.
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>

int main() {

  int guess=0,num;
  
  // generating a random number between 1-10
  srand(time(0));
  num = rand()%10 + 1;

  int tries = 1;
  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";

  // Write a while loop here:
  while(guess!=num && tries<=5)
  {
    std::cin >> guess;
    tries++;
    if(guess!=num and tries<=5)
      std::cout << "\nWrong.Try Again : ";
  }

  if (guess == num) {
    std::cout << "\nYou got it! It is indeed " << num << "\n";}
  else{
    std::cout << "Sorry! You could not guess it.\n";
    std::cout << "The correct answer was : "<<num <<"\n";
    }
}
