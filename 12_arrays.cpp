#include <iostream>
using namespace std;
int main()
{
    // Array's are to store similar data type and it's stored contegious **key feature**
    // Why contegious? cause it makes our life easier, easy accesseble.
    int marks[4] = {12, 34, 67, 87};
    // This is the declaration + initialization of an array. Here [4] is optional.
    // ***************************** Remember***************************************
    // ******************** Counting in CPP starts from 0 **************************
    cout << "The index of first value is 0: " << marks[0] << endl;
    int mathMarks[5]; //Initialization only here **********>>>>>>>>>>>>>> [5] is not optional. <<<***********************
    mathMarks[0] = 2; //Declaration only
    mathMarks[1] = 12;
    mathMarks[2] = 52;
    mathMarks[3] = 36;
    mathMarks[4] = 49;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << mathMarks[4] << endl;
    // If we dirctly print mathMark or any array it'll give us starting address of array
    // we can change the value also
    mathMarks[2] = 902;
    cout << mathMarks[2] << endl;
    // how to print values using loops.
    for (int i = 0; i < 4; i++)
    {
        cout << "The mathMarks of " << i << "element is:- " << mathMarks[i] << endl;
    }
    // Doing the same using while and do while loop
    cout << "Using while loop" << endl;
    int i = 0;
    while (i < 4)
    {
        cout << "The mathMarks of " << i << "element is:- " << mathMarks[i] << endl;
        i++;
    }
    cout << "Using do while loop" << endl;
    i = 0; //redeclared it to 0
    do
    {
        cout << "The mathMarks of " << i << "element is:- " << mathMarks[i] << endl;
        i++;
    } while (i < 4);

    // Array's fusion with pointer
    // Let's say you have the array below
    // [12, 45, 65, 76]
    // now *ptr -> 12, *(ptr+1) -> 45, *(ptr + 2) -> 65, *(ptr + 3) -> 76   //ptr is just a varaible name given it may be diffrent
    // This is known as pointer arithmetic in terms of formula it's => newAddr = firstAddr + i * (size of data type)
    int *p = marks;
    cout << "p got address of marks which is " << p << endl
         << "and if we directly print marks it will also give us value" << marks << endl;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p + 1) is " << *(p + 1) << endl;
    cout << "The value of *(p + 2) is " << *(p + 2) << endl;
    cout << "The value of *(p + 3) is " << *(p + 3) << endl;
    return 0;
}