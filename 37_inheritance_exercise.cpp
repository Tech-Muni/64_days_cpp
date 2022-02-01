#include <iostream>
#include <cmath>
using namespace std;

// TODO: Create 2 classes
// TODO:    1. Simple Calculator - Takes input of 2 number using a utility function and performs, +, -, *, / and displays the result another function.
// TODO:    2. Scientific Calculator - Takes input of 2 number using a utility function and performs any four scientific operation of your choiceand displays the result another function.
// TODO:    3. Create another class HybridCalculator and inherit it using these 2 classes.
// TODO:        a. What Type of Inheritance you are using?
// TODO:        b. Which mode of Inheritance you are using?
// TODO:        c. Create an object of HybridCalculator and display result of simple and scinetific calculator.
// TODO:        d. How is code reusability implemented?

class SimpleCalculator
{
private:
    int input1, input2;

public:
    void set_simple_data(int, int);
    void add();
    void subtract();
    void multiply();
    void divide();
};
void SimpleCalculator::set_simple_data(int a, int b)
{
    input1 = a;
    input2 = b;
}
void SimpleCalculator::add()
{
    cout << "The value after addition is:- " << input1 + input2 << endl;
}
void SimpleCalculator::subtract()
{
    cout << "The value after subtraction is:- " << input1 - input2 << endl;
}
void SimpleCalculator::multiply()
{
    cout << "The value after multiplication is:- " << input1 * input2 << endl;
}
void SimpleCalculator::divide()
{
    cout << "The value after division is:- " << input1 / input2 << endl;
}

class ScientificCalculator
{
private:
    float num1;

public:
    void set_scientific_data(float);
    void calc_sin();
    void calc_cos();
    void calc_tan();
    void calc_exp();
};
void ScientificCalculator::set_scientific_data(float f1)
{
    num1 = f1;
}
void ScientificCalculator::calc_sin()
{
    cout << "This is sin(" << num1 << ") is:- " << sin((num1 * 3.1459) / 180) << endl;
}
void ScientificCalculator::calc_cos()
{
    cout << "This is cos(" << num1 << ") is:- " << cos((num1 * 3.1459) / 180) << endl;
}
void ScientificCalculator::calc_tan()
{
    cout << "This is tan(" << num1 << ") is:- " << tan((num1 * 3.1459) / 180) << endl;
}
void ScientificCalculator::calc_exp()
{
    cout << "This is exp(" << num1 << ") is:- " << exp(num1) << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void display();
};

void HybridCalculator::display()
{
    cout << "This is hybrid calculator." << endl;
}

/*
    Answers 3.
        a. I am using Multiple Inheritance.
        b. I am Using Public mode inheritance.
        c. Done
        d. Code is greatly reusable.
*/

int main()
{
    SimpleCalculator s1;
    s1.set_simple_data(12, 23);
    s1.add();
    s1.subtract();
    s1.multiply();
    s1.divide();
    ScientificCalculator s2;
    s2.set_scientific_data(30);
    s2.calc_sin();
    s2.calc_cos();
    s2.calc_tan();
    s2.calc_exp();
    HybridCalculator h1; //All thing using hybrid calculator.
    h1.display();        //All thing using hybrid calculator.
    h1.add();            //All thing using hybrid calculator.
    h1.subtract();       //All thing using hybrid calculator.
    h1.multiply();       //All thing using hybrid calculator.
    h1.divide();         //All thing using hybrid calculator.
    h1.calc_sin();       //All thing using hybrid calculator.
    h1.calc_cos();       //All thing using hybrid calculator.
    h1.calc_tan();       //All thing using hybrid calculator.
    h1.calc_exp();       //All thing using hybrid calculator.
    return 0;
}