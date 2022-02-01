#include <iostream>
using namespace std;

/*
    syntax for initialization list in constructor:-
        Constructor (argument list): initialization-section{
            assignment + other code;
        }
        
        class Test{
            int a;
            int b;
            public:
                Test (int i, int j): a(i), b(j){constructor-body}
        };
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j) //i is initialized at place of a and j is initialized at place of b.
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(a + j) //here a is initialized already that's why we can initialize b as a + j
    // Test(int i, int j) : a(b + i), b(j) //here b has already some garbage value so it can also use that but it will give use garbage too.
    // Test(int i, int j) : b(j), a(i) //it will work fine.
    // Test(int i, int j) : b(j), a(b + i) //it will also give us garbage value because in private members we've written a above and b below.
    Test(int i, int j) : a(i) //it's also true.
    {
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test a(4, 5);
    return 0;
}