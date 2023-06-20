#include <iostream>
using namespace std;

class Stack
{
    int top;
    int *arr;
    int size;

public:
    void set_stack(int n)
    {
        top = -1;
        size = n;
        arr = new int[n];
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack overflow..." << endl;
        }
        else
        {
            top++;
            arr[top] = val;
            cout << "Pushed successfully..." << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Underflow! Stack is empty..." << endl;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            cout << "Popped item is -> " << popvalue << endl;
        }
    }

    int peek(int pos)
    {
        return arr[pos];
    }

    void count()
    {
        if (isEmpty())
        {
            cout << "0 items to display" << endl;
        }
        else
        {
            cout << "Total elements => " << top + 1 << endl;
        }
    }

    void change(int pos, int value)
    {
        arr[pos] = value;
        cout << "Changed successfully..." << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty..." << endl;
        }
        else
        {
            cout << "Elements of the stack are: [ ";
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<"]"<<endl;
        }
    }

    void seek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty..." << endl;
        }
        else
        {
            cout << "Topmost element is: " << arr[top] << endl;
        }
    }
};

int main()
{
    Stack s;
    int pos, value, option, n;
    cout << "Enter the length of the stack: ";
    cin >> n;
    s.set_stack(n);
    while (true)
    {
        cout << "------------------------" << endl;
        cout << "****Stack main menu*****" << endl;
        cout << "------------------------" << endl;
        cout << "\t1. Push" << endl;
        cout << "\t2. Pop" << endl;
        cout << "\t3. isEmpty" << endl;
        cout << "\t4. isFull" << endl;
        cout << "\t5. Peek" << endl;
        cout << "\t6. Count" << endl;
        cout << "\t7. Change" << endl;
        cout << "\t8. Display" << endl;
        cout << "\t9. Seek" << endl;
        cout << "\t10. Exit" << endl;
        cout << "------------------------" << endl;
        cout << "Enter from above options: ";
        cin >> option;

        if (option == 1)
        {
            cout << "Enter the item to be pushed: ";
            cin >> value;
            s.push(value);
        }
        else if (option == 2)
        {
            s.pop();
        }
        else if (option == 3)
        {
            if (s.isEmpty())
            {
                cout << "Yes, stack is empty..." << endl;
            }
            else
            {
                cout << "No, stack is not empty..." << endl;
            }
        }
        else if (option == 4)
        {
            if (s.isFull())
            {
                cout << "Yes, stack is full..." << endl;
            }
            else
            {
                cout << "No, stack is not full..." << endl;
            }
        }
        else if (option == 5)
        {
            if (s.isEmpty())
            {
                cout << "No item to display.." << endl;
            }
            else
            {
                cout << "Enter the index: ";
                cin >> pos;
                cout << "Your desired itemis => " << s.peek(pos) << endl;
            }
        }
        else if (option == 6)
        {
            s.count();
        }
        else if (option == 7)
        {
            if (s.isEmpty())
            {
                cout << "Stack is empty.." << endl;
            }
            else
            {
                cout << "Enter the index: ";
                cin >> pos;
                cout << "Enter the value: ";
                cin >> value;
                s.change(pos, value);
            }
        }
        else if (option == 8)
        {
            s.display();
        }
        else if (option == 9)
        {
            s.seek();
        }
        else if (option == 10)
        {
            break;
        }
        else
        {
            cout << "Error try again.." << endl;
            continue;
        }
    }

    return 0;
}