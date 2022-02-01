#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// Function Object(functor):- Function wrapped in a class so that it's available like an object.

int main()
{
    int arr[] = {12, 3, 16, 34, 5, 6};
    // sort(arr, arr + 5);                 //sort only 5 element from starting in ascending order.
    sort(arr, arr + 5, greater<int>()); //sort only 5 element from starting in descending order.
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}