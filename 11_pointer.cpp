#include <iostream>
using namespace std;
int main()
{
    // Pointers => Holds the address of other data types. That's It don't make it hyped
    int a = 12;
    int *ptr = &a; //&(variable is address) and *(new variable) is a way to declare variable
    // & address of a pointer
    // * Dereferencing operator
    cout << "Address of a: " << ptr << endl;
    // This address may change cause every time programm run cpu may give new location accoding to that time.
    cout << "value of variable which address is stored in `a` is: " << *ptr << endl;
    // Now point can also contain address of different pointer
    // It's fancy name is pointer to pointer
    int **ptr_to_ptr = &ptr;
    cout << "The address of ptr_to_ptr: " << ptr_to_ptr << endl;
    cout << "The value of variable whose address is stored in ptr_to_ptr: " << *ptr_to_ptr << endl;
    cout << "The value of variable whose address is stored in *ptr: " << **ptr_to_ptr << endl;
    return 0;
}