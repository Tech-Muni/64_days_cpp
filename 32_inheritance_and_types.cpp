#include <iostream>
using namespace std;
// Inheritance part of oops. It increases reusability. A LOT
/*
    Terminologines and characterstics:-
        Existed class known as Base class.
        New class known as Derived class.
        There may be more than one base and derived class.
        Save money and time.
        There are different types of inheritance with their names.
*/
/*
    types of inheritance:-
        Single Inheritace:-
            One derived class with only one base class.              //Simple and easy peasy.
        Multiple Inheritance:- 
            One derived class with more than one base class.         //Easy but a little squeasy.
        Hierarchical Inheritance:-
            More than one derived class from single base class.      //Easy with little boozy.
        Multilevel Inheritance:-
            Deriving a class from already derived class.             //now you say is it easy? or it is easy... //For example:- Animal => Mammal => Cow
        Hybrid Inheritance:-
            Just the mixture of Multiple, Hierarchcal and Multilevel Inheritance.
*/

// Base Class
class Employee
{
private:
    float salary;

public:
    int id;
    Employee() {}
    Employee(int empId)
    {
        id = empId;
        salary = 12.21;
    }
    ~Employee() {}
};

// derived class syntax
/* class {{DerivedClassName}} : {{visibility-mode}} {{BaseClassName}}{
    Cosntructors, Members, methods, destructors,.. etc,
};
    Visibility Mode:-  Either Public or Private...
    Default Visibility Mode is private.
        1.Private Means:-
            Public member of base class becomes private of derived class.
        2. Public Means:-
            Public member of base class becomes public of derived class.
    Private members:- never get inherited.
*/

// Creating a programmer based class form derived main class
class Programmer : Employee
{
public:
    Programmer(int empId) { id = empId; }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee saswat(1), harsh(2);
    Programmer skillF(1);
    cout << saswat.id << endl;
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}