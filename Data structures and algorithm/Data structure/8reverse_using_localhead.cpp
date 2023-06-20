#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* reverse(Node *head){
    Node* p = head;
    if(p->link == NULL){
        head = p;
        return head;
    }
    reverse(p->link);
    (p->link)->link = p;
    p->link = NULL;
}

Node *Add(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while (temp1->link != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = temp;
    }
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
