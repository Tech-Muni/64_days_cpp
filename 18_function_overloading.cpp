#include <iostream>
using namespace std;

int add(float a, int b) //if data type doesn't match then compiler try to promote it if possible
{
    cout << "Executed with 2 arguments" << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << "Executed with 3 arguments" << endl;
    return a + b + c;
}

int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

int volume(int a)
{
    return a * a * a;
}

int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 2 and 3 is " << add(2, 3) << endl;
    cout << "The sum of 2, 3 and 4 is " << add(2, 3, 4) << endl;
    // Here CPP compiler is quite intellectuall
    cout << "Volume of cube is " << volume(2) << endl;
    cout << "Volume of cuboid is " << volume(2, 3, 4) << endl;
    cout << "Volume of cylinder is " << volume(3, 5) << endl;
    return 0;
}