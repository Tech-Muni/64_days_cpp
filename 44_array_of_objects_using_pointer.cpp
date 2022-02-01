#include <iostream>
using namespace std;

class ShopItem
{
private:
    int id;
    float price;

public:
    void set_data(int a, float b)
    {
        id = a;
        price = b;
    }
    void get_data()
    {
        cout << "Code of this item is:- " << id << endl;
        cout << "Price of this item is:- " << price << endl;
    }
};

int main()
{
    int size = 2;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    /*
    So now we have 2 types of items in a shop:-
        drugs & medicine,
        hardware
*/
    int p, i;
    float q;
    for (i = 0; i <= size; i++)
    {
        cout << "Enter Id and Price of items:- " << i + 1 << endl;
        cin >> p >> q;
        ptr->set_data(p, q);
        ptr++;
    }
    for (i = 0; i <= size; i++)
    {
        cout << "Item Number: " << i + 1 << endl;
        ptrTemp->get_data();
        ptrTemp++;
    }
    return 0;
}