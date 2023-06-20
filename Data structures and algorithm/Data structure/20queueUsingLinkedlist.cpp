#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue(){
    if(front == NULL) return;
    Node* temp = front;
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    delete temp;
}

void print(){
    Node* temp = front;
    if(temp==NULL) return;
    cout<<"Queue is: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    enqueue(45);
    print();
    enqueue(95);
    print();
    enqueue(46);
    print();
    enqueue(19);
    print();
    enqueue(23);
    print();
    cout<<"after dequeue"<<endl;
    dequeue();
    print();
    dequeue();
    print();

    return 0;
}