/*
Logical Operator: &&

The and logical operator is denoted by &&.
It returns true if the condition on the left and the condition on the right are both true. Otherwise, it returns false.
Here’s the truth table:
  a 	    b 	  a && b
false 	false 	false
false 	true 	  false
true 	  false 	false
true 	  true 	  true

For instance:
    ( 1 < 2 && 2 < 3 ) returns true
    ( 1 < 2 && 2 > 3 ) returns false

Note: The keyword and can also be used in the place of &&.
--------------------------------------------------------------------------------------------------------------------------------
Logical Operator: ||
The or logical operator is denoted by ||.
It returns true when the condition on the left is true or the condition on the right is true. Only one of them needs to be true.
Here’s the truth table:
  a 	    b 	  a || b
false 	false 	false
false 	true 	  true
true 	  false	  true
true 	  true    true

For instance:
    ( 1 < 2 || 2 > 3 ) returns true
    ( 1 > 2 || 2 > 3 ) returns false

Note: The keyword or can be used in the place of ||.
----------------------------------------------------------------------------------------------------------------------------------
Logical Operator: !

The not logical operator is denoted by !.
It reverses the bool outcome of the expression that immediately follows.
Here’s the truth table:
  a 	 !a
false true
true 	false

For instance:
    ( !true ) returns false
    ( !false ) returns true
    ( !(10 < 11) ) returns false

Note: The keyword not can be used in the place of !.
*/

#include <iostream>

int main() {
  
  int hunger = true;
  int anger = true;
  
  // Write the code below:
  if(hunger==true && anger==true)
    std::cout<<"Hangry\n";
  
  int day = 6;
  
  // Write the code below:
  if(day==6 || day==7)
    std::cout << "Weekend\n";
    
  bool logged_in = false;
  
  // Write the code below:
  if(!logged_in)
    std::cout << "Try Again\n";
  
}
