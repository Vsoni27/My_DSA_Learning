#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void manage_counter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the ID of item no " << counter + 1 << ": ";
    cin >> item_id[counter];
    cout << "Enter the price of item no " << counter + 1 << ": ";
    cin >> item_price[counter];
    counter++;
}

void shop ::displayprice(void)
{
    cout << "Item_ID\t"
         << "Item_price" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << item_id[i] << "\t" << item_price[i] << endl;
    }
}

int main()
{
    shop mall;
    mall.manage_counter();
    int n;
    cout << "How many items: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        mall.setprice();
    }
    mall.displayprice();

    return 0;
}