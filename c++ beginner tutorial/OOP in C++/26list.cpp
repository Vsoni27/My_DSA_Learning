#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr = lst.begin();
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst1;
    int n;
    cout << "enter the size of list 1: ";
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter: ";
        cin >> x;
        lst1.push_back(x);
    }
    display(lst1);
    lst1.sort();
    display(lst1);
    lst1.reverse();
    display(lst1);

    return 0;
}