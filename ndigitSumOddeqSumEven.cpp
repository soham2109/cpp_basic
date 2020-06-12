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
  int start, end = 0, temp, n,val;
  cin >> n; // n as in n-digit number
	
  // there is a small pattern between the ending multiples of 11
  temp = n;
  while (temp > 1)
    {
      end += 9 * pow (10, (temp - 2));
      temp = temp - 2;
    }
  start = end / 10 + 1;

  for (int i = start; i <= end; i++)
    {
      val = 11*i;
      if(is_equal(val))
	cout << 11 * i << " ";
    }
  return 0;
}

/*
So, the logic for this code goes as follows:
- Firstly, most of the numbers that are divisible by 11 have the property
  that abs(sumOdd-sumEven)=0 or 11.
- and there is a pattern that is followed by numbers divisible by 11:
  | n |  start  | multiplying factor | end-point  | multiplying factor |
  |---|---------|--------------------|------------|--------------------|
  | 2 |   11    |      1             |    99      |         9          |
  | 3 |   110   |  10 = (90//10+1)   |    990     |        90          |
  | 4 |  1001   |  91 =(909//10 + 1) |   9999     |        909         |
  | 5 |  10010  |  910=(9090//10 + 1)|  99990     |       9090         |
  etc. 

*/
