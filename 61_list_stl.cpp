#include <iostream>
#include <list> //give bidirectional list
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++) //lst.end() gives reference of last element.
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(12);
    list1.push_back(73);
    // list<int>::iterator iter;
    // iter = list1.begin(); //it's just a reference of first element of list1.
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";

    // the code above has same work as below function
    display(list1);

    list<int> list2(3); // Empty list of size 3.
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 13;
    iter++;
    *iter = 1;
    iter++;
    *iter = 93;
    iter++;
    *iter = 25;
    iter++;
    *iter = 25;
    iter++;
    display(list2);
    // Removing
    list1.pop_back(); //removes from back
    display(list1);
    list2.pop_front(); //removes from back
    display(list2);
    list2.remove(25); //remove all occurance of 25.
    display(list2);
    // Sorting
    list1.sort();
    display(list1);
    //Merging
    list1.merge(list2);
    display(list1);

    *iter = 343;
    iter++;
    *iter = 65;
    iter++;
    // Merging and Sorting
    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);
    // Reversing
    list1.reverse();
    display(list1);
    return 0;
}