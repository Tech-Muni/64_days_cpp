#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void set_data(int a)
    {
        // a = a;  we can't do this as it is we need this for doing this. they refer to same thing. you can check in an ide by uncommenting this line and ctrl + click on that
        this->a = a; //It's gonna work fine. do ctrl + click and check.
    }

    // A &set_data(int a) //It will return an object
    // {
    //     this->a = a;
    //     return *this;
    // }

    void get_data()
    {
        cout << "The value of a is:- " << a << endl;
    }
};

/*
    `This` has more role than just that.
    `This` is a keyword and a pointer which points to the object which invokes the member function.
    we can return object also from this pointer.
*/

int main()
{
    A a;
    // a.set_data(4).get_data();
    a.set_data(4);
    a.get_data();
    return 0;
}