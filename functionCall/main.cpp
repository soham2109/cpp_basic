/*
Multi-File Programs : 
Programs can grow quickly. With a few functions, you can declare the function above main() and then you can define the function below main() like this:

#include <iostream>

// Declaration at the top:
void eat();

int main() {
  eat();
}

// Definition at the bottom:
void eat() {
  std::cout << "nom nom nom\n";
}

But this isn’t ideal when your code gets longer; it’s common to use the same function in more than one .cpp file.
To make your code cleaner and more modular, you can move the function definitions over to another specialized .cpp file (e.g., my_functions.cpp), leaving a list of declarations above main().
But files, like functions, have scope. So, how does the main() program know about the function definitions?
Before your program even compiles, it links together any files you list in your compilation statement into a single executable:

g++ main.cpp my_functions.cpp

And voila! Your program knows the function definitions.
*/
#include <iostream>
#include <cmath>


// Add declarations here:
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}

/*
We can also use header files to do the same.
In the header files store the Relevant Function declarations and include the Header file in all the scripts using it.
If your function definitions are in my_functions.cpp, the corresponding header file would be my_functions.hpp or my_functions.h.

Eg.:
-main.cpp

#include <iostream>
#include "fns.hpp"

int main() {
  
  std::cout << is_palindrome("noon") << "\n";
  std::cout << tenth_power(4) << "\n";
  std::cout << average(4.0, 7.0) << "\n";
  
}

- fns.hpp
#include <iostream>

// Move function declarations here:
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

- fns.cpp
#include <iostream>
#include <cmath>
#include "fns.hpp"

double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int tenth_power(int num) {
  return pow(num, 10);
}

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
}
*/
