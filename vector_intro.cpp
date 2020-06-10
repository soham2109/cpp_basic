/*
Introduction to Vectors

To do just about anything of interest in a program, we need a group of data to work with.
For example, our program might need:
   - A list of Twitter’s trending tags
   - A set of payment options for a car
   - A catalog of eBooks read over the last year
The need for storing a collection of data is endless.
We are familiar with data types like int and double, but how do we store a group of ints or a group of doubles?
In this lesson, we will start with one of the simplest, and arguably the most useful, ways of storing data in C++: a vector.
A vector is a sequence of elements that you can access by index.

Creating a Vector

The std::vector lives in the <vector> header. So first, we need to add this line of code at the top of the program:
#include <vector>

For review, #include is a preprocessor directive that tells the compiler to include whatever library that follows. 
In our case that is the standard vector library.
And the syntax to create a vector looks like:
std::vector<type> name;

So to define a vector of ints called calories_today:
std::vector<int> calories_today;
Inside the angle brackets is the data type of the vector. After the angle brackets is the name of the vector.
Note: The type of the vector (i.e., what data type is stored inside) cannot be changed after the declaration.

Adding and Removing Elements

.push_back()
To add a new element to the “back”, or end of the vector, we can use the .push_back() function.
.pop_back()
You can also remove elements from the “back” of the vector using .pop_back().

*/

#include <iostream>
#include <vector>

int main()
{
  // initialize a double vector
  std::vector<double> subway_adult;
  
  // initialize with a value
  std::vector<double> subway_child = {400,600,750};
  
  // printing the values
  // <vectorName>.size() returns the length of the vector
  // and each element is accessed by <vectorName>[i], indexing starts from 0
  for(int i=0;i<subway_child.size();i++)
    std::cout<<subway_child[i] << " ";
  std::cout << "\n";
  
  // push and pop
  std::vector<std::string> last_jedi;
  
  // Add characters here:
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  
  for(int i=0;i<jedi.size();i++)
    std::cout<<jedi[i] << " ";
  std::cout << "\n";
  
  // vector operations
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  double total = 0.0;
  for(int i=0;i<delivery_order.size();i++)
    total += delivery_order[i];
  
  std::cout << total << "\n";
  
  // find the sum of even numbers and product of odd numbers from a vector
  std::vector<int> num = {2,4,3,6,1,9};
  int sum = 0;
  int prod = 1;

  for(int i=0;i<num.size();i++)
  {
    if(num[i]%2==0)
      sum += num[i];
    else
      prod *= num[i];
  }
  std::cout << "Sum of even numbers is "<<sum<<"\n";
  std::cout << "Product of odd numbers is "<<prod<<"\n";
  
}
