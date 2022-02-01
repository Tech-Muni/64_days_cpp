#include <iostream>
using namespace std;
// I've told you that we'll discuss user defined data type. So, here it is.
// Used to combine different type of data type
// Structure syntax is below
struct employee
{
    int eID;
    char favChar;
    double sallary;
};

// It's just blue print means it's just hint what we are gonna store in that
// another way to make blue print
typedef struct country
{
    char firstLetter;
    char lastName;
    int favNum;
    bool liveInSamecountry;
} cn;

// Union similar to structure but with better memory managment.
union money
{
    // defination of money at different places and we wanna use only one at once...
    int rice;
    char carName;
    float pounds;
    // It'll share the same memory among them
};

int main()
{
    // here is the declaration of an employee...
    struct employee john;
    john.eID = 0;
    john.favChar = 'k';
    john.sallary = 123.9758;
    // This is 1st way to declare a struct
    cout << "The value eID is:- " << john.eID << endl;
    cout << "The value favChar is:- " << john.favChar << endl;
    cout << "The value sallary is:- " << john.sallary << endl;
    cn fam = {'I', 'N', 7, 1};
    cout << fam.liveInSamecountry << endl;
    cout << fam.favNum << endl;
    union money m1;
    m1.rice = 54;
    // if we'll overwrite it and want to take actual value of m1 it'll give us garbage.
    cout << m1.rice << endl;
    enum meal
    {
        Brekfast,
        Lunch,
        Dinner
    };
    cout << Brekfast << endl;
    cout << Lunch << endl;
    cout << Dinner << endl;
    // It will give us integer value associated with that.
    return 0;
}