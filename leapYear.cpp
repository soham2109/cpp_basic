/*
Write a leap_year.cpp program that:

    1. Takes a year as input.
    2. Checks to see if the year is a four-digit number.
    3. Displays whether or not the year falls on a leap year.

There are 3 criteria that must be taken into account to identify a leap year:
    1. If the year can be evenly divided by 4 then it is a leap year, however…
    2. If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
    3. If that year is evenly divisible by 400, then it is a leap year.

*/

#include <iostream>

int main() {
  
  int digits=0,year;

  std::cout << "Enter the year : ";
  std::cin >> year;
  int temp;
  temp = year;
  
  while(temp)
  { temp /= 10;
    digits++;}

  if(digits!=4) 
    std::cout << "Invalid Entry.\nNot a four digit year.\n";
  else
  {
    if(year%4==0 && year%100!=0 || year%400==0)
      std::cout << year << "is a Leap year.\n";
    else
      std::cout << year << "is NOT a leap year.\n";     
  }
}

/*
$ Enter the year : 100
$ Invalid Entry.
Not a four digit year.

$ Enter the year : 1996
$ 1996 is a Leap year.

$ Enter the year : 2300
$ 2300 is NOT a leap year.
*/
