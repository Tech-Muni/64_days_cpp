#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return -1;
    }
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n > 0)
    {
        return fib(n - 2) + fib(n - 1);
    }
    else
    {
        return -1;
    }
}

int main()
{
    // the function for call itself
    // 1! pronunced as 1 facctorial and 0! factorial
    // n! = n*(n-1)!
    cout << fact(31) << endl;
    // In fibonacci series the answer is n-1 + n-2
    cout << fib(4) << endl;
    // if rescursion ease the prblem then and only then prove it.
    return 0;
}