

/*
                      [400]             [600]              [800]
     +=====+     +============+---->+============+---->+===========+
     | 400 |---->| 0 | 23 |600|     |400| 4 |800 |     |600| 6 | 0 |--->NULL
     +=====+     +============+<----+============+<----+===========+
                   |
           NULL<---|
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;

Node *GetNewNode(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void InsertAtHead(int x)
{
    Node *newNode = GetNewNode(x);
    if (head == NULL)// if the list is empty 
    {
        head = newNode;
        return;
    }
    head->prev = newNode;// point prev section of first node to newly created node
    newNode->next = head;// point next section of new node to address stored in head ie the first node
    head = newNode;// point head to the new node and now the new node becomes first node of the list
}

void InsertAtTail(int x)
{
    Node *newNode = GetNewNode(x);
    if (head == NULL)// if the list is empty
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)// travest the list and stop at the last node
    {
        temp = temp->next;
    }
    temp->next = newNode;// point next section of last node to the new node
    newNode->prev = temp;// point the prev section of new node to the last node
                         // now this new node becomes last node of the list
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

void ReversePrint()
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << "Reverse list is: ";
    while (temp->next != NULL)
    {
        temp = temp->next;
    }// first reach the end node of the list
    // now traverse till the node is NULL and print all the elements
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void deletefrombeg(){
    Node* temp = head;
    if(temp == NULL){
        return;
    }
    head = temp->next;
    (temp->next)->prev = NULL;
    delete temp;
}

void deletefromlast(){
    Node* temp = head;
    if(temp==NULL){
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    (temp->prev)->next = NULL;
    delete temp;
}

void deleteIndex(int index){
    Node* temp = head;
    if(temp==NULL){
        return;
    }
    for(int i = 1;i<index;i++){
        temp = temp->next;
    }
    (temp->prev)->next = temp->next;
    (temp->next)->prev = temp->prev;
    delete temp;
}

int main()
{
    int n, x;
    cout << "How many numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> x;
        InsertAtHead(x);
        Print();
        ReversePrint();
    }
    cout << "Enter number to be inserted at tail: ";
    cin >> x;
    InsertAtTail(x);
    Print();
    ReversePrint();
    cout<<"After deleting first node"<<endl;
    deletefrombeg();
    Print();
    ReversePrint();
    cout<<"After deleting last node"<<endl;
    deletefromlast();
    Print();
    ReversePrint();
    int ind;
    cout<<"Enter the index you want to delete: ";
    cin>>ind;
    deleteIndex(ind);
    cout<<"After deleting index "<<ind<<endl;
    Print();
    ReversePrint();
    return 0;
}
