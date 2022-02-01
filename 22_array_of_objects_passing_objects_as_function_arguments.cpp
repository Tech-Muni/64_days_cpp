#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void setID()
    {
        salary = 122;
        cout << "Enter the Id of employee: " << endl;
        cin >> id;
    }

    void getID() const
    {
        cout << "The employee Id is:- " << id << endl;
    }
};

class Complex
{
private:
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printComplex()
    {
        cout << "Your Complex number is " << a << "+i" << b << endl;
    }
};

int main()
{
    // Employee tim, vicky, raj;
    // tim.setID();
    // tim.getID();
    // vicky.setID();
    // vicky.getID();
    // raj.setID();
    // raj.getID();
    // Suppose we've 99 or more employees. Then this method sucks and programmer hate sucked things
    // Solution is create an array and loop it.

    // Employee IG[5]; //create an array of 5 object called as IG.
    // for (int i = 0; i < 4; i++)
    // {
    //     IG[i].setID();
    //     IG[i].getID();
    // }

    Complex c1{}, c2{}, c3{};
    c1.setData(1, 2);
    c1.printComplex();
    c2.setData(3, 4);
    c2.printComplex();
    c3.setDataBySum(c1, c2);
    c3.printComplex();
    return 0;
}