#include <iostream>
using namespace std;

class Base
{
private: //Top Secret don't wanna share it with anyone.
    int b;

protected: //Also a secret don't wanna share it with anyone but I want to make it inherited too...
    int a;

public: //It's public any one can access it.
    Base() {}
};

/*
    type of member:-
           Type of derivation   Public Derivation       |         Private Derivation        |             Protected Derivation
        1. Private members:-
                                Not Inherited           |         Not Inherited             |             Not Inherited
        2. Protected members:-
                                Protected               |         Private                   |             Protected
        3. Public members:-
                                Pulblic                 |         Private                   |             Protected
*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout << b.a << endl;  //It was in protected so an object can't directly access it but it can be derived.
    // cout << d.a << endl; // We've made this class using protected mode so a is also protected for this and can't accessible by an object.
    return 0;
}