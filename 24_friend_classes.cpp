#include <iostream>
using namespace std;
// Same thing as before instead of making friends in function we're gonna make friend in function

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumReal(Complex o1, Complex o2);
    int sumComplex(Complex o1, Complex o2);
};

class Complex
{
private:
    int a, b;
    friend int Calculator::sumReal(Complex o1, Complex o2);
    friend int Calculator::sumComplex(Complex o1, Complex o2); //Only this gonna error we have to make a class our firend so it's gonna take more effort.
    // we've to pre declare everything about this function and move calculator above it and it's public classes should be declare outside of class using `  ::  `
    // #Compiler_Tauntarams

    // Well it's still making class function as a friend.                There is a way to make whole class friend at once
    // friend class Calculator;            //It will make whole class as firend.

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printComplex()
    {
        cout << "Your Complex number is " << a << "+i" << b << endl;
    }
};

int Calculator::sumReal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);
    Calculator calc;
    int res = calc.sumReal(o1, o2);
    cout << "The sum of real part of o1 and o2 is:- " << res << endl;
    res = calc.sumComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is:- " << res << endl;
    return 0;
}

// Flow Most Important:-   (giver, reciever) => (data giving class, data recieving class)
// 1. Early declareration of function whoose data need to be access. (giver)
// 2. Pre Declared Calculator with it's function(whose need data).   (reciver)      Function is not defined yet
// 3. Giver class making friend to reciever.
// 4. functions of reciever (who require some data).