#include<iostream>

long fibonacci(int n)
{
    long fib1 = 0;
    long fib2 = 1;
    long fib;
    if(n==0) return fib1;
    else if(n==1) return fib2;
    else{
        for(int i=2; i<=n; i++)
        {
            fib = fib1 + fib2;
            fib1= fib2;
            fib2 = fib;
        }
    }
    return fib;
}

int main()
{
    int n;
    std::cout << "Enter the Fibonacci seq number to calculate: ";
    std::cin >> n;
    std::cout << fibonacci(n) << std :: endl;
    return 0;
}
