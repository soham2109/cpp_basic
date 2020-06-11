Often, built-in functions aren’t enough to tackle the wide array of programming challenges out there. But never fear: you can write your own functions too!

A `C++ function` is comprised of two distinct parts:
* **Declaration**: this includes the function’s name, what the return type is, and any parameters (if the function will accept input values, known as arguments).
* **Definition**: also known as the body of the function, this contains the instructions for what the function is supposed to do.

This is the overall structure:
```
return_type function_name( any, parameters, you, have ) {
   // Code block here
   return output_if_there_is_any;
}
```

This is what it might look like with real code:
```
void make_sandwich() {

  std::cout << "bread\n";
  std::cout << "egg\n";
  std::cout << "cheese\n";
  std::cout << "avocado\n";
  std::cout << "bread\n";
}
```
A function with parameters has a couple of requirements:
* The function call must include the same number of arguments as there are parameters.
* The corresponding arguments must be passed in the same order.

By calling a function with arguments, you are telling a function, >“Hey function, when you execute, use these values where you have parameters in your definition.”

While it executes, anywhere the function comes across a parameter, it replaces the parameter with the corresponding argument you gave it.

Wow! Check out all you’ve learned about C++ functions:
*   A function is a named group of statements that do something together.
*   Functions allow you to create more flexible, modular, and DRY code.
*   C++ has many built-in functions that you can use.
*   Functions are called like function_name();
*   A function has a declaration with a return type and possible parameters.
*   A function has a definition (or body) with a group of statements and a possible return value.
*   void functions do not have return values.
*   Functions with a return value have return statements.
*   Parameters are variables used as placeholders for function input values.
*   Arguments are a function’s actual input values.
