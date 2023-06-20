#include <iostream>
using namespace std;

template <class T>
class linkedList
{
public:
    struct Node
    {
        T data;
        Node *link;
    };
    Node *head = NULL;
    void Insert(int x)
    {
        Node *temp = new Node();
        temp->data = x;
        temp->link = head;
        head = temp;
    }
    void Print()
    {
        Node *temp = head;
        cout << "List: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

template <class T>
void Create(int n, linkedList<T> L)
{
    T x;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter: ";
        cin >> x;
        L.Insert(x);
        L.Print();
    }
}

int main()
{
    linkedList<int> L1;
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    Create(n, L1);
    linkedList<char> L2;
    int n1;
    cout << "Enter no of elements: ";
    cin >> n1;
    Create(n1, L2);

    return 0;
}