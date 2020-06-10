#include<iostream>

int main()
{
  int num,digits=0,temp;
  
  std::cout << "Enter the number :";
  std::cin >> num;
  temp=num;
  
  while(temp)
  {
    temp /= 10;
    digits++;
  }
  
  std::cout << "The number of digits in "<< num << " is : " << digits << "\n";
}
