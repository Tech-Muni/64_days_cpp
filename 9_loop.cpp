#include <iostream>
using namespace std;

int main()
{
    // Loops: do his work again and again untill condition satisfied
    /*
    3 types of loops in C++
    For loop,
    While loop,
    do while loop
    */
    //    For loop
    for (int i = 0; i < 4; i++) // int i = 0 => initialization;   i < 4 Condition;      i++ updation
    {
        cout << i << endl; // Loop Body
    }
    // Beware of infinte loop press ctrl + c to stop
    // for (int i = 0; 0 < 1; i++) //0 is always less than 1 so it'll go upto infinite
    // {
    // cout << i;
    // }
    int i = 0;
    while (i < 4)
    {
        cout << i << endl;
        i++; //If we don't write this than it become infinite loop also
    }
    do
    {
        cout << i << endl;
        i++;
    } while (i < 4); // Same like while but first thing will print apart from condition
    // Challenge to print the table of 6
    for (int i = 1; i <= 10; i++)
    {
        cout << i * 6 << endl;
    }

    return 0;
}