#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number() { a = 0; } //It's a default constructor.
    Number(int num) { a = num; }
    // **************** When no copy constructor is found, compiler supplies it's own copy constructor. ****************
    Number(Number &obj) //It's a copy constructor it'll just make it's object copy.  // By taking reference of any other object
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x or y.
    Number z1(z); //now it is exact of of z.       //Copy constructor is called
    z1.display();
    z2 = z; //No, Copy constructor is called.         # in Assignment operator no copy constructor is called.
    z2.display();
    Number z3 = z; //Copy constructor is called.
    z3.display();
    return 0;
}
