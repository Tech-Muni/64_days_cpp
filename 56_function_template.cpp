#include <iostream>
using namespace std;

// Normal way
// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// Through template
template <class t1, class t2>
float funcAverage(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapDataTypes(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    // Normal way
    // a = funcAverage(5, 2);
    // printf("The average of these number is %.3f\n", a);
    // a = funcAverage2(5, 2.3);
    // printf("The average of these number is %.3f\n", a);

    // through template
    a = funcAverage(4, 2.4);
    printf("The average of these number is %.3f\n", a);
    a = funcAverage(4.2, 2.4);
    printf("The average of these number is %.3f\n", a);
    int s = 5, t = 6;
    swapDataTypes(s, t);
    cout << s << endl
         << t << endl;
    s = 4.3f, t = 7.23f;
    swapDataTypes(s, t);
    cout << s << endl
         << t << endl;
    s = 'r', t = 'f';
    swapDataTypes(s, t);
    cout << s << endl
         << t << endl;//It will print the ascii value
    return 0;
}