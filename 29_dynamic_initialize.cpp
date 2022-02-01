#include <iostream>
using namespace std;
class SimpleIntrest
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    SimpleIntrest() {}//it's also important to atleast create an object and then dynamically other constructor are allocated
    SimpleIntrest(int p, int y, float r); // here the value of r may be 0.04, 0.2 like this
    SimpleIntrest(int p, int y, int r);   // here the value of r may be 1, 20, 4
    void show();
};

SimpleIntrest::SimpleIntrest(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
SimpleIntrest::SimpleIntrest(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void SimpleIntrest::show()
{
    cout << endl
         << "Principal amount was " << principal << ".\nReturn value after " << years << " is " << returnValue << endl;
}
int main()
{
    SimpleIntrest si1, si2, si3;
    int p, y, R;
    float r;
    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    si1 = SimpleIntrest(p, y, r);
    si1.show();

    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    si2 = SimpleIntrest(p, y, R);
    si2.show();

    si3.show();
    return 0;
}