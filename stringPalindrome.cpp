/*
Define a function is_palindrome() that takes:
    An std::string parameter text.

The function should return:
    true if text is a palindrome.
    false if text is not a palindrome.

(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “ardvark” are not.)
We will not test for edge cases such as capitalization or spaces.
*/

#include <iostream> 
#include <iterator>
#include <algorithm>

bool is_palindrome(std::string text)
{
  std::string temp=text;
  std::reverse(std::begin(text),std::end(text));
  if(temp==text) return true;
  else return false;
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}

/* Outputs
1
1
0
*/
