#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base:- " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying derived class variable var_derived:- " << var_derived << endl;
        cout << "Displaying Base class variable var_base:- " << var_base << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //the spotlight goes here is it possible? yep! it is.
    // the pointer is of base class. So, if we try to print display function then it will call display() of base class.
    base_class_pointer->var_base = 34; //This is known as late binding.
    base_class_pointer->display();
    // it's binded to base class pointer.
    // It can't access things of derived class such that.
    // base_class_pointer->var_derived = 23; //error

    // Now see, Derived class object with derived class object.
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 23;
    derived_class_pointer->display();
    // it's binded to derived class pointer.

    // We can find the output by seeing the code.
    // but compiler manages it at run time.  run time polyphormism.
    return 0;
}