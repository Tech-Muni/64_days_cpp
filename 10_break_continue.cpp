#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 12; i++)
    {
        if (i == 10) //After 9 nothing will print cause as soon i became 10 it will get out of the for loop
        {
            break; //stops the for loop
        }
        if (i == 2) //2 won't be print cause
        {
            continue;
        }
        
        cout << i << endl;
    }
    return 0;
}