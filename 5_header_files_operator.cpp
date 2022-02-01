#include <iostream>
// press ctrl and click on iostream to check what's inside it and don't bother much after seeing it Most important don't mess with the file.
/* 2 types of header files are there:-
1. Come with complier like above one
2. Written by programmer and don't come pre built
*/
using namespace std;
// user defined header files are like this    `    #include"user.h"   ` if file is not present then it'll give error
int main()
{
    cout << "operator in cpp" << endl;
    // Arithmetic operator like:- ( + , - , * , / ) (add , subtract , multiply , divide)
    // some more expamples are % ++ --
    // Let's see here
    int a = 4, b = 5;
    cout << a + b << endl; // adding
    cout << a - b << endl; // subtract
    cout << a * b << endl; // multiply
    cout << a / b << endl; // divide applied between integers so it will give integers.
    cout << a % b << endl; // modular give reminder
    cout << a++ << endl;   // It'll print the value first and increase it               //print 4 and make it 5
    cout << a-- << endl;   // It'll print the value first and decrease it               //print 5 make it 4
    cout << ++a << endl;   // It'll increase it and then print the value                //make it 5 and print 5
    cout << --a << endl;   // It'll decrease it and then print the value                //make it 4 and print 4
    // Comparison Operator
    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a != b) << endl;
    // NOTE: ^-^ it will print the values as 0 and 1
    // 0 is equal to false and then 1 is equal to 1
    // Logical operators same as read in semiconductors
    // Logical AND is written as &&
    // Logical OR is written as ||
    // Logical NOT is written as !
    cout << ((a == b) && (a < b)) << endl;
    cout << ((a == b) || (a < b)) << endl;
    cout << (!(a == b)) << endl;
    // Bitwise Operator
    // WE'll discuss it later

    // The ARITHMETIC Operation Between two different types of value:- The result would be of who takes higher size
    // ex:- 2 + 2.3 = 4.3 not 4
    return 0;
}
