#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> V;
    int element, size;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter: ";
        cin >> element;
        V.push_back(element);
    }
    display(V);
    // V.pop_back();
    // vector<int>::iterator iter = V.begin();
    // V.insert(iter, 2, 34);
    // display(V);
    // V[4] = 654654;
    // cout<<V[4];
    cout<<V.size()<<endl;
    for(int i = V.size()-1; i>=2; i--)
    {
        V[i+1] = V[i];
    }
    V[2] = 798979;
    cout<<V.size();
    return 0;
}