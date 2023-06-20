#include <iostream>
using namespace std;

int main()
{
    char single_character = 'A';
    cout << single_character << endl;
    string name = "Virat kohli";
    cout << name[0] << endl;
    name[6] = 'p';
    cout << name << endl;
    cout << name.length() << endl;
    cout << name.find('t', 0) << endl;
    string subname = name.substr(6, 5);
    cout << subname << endl;

    return 0;
}