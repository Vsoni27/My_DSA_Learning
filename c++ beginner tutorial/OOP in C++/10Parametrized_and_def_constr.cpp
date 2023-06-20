#include <iostream>
#include <math.h>
using namespace std;

class point
{
private:
    float x, y;

public:
    point(float a, float b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    friend float calcdistance(point,point);
};

float calcdistance(point p1, point p2)
{
    float x1, x2, y1, y2, dis;
    x1 = p1.x;
    x2 = p2.x;
    y1 = p1.y;
    y2 = p2.y;
    dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return dis;
}

int main()
{
    // To calculate distance between two points in 2d plane
    point p(1, 4);
    point q(4, 7);
    p.displaypoint();
    q.displaypoint();
    cout<<"Distance btw point p and q is: "<<calcdistance(p,q)<<endl;
    return 0;
}