#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

void Reverse(char arr[], int n){
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    
}

int main()
{
    char str[100];
    cout<<"Enter any string: ";
    cin>>str;
    Reverse(str, strlen(str));
    cout<<"Reverse string is: "<<str<<endl;

    return 0;
}