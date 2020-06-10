/*
The command cin >> tip; is used to take the user input and store it in the variable tip.
Pretty similar to the C syntax : scanf("%d",&tip);
And the command cout << "You paid "<<tip<<" dollars.\n"; is used for standard output.
Until a new line is specified at the end, the cout concatenates the outputs one after the other.
This is called CHAINING.
*/

#include <iostream>

int main() {
  // initialize an integer "tip" to store the input
  int tip = 0;
 
  std::cout << "Enter tip amount: ";
  std::cin >> tip;
  std::cout << "You paid "<<tip<<" dollars.\n"; 
}

/*
$ Enter tip amount: 10
$ You paid 10 dollars.
*/
