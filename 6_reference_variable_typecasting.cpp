#include <iostream>
#include <typeinfo>
using namespace std;

int c = 12;

int main()
{
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is: " << c << endl;
    // Recall that any function will give preference to it's local variable instead of gloabl.
    // But what if we wanna use gloabal variable
    cout << "Local c is: " << c << endl;
    cout << "Global c is: " << ::c << endl;
    // :: this is scope resolution variable and it's used to access global variable by taking precedence over local variable.

    // **************** Literals ****************
    // 34.4 or any other decimal number is taken as float in c++, to specify it's float we need we need to do the thing below
    double d = 23.3; //It's double and it's by default
    float e = 23.3f; //It's float cause we've inserted f at the end.
    float f = 23.3;  //It's double cause we haven't inserted f at the end.
    cout << typeid(d).name() << endl;
    // it will print d for double, i for int, f for float
    long double g = 32.34321l;
    // f and F is same IN THIS CASE, similarly d and D
    // It may cause problem in function overloading
    cout << sizeof(34.22) << endl;
    cout << sizeof(34.22f) << endl;
    cout << sizeof(34.22F) << endl;
    cout << sizeof(34.22l) << endl;
    cout << sizeof(34.22L) << endl;

    // ****************** Reference ******************
    // Suppose a guy have an Insta account named heartHacker, Your name on Govt.ID is kalia, your moms called you:- beta, and other calls you:- chapri
    // Observe all the things refer to a human being but with different identity.
    int chapri = 12;
    int &heartHacker = chapri;
    // <_._> IT DOESN'T MAKE ANY COPY OF THE VARIABLE. The variable is same but name is different.
    cout << chapri << endl
         << heartHacker << endl;
    // ******************** TYPECASTING ********************
    // To convert one data type into other
    float variable = 12.45;
    cout << variable << endl;
    cout << (int)variable << endl;
    cout << int(variable) << endl;
    
    return 0;
}