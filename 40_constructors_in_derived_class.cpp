#include <iostream>
using namespace std;

/*
    Base class constructor is already applied in derived class. if present.
    If Base and Derived both class has constructor than base class constructor called first.
    If Base class constructor does not have any arguments then there is no need of any constructor in derived class.
    If there are more than one arguments in base class constructor then derived class need to pass arguments to the base class constructor.

    Constructor in multiple inheritance.
        : public base1, public base2 then base1 instructor will call first.
    Constructor in multlevel inheritance.
        constructor will be called in the order of inheritance path.
    
    Special Syntax:-      //We'll see it
        Derived Constructor(arg1, arg2, arg3, ...):Base1-Constructor(arg1, arg2):Base2-Constructor(arg3, arg4){
            ...
        }
    Virtual Base class constructor is called before any virtual base class.
    Video number 46 of c++ by Code with harry.

    Examples:-
        1.
            class B: public A{};          --> A constructer will call first then B.
        2.
            Class A: public B, public C{};   --> B constructer will call first then C then A.
        3.
            Class A: public B, public C{};   --> C constructer will call first then B then A.    //Because virtual has high priority.
*/

class Base1
{
private:
    int data1;

public:
    Base1() {} //It's required.
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called." << endl;
    }
    void print_data_base_1() { cout << "The Value of data is:- " << data1 << endl; }
};

class Base2
{
private:
    int data2;

public:
    Base2() {} //It's required.
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called." << endl;
    }
    void print_data_base_2() { cout << "The Value of data is:- " << data2 << endl; }
};

// // Without Virtual
// class Derived : public Base2, public Base1 //Firstly base2 class constructor would be called.
// {
// private:
//     int derived1, derived2;
// public:
//     Derived(int a, int b, int c, int d) : Base1(a), Base2(b) //The special syntax.
//     {
//         derived1 = c;
//         derived2 = d;
//         cout << "D erived class constructor is called" << endl;
//     }
//     void print_data_derived()
//     {
//         cout << "The value of derived1 is:- " << derived1 << endl;
//         cout << "The value of derived2 is:- " << derived2 << endl;
//     }
// };

// With Virtual
class Derived : public Base2, virtual public Base1 //Firstly base1 class constructor would be called.
{
private:
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) //It's order doesn't matter.         ****************** IMPORTANT ******************
    {
        derived1 = c;
        derived2 = d;
        cout << "D erived class constructor is called" << endl;
    }
    void print_data_derived() { cout << "The value of data is:- " << derived1 << endl; }
};

int main()
{
    Derived der(1, 2, 3, 4);
    der.print_data_base_1();
    der.print_data_base_2();
    der.print_data_derived();
    return 0;
}