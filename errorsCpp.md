### Introduction to Bugs

___“First actual case of bug being found.”___

The story goes that on September 9th, 1947, computer scientist [Grace Hopper](https://en.wikipedia.org/wiki/Grace_Hopper) found a moth in the Harvard Mark II computer’s log book and reported the world’s first literal computer bug. However, the term “bug”, in the sense of technical error, dates back at least to 1878 and with Thomas Edison.

On your programming journey, you are destined to encounter innumerable red errors. Some even say, that debugging is over 75% of the development time. But what makes a programmer successful isn’t avoiding errors, it’s knowing how to find the solution.

In C++, there are many different ways of classifying errors, but they can be boil down to four categories:

* **Compile-time errors**: Errors found by the compiler.
* **Link-time errors**: Errors found by the linker when it is trying to combine object files into an executable program.
* **Run-time errors**: Errors found by checks in a running program.
* **Logic errors**: Errors found by the programmer looking for the causes of erroneous results.

### Compile-time Errors

When we are writing C++ programs, the compiler is our first line of defense against errors.
There are two types of compile-time errors:
* **Syntax errors**: Errors that occur when we violate the rules of `C++` syntax.
* **Type errors**: Errors that occur when there are mismatch between the types we declared.
  
Some common **syntax errors** are:
* Missing semicolon `;`
* Missing closing parenthesis `)`, square bracket `]`, or curly brace `}`

Some common **type errors** are:
* Forgetting to declare a variable 
* Storing a value into the wrong type

Source : [Codeacademy C++ course](https://www.codecademy.com/courses/learn-c-plus-plus/lessons/cpp-bugs/exercises/intro)
