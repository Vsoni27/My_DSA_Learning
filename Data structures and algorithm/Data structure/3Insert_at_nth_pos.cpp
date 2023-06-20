#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

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

int main()
{
    Insert(4, 1);
    Insert(3, 2);
    Insert(7, 3);
    Insert(9, 1);
    Insert(11, 3);
    Print();
    // taking input from user to insert
    int itm, n;
    cout << "Enter the itm and its position: ";
    cin >> itm >> n;
    Insert(itm, n);
    Print();
    //cout<<"Length: "<<Count(head)<<endl;
    return 0;
}