#include <iostream>
using namespace std;
// global variable
char global = 'g';
int main()
{
    // Some DataTypes are:-
    // Basic One
    int a = 2;          //Int to store int.
    float b = 2.35;     //Float it to store low decimal values.
    char c = 's';       //Char is to store a character (a single one with single quote '').  !!!!!!!! Single Quote !!!!!!!!!
    double d = 4.98745; //double is to store high decimal values.
    bool e = true;      //bool contains only true or false
    // User Defined => struct , Union and Enum
    // Derived   =>  Array, Function and Pointer
    // We'll see it later.
    // Common Practices
    // 1. If we have to store same data type variable we can do it like this:-                  !!!!!!!!! Same DATA TYPE !!!!!!!!! Remember
    int f = 12, g = 45;
    char h = 'f', i = 'k';
    // to print use cout
    cout << a << endl
         << b << endl
         << c << endl
         << d << endl
         << e << endl
         << f << endl
         << g << endl
         << h << endl
         << i << endl;
    //  endl for new line
    // We can use "\n" or '\n' for new line also
    // 2. The cout(recource) will give the prefernce to that variable which is in local scope(inside the function) and right above it.
    char letter = 'a';
    cout << letter << endl;
    letter = 'b';
    // Here it's gonna print the value
    cout << letter << endl;
    // 3. If cout(recource) haven't found in local scope then it will try to locate on global level.
    cout << global << endl;
    /*
    Rules to declare variables:-
    It can start with alpbhabets or _ and after first character numbers are also aloud.
    numbers are not allowed at first place.
    It can be from 1 to 255 characters in length.
    It should not match with built in keywords AKA RESERVED KEYWORDS. like return, for, while, if, int, double, switch, etc
    */
    return 0;
}
