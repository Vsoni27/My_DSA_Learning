#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *Add(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->link = NULL; // created a new memory block and pointing it to NULL
    if (head == NULL)
    {
        head = temp; // point the head to new memory block(first node) ie temp
    }
    else
    {
        Node *temp1 = head;
        while (temp1->link != NULL)
        {
            temp1 = temp1->link;
        }                   // Now we reach the end of list
        temp1->link = temp; // set the link of last node to temp
    }
    return head; // we return head as its the only hope for accessing the
                 // linked list
}

Node* reverse(Node *head)
{
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->link; // next = (*current).link
        current->link = prev; // now setting the link of current node to
                              // previous node
        prev = current; // now set previous to current
        current = next; // and current to next
    }
    head = prev;// at last when current is NULL and prev is at last node of original
                // list then point the head to it
    return head;
}

void Print(Node *head)
{
    Node *temp = head;
    cout << "List is: [ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << "]" << endl;
}

int main()
{
    Node *head = NULL;
    head = Add(head, 5);
    head = Add(head, 7);
    head = Add(head, 9);
    head = Add(head, 6);
    head = Add(head, 3);
    head = Add(head, 8);
    Print(head);
    head = reverse(head);
    cout << "After reversal" << endl;
    Print(head);

    return 0;
}