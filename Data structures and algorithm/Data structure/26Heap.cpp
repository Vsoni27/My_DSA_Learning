#include <bits/stdc++.h>
#include <chrono>
#define ll long long
using namespace std;
/*
Heap is a complete binary tree with some different order of nodes
What is a complete binary tree then?
    A complete binary tree is a binary tree where all the levels are completely filled except the last level.
    And remeber the CBT is filled always from left.

Ok so what is heap?
As said its a CBT with some diff order of nodes
The order is that -> 1. Every child node is smaller than the parent node (Max-Heap)
                     2. Every child node is greater than the parent node (Min-Heap)

We can implement a heap in form of an array

ith index -> left node: (2*i)  right node: (2*i+1)
             parent node: (i/2)

*/

class Heap
{
public:
    int capacity;
    int heap[2000];
    int size;
    Heap(int n)
    {
        capacity = 0;
        heap[0] = -1;
        size = n;
    }

    void Insert(int val)
    {
        capacity++;
        heap[capacity] = val;
        int i = capacity;
        while (i > 1)
        {
            if (heap[i / 2] < heap[i])
            {
                swap(heap[i], heap[i / 2]);
            }
            else
                break;
            i /= 2;
        }
        // Time complexity -> O(logn)
    }

    void print()
    {
        for (int i = 1; i <= capacity; i++)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }

    void setSorted(vector<int> &nums)
    {
        for (int i = 1; i <= size; i++)
        {
            nums[i - 1] = heap[i];
        }
    }

    void Delete()
    {
        // Delete means to delete the top node which is in this case is the max val as its a max-heap
        if (capacity == 0)
        {
            return;
        }
        swap(heap[capacity], heap[1]); // replace the top values with the bottom right(which is the last one in the heap array)
        capacity--;
        int i = 1;
        // now take that root node to its correct position
        while (i <= capacity)
        {
            int leftindex = 2 * i, rightindex = 2 * i + 1;
            if (leftindex <= capacity && heap[i] < heap[leftindex] && heap[leftindex] >= heap[rightindex])
            {
                swap(heap[i], heap[leftindex]);
                i = leftindex;
            }
            else if (rightindex <= capacity && heap[i] < heap[rightindex] && heap[rightindex] >= heap[leftindex])
            {
                swap(heap[i], heap[rightindex]);
                i = rightindex;
            }
            else
                return;
        }
        // Time complexity => O(logn)
    }

    int front()
    {
        return heap[1];
    }
};

void heapsort(vector<int> &nums)
{
    // we create a max-heap from the nums vector then deletes the whole heap
    Heap hp(nums.size());
    for (auto it : nums)
    {
        hp.Insert(it);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        hp.Delete();
    }
    hp.setSorted(nums);
    // Time complexity -> O(nlogn)
    // Space complexity -> O(n)
}

int main()
{
    vector<int> x = {3,1,4,7,89,12,144,11,8,8,4,9,2,1,3,26,87,45,34,21,32,76,39};
    // Heap hp(x.size());
    // for(auto it: x){
    //     hp.Insert(it);
    // }
    // hp.print();
    cout << "Before sorted:" << '\t';
    for (auto it : x)
        cout << it << " ";
    cout << endl;
    heapsort(x);
    bool flag = true;
    for(int i =0;i<x.size()-1;i++){
        if(x[i]>x[i+1]){
            flag=false;
            break;
        }
    }
    cout<<((flag)?"Sorted":"Not Sorted");
    return 0;
}
