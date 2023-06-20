#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}; 

Node *head = NULL;

void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Insert(int x, int n)
{
    Node *temp1 = new Node();
    temp1->data = x;
    temp1->next = NULL;
    if (n == 1) // if link is to be added at beg
    {
        // simply inserting the node at beginning
        temp1->next = head; // break previous link and set the link of previous
                            // node to the new one
        head = temp1;       // point the head to the new/first node
    }
    else
    {
        Node *temp2 = head;
        for (int i = 0; i < n - 2; i++)
        {
            temp2 = temp2->next;
        } // reach at (n-1)th node
        temp1->next = temp2->next; //(*temp1).next
        temp2->next = temp1;
    }
}

void Print()
{
    Node *temp = head;
    cout << "List is: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Delete(int n)
{
    Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        delete temp1;
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            // as soon at we enter this loop we are now pointing
            // to the 2nd node by below statement
            // so although loop is running (n-2) times still we will be pointing
            // to (n-1)th node during the end of this loop
            temp1 = temp1->next;
        }
        // temp1 pointing to the (n-1)th node
        Node *temp2 = temp1->next; // temp2 points to nth node
        temp1->next = temp2->next; // now temp1 points to (n+1)th node
                                   // (n-1)th node now points to (n+1)th node
        delete temp2;              // delete the nth node
    }
}

int main()
{
    int n;
    cout << "Enter the no of item in linked list: ";
    cin >> n;
    int itm;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> itm;
        Insert(itm);
        Print();
    }
    int pos;
    cout << "Enter the position of element you want to delete: ";
    cin >> pos;
    Delete(pos);
    Print();
    cout<<"Enter the element and its position: ";
    cin>>itm>>pos;
    Insert(itm, pos);
    Print();
    return 0;
}