/*
int rand(void): 
returns a pseudo-random number in the range of 0 to RAND_MAX.
RAND_MAX: is a constant whose default value may vary 
between implementations but it is granted to be at least 32767.

void srand( unsigned seed ): 
Seeds the pseudo-random number generator used by rand() 
with the value seed.

Standard practice is to use the result of a call to srand(time(0)) as the seed. 
However, time() returns a time_t value which vary everytime and hence the 
pseudo-random number vary for every program call.
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  int count=0;
  // Create a number that's 0 or 1
  for(int i=0;i<5;i++)
  {
    srand (time(NULL));
  
    // as we only want binary values
    int coin = rand() % 2;
  
    // If number is 0: Heads
    // If it is not 0: Tails
    if (coin == 0)
      count++;  
  }
  
  // output the number if occurences if Heads
  std::cout << count <<"\n";
}
