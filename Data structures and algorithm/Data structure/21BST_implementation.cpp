#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode* getnewnode(int val){
    BstNode* temp = new BstNode();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

BstNode* Insert(BstNode *root, int val)
{
    if (root == NULL) root  = getnewnode(val);// simply we'll get a new node(this case will be also be the exit condition for above function)
        
    else if (val <= root->data)// if the value to inserted is lesser or equal than the data present within current node
    {
        root->left = Insert(root->left, val);// then call the function again to insert the new node to left of the current node
    }
    else// vice versa for greater than case
    {
        root->right = Insert(root->right, val);
    }
    return root;
}

BstNode* Insert_iterative(BstNode* root, int val){
    BstNode* newnode = getnewnode(val);
    BstNode* temp = root;
    BstNode* temp1 = NULL;
    while (temp!=NULL)
    {
        temp1 = temp;// temp1 is made to store the address of temp before its left or right section becomes NULL
        if(val <= temp->data){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    if(temp1==NULL){
        temp1 = newnode;
    }
    else if(val<=temp1->data){
        temp1->left = newnode;
    }
    else{
        temp1->right = newnode;
    }
    
    return temp1;
}

bool search(BstNode *root, int target)
{
    if (root == NULL)// element not found (exit case for recursive function)
        return false;
    else if (root->data == target)// element found (exit case for recursive function)
        return true;
    else if (target < root->data)
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
    BstNode* rootptr = NULL;
    int n;
    cout << "How many nodes you want to insert: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter: ";
        cin >> x;
        //rootptr = Insert(rootptr, x);
        rootptr = Insert_iterative(rootptr,x);
    }
    int itm;
    cout<<"Enter item to be searched: ";
    cin>>itm;
    if(search(rootptr, itm)) cout<<"Item found.."<<endl;
    else cout<<"Item not found.."<<endl;

    return 0;
}