#include <iostream>
#include <cmath>

// return the tenth_power of a number
int tenth_power(int num)
{
  return pow(num,10)
}

// compute average of two numbers
double average(double num1, double num2)
{
  return (num1+num2)/2;
}

// return the first three multiples
std::vector<int> first_three_multiples(int num)
{
  std::vector<int> out;
  out.push_back(num*1);
  out.push_back(num*2);
  out.push_back(num*3);

  return out;
}

/*
Define a function needs_water() that accepts:
    - An int number of days since the previous watering.
    - A bool value is_succulent. (A value of true would indicate that the plant is a succulent.)

Inside the function, you’ll need some conditional logic:
    - If is_succulent is false and days is greater than 3, return "Time to water the plant.".
    - If is_succulent is true and days is 12 or less, return "Don't water the plant!".
    - If is_succulent is true and days is greater than or equal to 13, return "Go ahead and give the plant a little water.".
    - Otherwise, return "Don't water the plant!".

*/
std::string needs_water(int days, bool is_succulent)
{
  if(days>3 && !is_succulent)
    return "Time to water the plant.";
  else if (days<12 && is_succulent)
    return "Don't water the plant!";
  else if(days>13 && is_succulent)
    return "Go ahead nad give the plant a little water.";
  else
    return "Don't water the plant!";
}

int main() {
  
  std::cout << "2 raised to the power 10 : "< tenth_power(2) << "\n";
  std::cout << average(41.2,46.6) << "\n";
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << " ";
  }
  std::cout << "\n";
  std::cout << needs_water(10, false) << "\n";
}
