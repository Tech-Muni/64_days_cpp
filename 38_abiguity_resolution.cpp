#include <iostream>
using namespace std;
// In inheritance when 2 different classes has same named functions, how to resolve this in derived class.

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Comment ça va?" << endl;
    }
};
class Base3
{
public:
    void greet()
    {
        cout << "आप कैसे हैं?" << endl;
    }
};

class Derived : public Base1, public Base2, public Base3
{
private:
    int a;

public:
    void greet() //Solving the ambiguity.
    {
        cout << "After resolving ambiguity" << endl;
        Base3::greet();
    }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    Base3 base3obj;
    base1obj.greet();
    base2obj.greet();
    base3obj.greet();
    Derived d;
    // d.greet(); //It's ambigious because when we are doing greet `Derived d` doesn't know whoose greet is this? Is it of Base1, Base2 or Base3? We'll have to solve this.
    d.greet(); //It will use greet of Base3.
    return 0;
}