#include <iostream>
using namespace std;

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
    friend Complex sumComplex(Complex o1, Complex o2); //They both are friend now.
    void printComplex()
    {
        cout << "Your Complex number is " << a << "+i" << b << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2) //Gonna be a lots of error without friend function
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b)); //How could you access a? It's private in class and this function is not the part of Complex
    return o3;                                // but we can by making both of them friend.  #bro_code😎
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(1, 4);
    c2.setData(5, 8);
    c1.printComplex();
    c2.printComplex();
    sum = sumComplex(c1, c2);
    sum.printComplex();
    return 0;
}

//Friend function doesn't make any other function part of it. They will just share some recourse.
/*
    Properties:
    1. Not in the scope of class.
    2. It just says you are my friend and you can access some of my data.
    3. Since, It's not in the class It can't be called from the object of the class.
    4. Can be invoked without the help of any object (directly accessible in main).
    5. Usually contains the arguments as object.
    6. Can be declared in public or in private.
    7. It can't access directly any memeber it need membership operator (object_name.member_name) to access any member.
*/