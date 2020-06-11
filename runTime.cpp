/*
The chrono library in C++ is used to time the scriptor infer time in units if milliseconds.
This small example is used to time a  recursive factorial script.
*/

#include <iostream>
#include <chrono>

int factorial(int num)
{
    if(num==1 || num==0)
        return 1;
    else
        return num*factorial(num-1);
}

int main() {
  
  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << factorial(5) << "\n";
  
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for factorial(5): " << time_span.count() << " milliseconds.\n\n";
}

/*
Output : 
120
Time taken for factorial(5): 0.040379 milliseconds.
*/
