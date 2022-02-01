#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c); //Declaration Only
    void getData()                     //Declaration & Initialization
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

// Initialization of setData()
void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// Sample Animal class
class Animal
{
private:
    int legs, no_of_horn, weight;

public:
    char firstLetter;
    void setValues(int l, int noh, int w);
};
void Animal::setValues(int l, int noh, int w)
{
    legs = l;
    no_of_horn = noh;
    weight = w;
}

class Binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void Display(void);
};

void Binary::read(void)
{
    cout << "Enter a Binary Number:- " << endl;
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrece binary format" << endl;
            exit(0);
        }
    }
}

void Binary::ones(void)
{
    Binary::chk_bin();                                     // nestiing of binary function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::Display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // Read 19OOPS.txt
    Employee john;
    john.d = 23;
    john.e = 12;
    john.setData(1, 2, 3);
    john.getData();
    // john.a = 12;       //We can't access it directly... cause it's private
    Binary b;
    b.read();
    // b.chk_bin();     //Instead of check binary giving to user we can call it at ones function this is known as nesting of member function
    cout << "The value before ones compliment" << endl;
    b.Display();
    b.ones();
    cout << "The value after ones compliment" << endl;
    b.Display();
    return 0;
}