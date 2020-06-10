/* 
Print the following pattern
        1
      2 3
    4 5 6
 7 8 9 10    
 */
 // Approach 1 : To hard code the output

#include <iostream>

int main() {

  std::cout << "       1\n";
  std::cout << "     2 3\n";
  std::cout << "   4 5 6\n";
  std::cout << "7 8 9 10\n";

}

// Approach 2 : To take a programming approach using spaces and a counter
/*
#include <iostream>
using namespace std;

int main() 
{
  int n=1;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(j<4-i-1)
        cout << "  ";
      else
      { cout << n << " ";
        n++; }
    }
    cout << "\n";
  }
}
*/
