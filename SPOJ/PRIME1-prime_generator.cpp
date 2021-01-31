/*
PROBLEM STATEMENT
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
**PRIME1 - Prime Generator**
#number-theory
Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

**Input**
The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

**Output**
For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.

Example
Input:
2
1 10
3 5
Output:
2
3
5
7

3
5

Warning: large Input/Output data, be careful with certain languages (though most should be OK if the algorithm is well designed)

#### NOTE: normal approach results in time-exceeding error.
*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if(n<2) return false;
	else
	{
		for(int i=2; i*i<=n; i++)
		{
			if(n%i==0) return false;
		}
		return true;
	}
}

int main() {
	
	// your code here
	int t, m, n;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> m >> n;
		if(m==1) m++;
		while(m<=2){
			cout << m << endl;
			m++;
		}
		if(m%2==0) m++;
		for(int j=m; j<=n; j=j+2)
		{
			if(isPrime(j)) cout << j << endl;
		}
		cout << endl;
	}
	
	return 0;
}
