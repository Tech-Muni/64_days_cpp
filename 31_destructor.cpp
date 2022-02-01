#include <iostream>
using namespace std;

int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when constructor is called for object number." << count << endl;
    }
    ~Num()
    {
        cout << "This is the time when destructor is called for object number." << count << endl;
        count--;
    } //Syntax of destructor.
};

int main()
{
    cout << "We are instide our main function." << endl;
    cout << "Creating first object n1." << endl;
    Num n1;
    {
        cout << "Entering this block." << endl;
        cout << "Creating two more objects." << endl;
        Num n2, n3;
        cout << "Exiting this block." << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
// Run this code and check terminal you'll find out the flow of the destructor.