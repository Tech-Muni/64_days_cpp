#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void actualSwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void actualSwap2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// returning refernce
int &returnRefernce(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a; //This function gonna return the address of a
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of 4 and 5 is: " << sum(a, b) << endl;
    cout << "The value of a is: " << a << " and the value of b is: " << b << endl;
    swap(a, b); //It won't swap cause the value is copied in the function actual values of a and b never get touched.
    cout << "The value of a is: " << a << " and the value of b is: " << b << endl;
    cout << "Actual Swapping through pointer" << endl;
    actualSwap(&a, &b);
    cout << "The value of a is: " << a << " and the value of b is: " << b << endl;
    cout << "Actual Swapping through reference" << endl;
    actualSwap2(a, b);
    cout << "The value of a is: " << a << " and the value of b is: " << b << endl;
    cout << "The value above swapped the already swapped value." << endl;
    int ref1 = 9, ref2 = 12;
    returnRefernce(ref1, ref2) = 45; // the value of ref1 would be 45 now
    cout << ref1 << endl;
    return 0;
}