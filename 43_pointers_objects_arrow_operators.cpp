#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void get_data()
    {
        cout << "The real part is:- " << real << endl;
        cout << "The imaginary part is:- " << imaginary << endl;
    }
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;
    // Complex *ptr = new Complex;  //another way of doing the same thing.
    cout << "Normal Way" << endl;
    c1.set_data(1, 54);
    c1.get_data();
    cout << "Pointer Way" << endl;
    (*ptr).set_data(1, 54);
    (*ptr).get_data();
    cout << "Pointer Syntax Way" << endl;
    ptr->get_data(); //better way.  `->` automatically dereference.

    // Array of Objects.
    // It's confusing and we'll see it later.
    Complex *ptr1 = new Complex[3];
    ptr1->set_data(12, 55);
    ptr1->get_data();
    return 0;
}