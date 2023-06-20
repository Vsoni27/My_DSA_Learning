#include <iostream>
using namespace std;

class linkListStack
{
public:
    struct Node
    {
        int data;
        Node *next;
    };
    Node *top = NULL;
    void Push(int x)
    {
        Node *temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
        cout << "Pushed successfully.." << endl;
    }
    bool IsEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Pop()
    {
        if (IsEmpty())
        {
            cout << "Stack underflow!!" << endl;
        }
        else
        {
            Node *temp1 = top;
            top = temp1->next;
            cout << "Item popped -> " << temp1->data << endl;
            delete temp1;
        }
    }
    void Seek()
    {
        if(IsEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout << "Topmost element is: " << top->data << endl;
        }
    }
    void Print()
    {
        if (IsEmpty())
        {
            cout << "Stack is empty.." << endl;
        }
        else
        {
            cout << "Stack is: " << endl;
            Node *temp = top;
            while (temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    linkListStack L1;
    while (true)
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Check empty stack" << endl;
        cout << "4. Print" << endl;
        cout << "5. Seek" << endl;
        cout << "6. Exit" << endl;
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch == 1)
        {
            int item;
            cout << "Enter item to be pushed: ";
            cin >> item;
            L1.Push(item);
        }
        else if (ch == 2)
        {
            L1.Pop();
        }
        else if (ch == 3)
        {
            if(L1.IsEmpty()){
                cout<<"Yes stack is empty.."<<endl;
            }
            else{
                cout<<"No stack is not empty.."<<endl;
            }
        }
        else if (ch == 4)
        {
            L1.Print();
        }
        else if(ch==5){
            L1.Seek();
        }
        else{
            break;
        }
    }

    return 0;
} 