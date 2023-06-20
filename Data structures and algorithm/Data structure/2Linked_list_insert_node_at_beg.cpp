#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *head = NULL;// declared as a global variable as it will be easily 
                  // to all below funtions

void Insert(int x)
{
    Node *temp = new Node();// create a memory block
    temp->data = x;   // set the data of new memory block
    temp->link = head; // set the link of previous first node to the new node
    head = temp;// point the head to new node
}

void Print()
{
    Node *temp = head;
    cout << "List: ";
    while (temp != NULL)// temp or temp->link
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int Count(Node* temp){
    if(temp->link == NULL){
        return 1;
    }
    else if(temp == NULL){
        return 0;
    }
    return 1+Count(temp->link) ;
}

int main()
{
    int n, x;
    //head = NULL;
    cout << "How many numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> x;
        Insert(x);
        Print();
    }
    cout<<"Length: "<<Count(head)<<endl;
    return 0;
}