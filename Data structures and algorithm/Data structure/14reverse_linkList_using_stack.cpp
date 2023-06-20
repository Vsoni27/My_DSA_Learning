#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void ReverselinkList()
{
    stack<Node *> add_stk; // creating a stack for storing address of nodes of
                           // linked list
    Node *temp = head;
    while (temp != NULL)
    {
        add_stk.push(temp);
        temp = temp->next;
    }
    Node *temp1 = add_stk.top(); // now we have the address of last node in temp1
    head = temp1;                // head point to the top address of stack ie last node
    add_stk.pop();
    while (!add_stk.empty()) // while address stack is not empty
    {
        temp1->next = add_stk.top();
        add_stk.pop();
        temp1 = temp1->next;
    }
    temp1->next = NULL;
}

void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    Node *temp = head;
    cout << "List: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the no of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int itm;
        cout << "Enter: ";
        cin >> itm;
        Insert(itm);
    }
    Print();
    ReverselinkList();
    cout << "Reversed link ";
    Print();

    return 0;
}