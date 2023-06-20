#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Queue
{
private:
    int *arr;
    int size;
    int frnt, rear;

public:
    Queue(int n)
    {
        size = n;
        arr = new int[size];
        frnt = rear = 0;
    } 
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full.." << endl;
        }
        else
        {
            arr[rear++] = data;
        }
    }
    int dequeue()
    {
        if (frnt == rear)
        {
            return -1;
        }
        else
        {
            int item = arr[frnt++];
            if (frnt == rear)
            {
                frnt = rear = 0;
            }
            return item;
        }
    }
    bool isempty()
    {
        if (frnt == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print()
    {
        if (isempty())
        {
            cout << "Queue is empty.." << endl;
        }
        else
        {
            cout << "Queue is: ";
            for (int i = frnt; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    void sizeofqu()
    {
        cout << "The size of queue is: " << rear - frnt << endl;
    }
};

int main()
{
    Queue q(6);
    int x = q.dequeue();
    if (x == -1)
    {
        cout << "Empty queue.." << endl;
    }
    else
    {
        cout << "Dequeud item is: " << x << endl;
    }
    q.sizeofqu();
    for (int i = 0; i < 6; i++)
    {
        int itm;
        cout << "Enter item: ";
        cin >> itm;
        q.enqueue(itm);
        q.print();
        q.sizeofqu();
    }
    x = q.dequeue();
    if (x == -1)
    {
        cout << "Empty queue.." << endl;
    }
    else
    {
        cout << "Dequeud item is: " << x << endl;
    }
    q.sizeofqu();

    return 0;
}