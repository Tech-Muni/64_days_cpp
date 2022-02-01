#include <iostream>
using namespace std;

// Multiple Inheritance:- one derived class and more than one base class.
// Syntax
/* class {{DerivedClassName}}: {{visibility-mode}} {{BaseClass1}}, {{visibility-mode}} {{BaseClass2}}{
    body of class
}*/

class Base1
{
protected:
    int base1int;

public:
    void setBase1Int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2Int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is: " << base1int << endl;
        cout << "The value of Base2 is: " << base2int << endl;
        cout << "The sum of theses values is: " << base1int + base2int << endl;
    }
};
/*
    What does this Derived class have now?
        Data Members:-
            base1int --> protected
            base2int --> protected
        Member Functions:-
            set_base1int --> public
            set_base2int --> public
            set_show() --> public
*/
int main()
{
    Derived harsh;
    harsh.setBase1Int(12);
    harsh.setBase2Int(98);
    harsh.show();
    return 0;
}