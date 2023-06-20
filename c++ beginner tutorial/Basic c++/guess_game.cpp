#include <iostream>
using namespace std;

int main()
{
    int correctno = 7l;
    int guess;
    int limitcount = 0;
    int outofguess = false;

    while (guess != correctno && !outofguess)
    {
        if (limitcount < 3)
        {
            cout << "enter your guess: ";
            cin >> guess;
            limitcount++;
        }
        else
        {
            outofguess = true;
        }
    }

    if (!outofguess)
    {
        cout << "you win!!!" << endl;
    }
    else
    {
        cout << "ha ha you lose" << endl;
    }

    return 0;
}