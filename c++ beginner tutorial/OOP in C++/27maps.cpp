#include <iostream>
#include <string>
#include <map>
using namespace std;

void display(map<string, int> &mp)
{
    map<string, int>::iterator iter = mp.begin();
    for (iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    for(auto pr: mp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    map<string, int> marksmap;
    marksmap["vivek"] = 349;
    marksmap["ashish"] = 940;
    marksmap["john"] = 389;
    marksmap["chirag"] = 749;
    marksmap["ethan"] = 319;
    marksmap["vivek"] = 0;
    cout << "The size of map is: " << marksmap.size() << endl;
    display(marksmap);
   // marksmap.insert({{"joe", 848}, {"steve", 808}});
   // cout << "The size of map is: " << marksmap.size() << endl;
   // display(marksmap);
    //marksmap.clear();
    //cout << "The size of map is: " << marksmap.size() << endl;
    // map<string, int>::iterator iter;
    // iter = marksmap.find("john");
    //cout<<(*iter).second<<endl;
    // map<char, int> mp = {{'J', 51}, {'C', 23}};
    // string s = "Jawon";
    // cout<<mp[s[0]];
    cout<<"last"<<endl;
    auto it = marksmap.end();
    it--;
    it--;
    cout<<(*it).first;


    return 0;
}