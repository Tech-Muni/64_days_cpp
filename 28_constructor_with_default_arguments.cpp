#include <iostream>
using namespace std;
class Simple
{
private:
    int data1, data2;

public:
    Simple(int a, int b = 9) // here if b is not give at the time of construction then this will apply
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};
void Simple::printData()
{
    cout << "The Value of data is " << data1 << " and " << data2 << endl;
}
int main()
{
    Simple s(1, 4);
    s.printData();
    Simple q(3);
    q.printData();
    return 0;
}