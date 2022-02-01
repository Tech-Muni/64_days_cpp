#include <iostream>
using namespace std;

template <class T>
class Template
{
public:
    T customData;
    Template(T a) { customData = a; }
    void display();
};
// We can't do it like normal function becuase it's a template function and it has it's own syntax.
// void Template::display()
// {
//     cout << customData << endl;
// }

template <class T>
void Template<T>::display()
{
    cout << customData << endl;
}

// function overloading through template.
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatized func() " << a << endl;
}

int main()
{
    Template<float> t(2.3);
    cout << t.customData << endl;
    t.display();
    func(4); //Exact data type will take higher priority over template function.
    func('c');
    return 0;
}