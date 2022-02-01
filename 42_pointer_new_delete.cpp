#include <iostream>
using namespace std;

int main()
{
    // Basic Example.
    int a = 4;
    int *ptr = &a; //this memory is allocated in stack.
    cout << "The value of a is:- " << *(ptr) << endl;

    // ************************* NEW *************************
    int *p = new int(4); //this memory is allocated in heap.
    // Similarly we can initialize float, double, arrays... etc.
    cout << "The value of a is:- " << *(p) << endl;
    // Arrays.
    int *arr = new int[3]; //array in heap
    arr[0] = 10;
    arr[1] = 20;
    *(arr + 2) = 30; //It's also true known as pointer arithmtic
    cout << "The value of arr 0 is:- " << arr[0] << endl;
    cout << "The value of arr 1 is:- " << arr[1] << endl;
    cout << "The value of arr 2 is:- " << arr[2] << endl;
    // ************************* HEAP *************************
    delete ptr;   //now the values given by us in arr will be freed and there is no gaurantee at all to get the desired output.
    delete p;     //We should always delete operator after our work is completed.  ** ALWAAYS **
    delete[] arr; // by using [] we can delete an array.
    cout << "The value of arr 0 is:- " << arr[0] << endl;
    cout << "The value of arr 1 is:- " << arr[1] << endl;
    cout << "The value of arr 2 is:- " << arr[2] << endl; //Return garbage.
    return 0;
}