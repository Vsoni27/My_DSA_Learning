#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Deque
{
public:
    // Initialize your data structure.
    int *arr;
    int frnt, rear, size;
    Deque(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[n];
        frnt = rear = -1;
    }
    
    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(frnt == -1){
            return true;
        }
        else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((frnt == 0 && rear == size-1) || rear == (frnt-1+size)%size){
            return true;
        }
        else{
            return false;
        }
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            frnt = rear = 0;
        }
        else{
            frnt = (frnt+size-1)%size;
        }
        arr[frnt] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            frnt = rear = 0;
        }
        else{
            rear = (rear+1)%size;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        int pop = arr[frnt];
        if(frnt == rear){
            frnt =rear = -1;
        }
        else{
            frnt = (frnt+1)%size;
        }
        return pop;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        int pop = arr[rear];
        if(frnt == rear){
            frnt = rear = -1;
        }
        else{
            rear = (rear + size - 1)%size;
        }
        return pop;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[frnt];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
   
};

int main()
{
    

    return 0;
}