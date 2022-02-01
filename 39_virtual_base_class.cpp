#include <iostream>
using namespace std;
/*
    Virtual Base Class:-
        Example:-
            there is a class MainBase
                Prod1 is drevied from MainBase and Prod2 is also derived from MainBase.
                Child is derived from Prod1 and Prod2.
                    Let's say MainBase has a variable res and we need in Child. So it came from Prod1 and Prod2 and then compiler will say wait... What? Variable of same name twice? are you kidding me?
                            Solution:-
                                To solve this problem we need to make Prod1 and Prod2 virtual derived class and MainBase is virtual Base class. They will take care of themselves..
*/

class Student
{
protected:
    int roll_number;

public:
    void set_number(int n) { roll_number = n; }
    void print_number() { cout << "Your roll number is:- " << roll_number << endl; }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks() { cout << "Your result is here Maths: " << maths << " Physics: " << physics << endl; }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float f) { score = f; }
    void get_score() { cout << "Your PT score is:- " << score << endl; }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_marks();
        print_number();
        get_score();
        cout << "Hmm So, your total result is: " << total << endl;
    }
};

int main()
{
    Result harsh;
    harsh.set_number(420);
    harsh.set_marks(92.3, 65.7);
    harsh.set_score(4);
    harsh.display();
    return 0;
}