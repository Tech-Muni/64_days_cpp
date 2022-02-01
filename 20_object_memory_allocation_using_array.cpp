#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 1; }
    void getPrice(void);
    void displayPrice(void);
};

void Shop::getPrice(void)
{
    cout << "Enter Id of Your Item number: " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter Price of Your Number!!!" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The ItemId is: " << itemId[i] << " and the price is: " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.displayPrice();
    return 0;
}