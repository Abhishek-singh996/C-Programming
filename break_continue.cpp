#include<iostream>
using namespace std;

int main(){
    // break statement
    for (int i=0; i<10; i++){
        if (i==2)
        {
            /* code */
            break;
        }
        cout<<i<<endl;
        
    }
    // continue statement
    for (int i=0; i<10; i++){
        if (i==2)
        {
            /* code */
            continue;
        }
        cout<<i<<endl;
        
    }
    return 0;
}