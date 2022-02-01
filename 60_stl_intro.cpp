#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector." << endl;
    for (int i = 0; i < v.size(); i++) //v.size() to get the size of a vector.
    {
        // cout << v[i] << " ";  //This is same as below.
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1; //It manage it's size automatically.     0 length integer vector.
    display(v1);
    int element, size;
    cout << "Enter the size of Vector ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;        //take input from keyboar
        v1.push_back(element); //to stroe input values in a vector.
    }
    display(v1);
    v1.pop_back();                          //To remove last element.
    vector<int>::iterator itr = v1.begin(); //iterator starting from begining
    v1.insert(itr, 564);                    //iter is an iterator and insert function will insert any value at any place
    v1.insert(itr + 2, 23);                 //It will insert at where (iterator is pointing + 2nd place)
    display(v1);
    v1.insert(itr + 3, 10, 45); //It's means 10 copies of 45 will be placed in v1 where starting index is (itr + 3rd)value
    display(v1);

    // NEW THINGS IN VECTOR.
    size = 5;
    // Types of initialization in vector
    vector<char> vec2(4); //4-length character vector.
    vec2.push_back('c');
    display(vec2);
    vector<char> vec3(vec2); //4-length character vector from vec2.
    display(vec3);
    vector<int> vec4(6, 3); //6 element vector of 3s.
    // Ex of above:- 3 3 3 3 3 3
    display(vec4);
    cout << vec4.size() << endl;
    return 0;
}