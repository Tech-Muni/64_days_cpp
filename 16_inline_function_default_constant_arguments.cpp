#include <iostream>
using namespace std;
inline int multiply(int a, int b)
{
    return a * b;
}

int moneyRecieved(int currentMoney, float factor = 1.06)
{
    return currentMoney * factor;
}

int areaOfCircle(const float radius)
{
    //Radius can't be modified here
    return 22 / 7 * radius * radius;
}

int main()
{
    // without inline below lines are doing the same thing taking taking values copying in function and getting output then printing
    // inline will make it faster
    cout << multiply(2, 3) << endl;
    cout << multiply(38, 88) << endl;
    cout << multiply(38, 78) << endl;
    // Don't make every function inline. if function is of 1 or 2 line then do it otherwise don't do it.
    // or at time of recursion, or at time of static variable
    for (int i = 0; i < 4; i++)
    {
        static int st = 0; // It's just for first time
        st += 1;
        cout << st << endl;
    }
    int money = 1000;
    cout << "If you have money " << money << " Rs in your bank account, you will recieve " << moneyRecieved(money) << endl
         << "If you are VIP you'll get " << moneyRecieved(money, 1.1) << endl;
    cout << areaOfCircle(8) << endl;
    return 0;
}