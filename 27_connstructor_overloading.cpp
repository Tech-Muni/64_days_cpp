#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    explicit Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    explicit Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(76, 6);
    Complex c2(4);
    Complex c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}