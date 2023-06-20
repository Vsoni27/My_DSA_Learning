

/*
          [459]       [407]         [259]        [316]           Tail pointer
       +========+   +========+   +========+   +=======+<--------+=====+
  |--->|45 | 407|-->|21 | 259|-->|11 | 316|-->|7 | 459|----     | 316 |
  |    +========+   +========+   +========+   +=======+   |     +=====+
  |                                                       |
  | ------------------------------------------------------|

  There is no start and end part of a circular linked list, but still we take a tail pointer for storing some
  information about the linked list for performing different operations.

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void InsertNode(Node *&tail, int element, int value)// we have to insert the value after given element
{
    if (tail == NULL)
    {
        Node *newNode = new Node(value);
        tail = newNode;
        newNode->next = newNode; // last node pointing to itself
        return;
    }
    Node *current = tail;
    while (current->data != element)
    {
        current = current->next;
    }
    // now current is pointing to the node containing the given element
    Node *temp = new Node(value);
    temp->next = current->next;
    current->next = temp;
}

void print(Node *tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty.." << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}
void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout<<"List is empty.."<<endl;
        return;
    }
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data != value  ){
        prev = curr;
        curr = curr->next;
    }
    // if(prev == tail){
    //     cout<<"Element not found.."<<endl;
    //     return;
    // }
    prev->next = curr->next;
    if(tail == curr){// if by chance we want to delete the node at which tail was pointing then it would
                     /* also delete tail and hence identity of list will be lost, so to avoid that we point the 
                        tail to any other node of the list(in this case we point it to previous node)*/
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *tail = NULL;
    InsertNode(tail, 5, 7);
    print(tail);
    InsertNode(tail, 7, 45);
    print(tail);
    InsertNode(tail, 45, 21);
    print(tail);
    InsertNode(tail, 21, 11);
    print(tail);
    InsertNode(tail, 11, 65);
    print(tail); 
    int x;
    cout<<"Enter the element you want to delete ";
    cin>>x;
    deleteNode(tail, x);
    cout<<"after deletion.."<<endl;
    print(tail);
    cout<<"Enter the element after you which you want to insert: ";
    cin>>x;
    int y;
    cout<<"Enter the element to be inserted: ";
    cin>>y;
    InsertNode(tail, x,y);
    cout<<"after insertion.."<<endl;
    print(tail);

    return 0;
}

