#include<iostream>
using namespace std;

int main(){
    // int a[2][2]={
    //     {1,2},
    //     {3,4}};
    // for (int i=0; i<(2);i++){
    //     for (int j=0; j<(2);j++){
    //         cout<<a[i][j]<<endl;

    // }
    // }
    int x[3][4];  
    for(int k = 0; k < 3; k++){
        for(int l = 0; l < 4; l++){
            cout<<"enter the elements: ";
            cin >> x[k][l];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }
    
    return 0;
}