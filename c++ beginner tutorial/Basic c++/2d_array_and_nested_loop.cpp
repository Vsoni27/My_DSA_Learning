#include <iostream>
using namespace std;

int main(){
    int two_dim_array[3][3] = { {2,9,6},
                                {8,3,4},
                                {7,5,1} };
    cout<<two_dim_array[2][1]<<endl;

    //printing the 2d array using nested loop
    for(int i = 0; i<3; i++){
        cout<<"[ ";
        for(int j = 0; j<3; j++){
            cout<<two_dim_array[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
                                      

    return 0;
}
