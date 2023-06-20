#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void Reverse(Node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    Reverse(p->next);
    (p->next)->next = p;
    p->next = NULL;
}

void add(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void Print()
{
    Node *temp = head;
    cout << "List is: [ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]";
}



int main()
{
    head = NULL;
    add(7);
    add(8);
    add(1);
    add(17);
    add(14);
    add(41);
    Print();
    Reverse(head);
    cout << endl;
    cout << "Reversed ";
    Print();

    return 0;
}