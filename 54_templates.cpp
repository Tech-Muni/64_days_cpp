#include <iostream>
using namespace std;
// Single code template used for multiply data types.
// Template classes aka Parametarized classes.
// We can use generic programming.
// Template and STL is very good for Competetive Programming

// Normal Way
// class Vector
// {
// public:
//     int *arr;
//     int size;
//     Vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(Vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// Through Templating.
template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Normal Way
    // Vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // int a = v1.dotProduct(v2);
    // cout << a << endl;

    // Through template class we can decide here what data type we want to use.
    // If template was not there then we've to write class for float, int, double ... etc.
    // We've passed data type as variable.
    Vector<float> v1(3);
    v1.arr[0] = 4.12;
    v1.arr[1] = 3.94;
    v1.arr[2] = 1.02;
    Vector<float> v2(3);
    v2.arr[0] = 1.65;
    v2.arr[1] = 0.97;
    v2.arr[2] = 1.34;
    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}