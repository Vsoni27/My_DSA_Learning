#include <iostream>
using namespace std;

string getday_of_week(int daynum){
    string dayname;

    switch (daynum){
    case 0:
        dayname = "sunday";
        break;
    case 1:
        dayname = "monday";
        break;
    case 2:
        dayname = "tuesday";
        break;
    case 3:
        dayname = "wednesday";
        break;
    case 4:
        dayname = "thursday";
        break;
    case 5:
        dayname = "friday";
        break;
    case 6:
        dayname = "saturday";
        break;
    default:
        dayname = "Inavlid day number";
        break;
    }

    return dayname;
}

int main(){
    cout<<getday_of_week(10);

    return 0;
}