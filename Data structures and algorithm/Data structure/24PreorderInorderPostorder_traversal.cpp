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

void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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
    cout<<"Preorder traversal: ";
    preorder(rootptr);
    cout<<endl;
    cout<<"Inorder traversal: ";
    inorder(rootptr);
    cout<<"(elements are printed in a sorted manner)"<<endl;
    cout<<"Postorder traversal: ";
    postorder(rootptr);
    cout<<endl;
    return 0;
}