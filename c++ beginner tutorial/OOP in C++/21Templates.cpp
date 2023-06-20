#include <iostream>
using namespace std;

// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int n)
//     {
//         size = n;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d = d + (this->arr[i] * v.arr[i]);
//         }
//         return d;
//     }
// };

template <class T>

class vector
{
public:
    T *arr;
    int size;
    vector(int n)
    {
        size = n;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + (this->arr[i] * v.arr[i]);
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 1;
    v1.arr[2] = 1;

    vector<float> v2(3);
    float x;
    for (int i = 0; i < 3; i++)
    {
        cin>>x;
        v2.arr[i] = x;
    }

    float dot = v1.dotProduct(v2);
    cout<<dot<<endl;
    

    return 0;
}