#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

void Print(Node* p){
    if(p == NULL){
        return;
    }
    cout<<p->data<<" ";
    Print(p->link);// making a recursive call to Print
}
// vv important
void Print_rev(Node* p){
    if(p == NULL){
        return;
    }
    Print_rev(p->link);
    cout<<p->data<<" ";
}

Node* Add(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        Node* temp1 = head;
        while(temp1->link!=NULL){
            temp1 = temp1->link;
        }
        temp1->link = temp;
    }
    return head;
}

int main()
{
    Node* head = NULL;
    head = Add(head, 4);
    head = Add(head, 5);
    head = Add(head, 1);
    head = Add(head, 13);
    head = Add(head, 7);
    Print(head);
    cout<<endl;
    Print_rev(head);

    return 0;
}
