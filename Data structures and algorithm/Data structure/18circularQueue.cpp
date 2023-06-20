#include <bits/stdc++.h>
#define ll long long
using namespace std;

class MyCircularQueue
{
public:
    int *arr;
    int frnt;
    int rear;
    int size;

    bool isFull()
    {
        if ((frnt == 0 && rear == size - 1) || (rear == (frnt - 1) % (size)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (frnt == -1)
        {
            return true;
        }
        return false;
    }
    MyCircularQueue(int k)
    {
        size = k;
        arr = new int[k];
        frnt = rear = -1;
    }

    bool enQueue(int value)
    {
        if (isFull())
        {
            return false;
        }
        else if (frnt == -1)
        { // first element to be pushed
            frnt = rear = 0;
        }
        else if (rear == size - 1 && frnt != 0)
        {
            rear = 0; // to maintain cyclic nature
        }
        else
        {
            rear++; // normal case
        }
        arr[rear] = value;
        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
        {
            return false;
        }
        else if (frnt == rear)
        { // single element is present
            frnt = rear = -1;
        }
        else if (frnt == size - 1)
        {
            frnt = 0; // to mantain cyclic nature
        }
        else
        {
            frnt++; // normal case
        }
        return true;
    }

    int Front()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[frnt];
        }
    }

    int Rear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};

int main()
{

    return 0;
}