#include <iostream>
using namespace std;

int compare(int n1, int n2, int n3){
    int result;
    if(n1>=n2 && n1>=n3){
        result = n1;
    }
    else if(n2>=n1 && n2>=n3){
        result = n2;
    }
    else{
        result = n3;
    }
    return result;
}

int main()
{
    bool isMale = false;
    bool isTall = false;
    if(isMale && isTall){ // && for and operator while || for or operator
        cout<<"you are a tall male"<<endl;
    }

    else if(isMale && !isTall){ // ! for not operator
        cout<<"you are short male"<<endl;
    }

    else if (!isMale && isTall){
        cout<<"you are tall female"<<endl;
    }
    
    else {
        cout<<"you are short female"<<endl;
    }
    //comparing three numbers
    cout<<compare(23, -90, 72)<<endl;

     
    return 0;
}
