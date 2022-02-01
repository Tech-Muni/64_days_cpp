#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base = 1;
    virtual void display() //it's virtual function now if this class function is popinting on a derived class object and calling this function then it won't get executed.
    // In simple terms reverse the behaviour what we've seen.
    {
        cout << "1 Displaying Base class variable var_base:- " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Displaying derived class variable var_derived:- " << var_derived << endl;
        cout << "2 Displaying Base class variable var_base:- " << var_base << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); //We know it's gonna run display() of base class normally But to change this behaviour we are gonna need virtual function.
    // it's also run time polymorphism.

    // Now see, Derived class object with derived class object.
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 19; //It's of derived class it will call it self regardless of virtual.
    derived_class_pointer->display();
    return 0;
}

// If derived class has not same named function,          as of in base class virtual function,             then by default base classed function will called.