#include <iostream>
using namespace std;

// Static data member is usefull to share common functionality
class Employee
{
private:
    // int count = 0;       //this gonaa give every employee it's count but we want it to share among them
    static int count; //it will solve our problem and we don't have to initialize by default it's initialized with 0 and we have to write it agian outside of class.
    int id;

public:
    void setData(void)
    {
        cout << "Enter the Id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The employee Id is:- " << id << " and employee number is:- " << count << endl;
    }
    static void getCount(void)       //Static function only access of static variable
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee::count; //to change the default value of count we need to write it here like count = 176;
int main()
{
    Employee tommy, john, rohan;
    tommy.setData();
    tommy.getData();
    Employee::getCount();   //To access function
    john.setData();
    john.getData();
    Employee::getCount();
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    return 0;
}