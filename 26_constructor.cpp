#include <iostream>
#include <cmath>
using namespace std;
// Constructor is use to set default value at the time of declaration.

class Complex
{
private:
    int a, b;

public:
    // creating a constructor.
    // it's name is same of class and use to initialize the member of the class and it's automatically invoked wheneve an object is created
    Complex(int, int); //Declares a Constructor.
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Complex::Complex(void)
// { // It's a default constructor cause it takes no values. We can make it at run time known as parameterized constructor.
// a = 0;
// b = 0;
// }

// parameterized constructor
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

// We'll also see how to do both side by side but later.  known as constructor overloading.

class Point
{
private:
    int x, y;

public:
    friend float dist_Between_Two_Points(Point p1, Point p2);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

float dist_Between_Two_Points(Point p1, Point p2)
{
    int answer = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return answer;
}

int main()
{
    Complex a = {3, 4}; //1st way to construct it
    a.printNumber();
    Complex b = Complex(5, 7); //2nd way
    b.printNumber();
    Complex c(4, 8); //3rd way
    c.printNumber();
    Point p(2, 3);
    Point q(5, 9);
    cout << dist_Between_Two_Points(p, q) << endl;
    return 0;
}

/*
Characterstics of constructors.
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They can't return any thing and don't have return types.
4. It can't have default arguments.
5. We can't refer to their address.
*/