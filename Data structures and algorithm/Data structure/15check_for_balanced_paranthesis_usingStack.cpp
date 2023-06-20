#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

bool isnotpair(char x, char y)
{
    if ((x == '{' && y == '}') || (x == '[' && y == ']') || (x == '(' && y == ')'))
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool checkforbalanceParanthesis(char exp[])
{
    int n = strlen(exp);
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
            if (s.empty() || isnotpair(s.top(), exp[i]))
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char c[10];
    cout<<"Enter the expression: ";
    cin>>c;
    if(checkforbalanceParanthesis(c)){
        cout<<"Expression is valid"<<endl;
    }
    else{
        cout<<"Expression is not valid"<<endl;
    }

    return 0;
}