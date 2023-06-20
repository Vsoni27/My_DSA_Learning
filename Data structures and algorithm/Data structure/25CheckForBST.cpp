#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Node
{
    char data;
    Node *left;
    Node *right;
};

Node *getnewnode(char x)
{
    Node *newnode = new Node();
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

Node *Insert(Node *root, char val)
{
    if (root == NULL)
        root = getnewnode(val);
    else if (val <= root->data)
        root->left = Insert(root->left, val);
    else
        root->right = Insert(root->right, val);
    return root;
}

bool IsSubtreeLesser(Node *root, char val)
{
    if (root == NULL)
        return true;
    if (root->data <= val && IsSubtreeLesser(root->left, val)
        && IsSubtreeLesser(root->right, val))
    {
        return true;
    }
    else return false;
}
bool IsSubtreeGreater(Node *root, char val)
{
    if (root == NULL)
        return true;
    if (root->data > val && IsSubtreeGreater(root->left, val)
        && IsSubtreeGreater(root->right, val))
    {
        return true;
    }
    else return false;
}

bool IsBST(Node *root)
{
    if(root == NULL) return true;
    if(IsSubtreeLesser(root->left, root->data)
       && IsSubtreeGreater(root->right, root->data)
       && IsBST(root->left)
       && IsBST(root->right))
       return true;
    else return false;
}

int main()
{
    Node *rootptr = NULL;
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
    if(IsBST(rootptr)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}