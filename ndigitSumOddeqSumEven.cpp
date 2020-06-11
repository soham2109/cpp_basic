/*
This is a Google QnA question:
Given an integer N, print all N-digit numbers with the sum of digits at even index equal to sum of digits at odd index.
Example : 
Input: 2
Output: 11 22 33 44 55 66 77 88 99
*/

#include <iostream>
#include <cmath>

using namespace std;

bool is_equal (int n)
{
  // more like python lambda function with ternary operator
  bool isOdd = (n % 2 == 1) ? true : false; 

  int sumOdd = 0, sumEven = 0;

  // While there are digits left process 
  while (n != 0)
    {
      if (isOdd)
	    sumOdd += n % 10;
      else
	    sumEven += n % 10;
      
      isOdd = !isOdd;
      n /= 10;
    }
  if (sumOdd == sumEven)
    return true;
  else
    return false;
}

int main ()
{
  // input : n => n of n-digit numbers
  int n;
  cin >> n;
  // the first number always starts with either 11 or 110 or 1100
  int start = pow (10, (n - 2));
  int val;

  for (int i = 1; i <= pow (9, n - 1); i++)
    {
      if (i % 10 != 0)
	      val = 11 * (start + i - 1);
        if (is_equal (val))
	        cout << val << " ";
    }
  return 0;
}

/*
So, the logic for this code goes as follows:
- Firstly, most of the numbers that are divisible by 11 have the property
  that abs(sumOdd-sumEven)=0 or 11.
- There are 9^(n) n-digit numbers that are divisible by 11.
- Then the sum criterion is matched.

NOTE: this code works properly for 2 and 3-digit numbers. Fails in giving output 1001 for 4-digit numbers.
Trying to code for the generic. WILL BE UPDATING SOON!!

*/
