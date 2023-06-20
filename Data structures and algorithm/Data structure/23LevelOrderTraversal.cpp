#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

Node* getnewnode(char x){
    Node* newnode = new Node();
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

Node* Insert(Node* root, char val){
    if(root==NULL) root = getnewnode(val);
    else if(val<=root->data) root->left = Insert(root->left, val);
    else root->right = Insert(root->right, val);
    return root;
}

void levelorder(Node* root){
    if(root == NULL){
        cout<<"Tree is empty"<<endl;
        return;
    } 
    queue<Node*> qu;
    qu.push(root);
    while(!qu.empty()){// till there is atleast one node left in the queue
        Node* current = qu.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) qu.push(current->left);
        if(current->right!=NULL) qu.push(current->right);
        qu.pop();
    }
}

int main()
{
    Node* rootptr = NULL;
    rootptr = Insert(rootptr, 'F');
    rootptr = Insert(rootptr, 'D');
    rootptr = Insert(rootptr, 'J');
    rootptr = Insert(rootptr, 'B');
    rootptr = Insert(rootptr, 'E');
    rootptr = Insert(rootptr, 'G');
    rootptr = Insert(rootptr, 'K');
    rootptr = Insert(rootptr, 'A');
    rootptr = Insert(rootptr, 'C');
    rootptr = Insert(rootptr, 'I');
    rootptr = Insert(rootptr, 'H');
    levelorder(rootptr);

    return 0;
}