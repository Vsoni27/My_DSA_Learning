#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* getnewnode(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* Insert(Node* root, int val){
    if(root == NULL){
        root = getnewnode(val);
    }
    else if(val<=root->data){
        root->left = Insert(root->left, val);
    }
    else{
        root->right = Insert(root->right, val);
    }
    return root;
}

int findheightofbst(Node* root){
    if(root==NULL){
        return -1;
    }
    int leftheight = findheightofbst(root->left);
    int rightheight = findheightofbst(root->right);
    return (max(leftheight, rightheight)+1);
}

bool search(Node *root, int target)
{
    if (root == NULL)// element not found (exit case for recursive function)
        return false;
    else if (root->data == target)// element found (exit case for recursive function)
        return true;
    else if (target <= root->data)
    {
        search(root->left, target);
    }
    else
    {
        search(root->right, target);
    }
}

int main()
{
    Node* rootnode = NULL;
    rootnode = Insert(rootnode, 15);
    rootnode = Insert(rootnode, 20);
    rootnode = Insert(rootnode, 10);
    rootnode = Insert(rootnode, 8);
    rootnode = Insert(rootnode, 12);
    rootnode = Insert(rootnode, 17);
    rootnode = Insert(rootnode, 25);
    rootnode = Insert(rootnode, 95);
    int itm;
    cout<<"Enter item to be searched: ";
    cin>>itm;
    if(search(rootnode, itm)) cout<<"Item found.."<<endl;
    else cout<<"Item not found.."<<endl;
    cout<<"Height of the tree is: "<<findheightofbst(rootnode);

    return 0;
}