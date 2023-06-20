#include <iostream>
using namespace std;

template <class T1 = int, class T2 = char>

class dis{
    public:
    T1 x;
    T2 y;
    dis(T1 a, T2 b){
        x = a;
        y = b;
    }
    void display(){
        cout<<x<<endl<<y<<endl;
    }
};

int main()
{
    dis<> p(5,'t');
    p.display();

    dis<float, int> q(3.03, 9);
    q.display();

    return 0;
}