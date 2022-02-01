#include <iostream>
using namespace std;

//it's a function called as sum have two arguments a and b
int sum(int a, int b) // a and b are formal parameters
{
    int c = a + b;
    return c; //returns the addition
}

// prototyped
int multiply(int a, int b);

// function may be of type void or float or any data type
// void need not to return anything

void greet(void);

int main()
{
    // function is to achieve or perform certain kind of tasks.
    int n1, n2;
    cout << "Enter Num1:- " << endl;
    cin >> n1;
    cout << "Enter Num2:- " << endl;
    cin >> n2;
    cout << "The addition of " << n1 << " and " << n2 << " is:- " << sum(n1, n2) << endl; // n1, n2 are known as actual parameters.

    cout << "This multiplication is applicable after function prototyping and the result is" << multiply(n1, n2) << endl;
    greet();
    return 0; //this return 0 means the program is executed successfully.
}
// it'll give us error to solve it we need to pass it's prototype above main
int multiply(int n1, int n2)
{
    return n1 * n2;
}

void greet()
{
    cout << "This is a greet message but it's not for you;" << endl;
}
