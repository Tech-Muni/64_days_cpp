#include <iostream>
using namespace std;
// Easy Example
class Y;
class X
{
private:
    int data;

public:
    void setValue(int val)
    {
        data = val;
    }
    friend void add(X, Y); //You'll need to declare Y upper to tell compiler it's present in our program.
};
class Y
{
private:
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Addition of data of X and Y ojects gives me:- " << o1.data + o2.num << endl;
}

// More Easy example

class C2;

class C1
{
private:
    int val1;
    friend void exchangeVal(C1 &, C2 &);

public:
    void inData(int a) { val1 = a; }
    void display() { cout << val1 << endl; }
};
class C2
{
private:
    int val2;

public:
    void inData(int a) { val2 = a; }
    friend void exchangeVal(C1 &, C2 &);
    void display() { cout << val2 << endl; }
};

void exchangeVal(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    X a;
    a.setValue(3);
    Y b;
    b.setValue(86);
    add(a, b);
    C1 oc1;
    C2 oc2;
    oc1.inData(96);
    oc2.inData(69);
    cout << "Value of oc1 before display: " << endl;
    oc1.display();
    cout << "Value of oc2 before display: " << endl;
    oc2.display();
    exchangeVal(oc1, oc2);
    cout << "Value of oc1 after display: " << endl;
    oc1.display();
    cout << "Value of oc2 after display: " << endl;
    oc2.display();

    return 0;
}