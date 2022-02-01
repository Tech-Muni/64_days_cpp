#include <iostream>
using namespace std;

// Multilevel Inheritance:-    A => B => C => D => E

// Student class parent class of all classes.
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "The roll number is:- " << roll_number << endl;
}

// Exam class inherited from Student class         uptill now it's single inheritance.
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam::get_marks()
{
    cout << "The marks obtained in maths are:- " << maths << endl;
    cout << "The marks obtained in physics are:- " << physics << endl;
}

// Result class inherited from Exam and it is inherited from Student class.             So, it is multilevel inheritance now.
class Result : public Exam
{
private:
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percntage is:- " << (maths + physics) / 2 << "%." << endl;
    }
};

int main()
{
    /*
        Important:-
            If we are inheriting C from B and B from A. [A --> B --> C]
                1. A is the Base class for B and B is the Base class for C.
                2. ABC is called Inheritance path.
    */
    Result saswat;
    saswat.set_roll_number(420);
    saswat.set_marks(99.9, 90.0);
    saswat.display_result();
    return 0;
}