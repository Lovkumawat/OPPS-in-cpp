#include <iostream>
using namespace std;
// C++ Objects Memory Allocation & using Arrays in Classes

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void display(void);
};
void Shop::setPrice(void)
{
    cout << "Enter id of your item "<<counter+1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id : " << itemId[i] << "is" << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan,s;
    dukaan.initCounter();
    s.initCounter();
    s.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    s.display();
    dukaan.setPrice();

    dukaan.display();

    // both dukaan and s are different counter 
    return 0;
}