#include <iostream>
using namespace std;
/*
    We've seen template with one data type, but we can pass multiple also.
    template <class t1, class t2...(comma seprated)>
    class nameOfClass{
        ...
    }
*/

template <class t1, class t2>
class MyClass
{
public:
    t1 data1;
    t2 data2;
    MyClass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

// Default parameters
template <class t1 = int, class t2 = float> //for t1 int is default and for t2 float is default.
class Hash
{
public:
    t1 a;
    t2 b;
    Hash(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is:- " << a << endl;
        cout << "The value of b is:- " << b << endl;
    }
};

int main()
{
    // We can define t1, t2 here.
    MyClass<int, char> obj(1, 'c');
    obj.display();
    MyClass<int, float> obj1(1, 1.29f);
    obj1.display();
    Hash<> h(1, 1.6); //<> is necessary to show that it's derived from template and if we don't pass any argument then default argument would be assigned.
    h.display();
    Hash<double, char> h1(2.34, 'r'); //we can also define our own data type as above
    h1.display();
    return 0;
}