#include <iostream>
using namespace std;

int main()
{
    // CPP Control Structures
    // 1. Sequence, 2. Selection, 3. Loop
    // 1. Sequence => When actions are performed line by line
    // 2. Selection Structure => Based On Condition
    // 3. Loop => take a condition and repeat the action again and again untill the condition met
    // Selection Structre Selection
    int age;
    cout << "What is your age? " << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "Welcome to party bro..." << endl;
    }
    else if (age == 18)
    {
        cout << "Luck AF welcome you'll get a starter kit to enjoy" << endl;
    }
    else if (age < 5)
    {
        cout << "You aren't even born kiddo just go and drink milk." << endl;
    }
    else
    {
        cout << "We don't sell ^__^__^ to childrens" << endl;
    }
    switch (age)
    {
    case 18:
        cout << "Luck AF welcome you'll get a starter kit to enjoy" << endl;
        break;              //If we don't put break then the below case will also print
    case 22:
        cout << "Welcome to party bro..." << endl;
        break;           //We ain't wanna do that
    default:                                    //Default is case when nothing match
        cout << "We aren't taking much cases" << endl;
        break;             //So do remember
    }
    return 0;
}