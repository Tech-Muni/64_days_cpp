#include <iostream>
#include <iomanip> //Contains setw manipulator
using namespace std;

int main()
{
    int a = 0;
    cout << a << endl;
    a = 12;
    cout << a << endl;
    //What if I don't want to change the value of variable?
    //the solution is to make it constant.
    // *********** const *************
    const int b = 1488;
    // b = 34; // this will give us error
    // *************** Manipulators *****************
    //Used to format output ex. endl it's in iostream
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of a with setw is: " << setw(10) << a << endl;
    cout << "The value of b with setw is: " << setw(10) << b << endl;
    // To give width of ouput here it's 10
    // ************** Precedence **************
    int q = 12;
    float w = 32.4f;
    cout << q*q+w/2-q*w<<endl; //What's gonna happen first?
    // Don't know go on internet and search C++ Operator precedence
    // BODMAS may or may not be correct
    return 0;
}