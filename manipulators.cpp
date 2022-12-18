#include<iomanip>
#include<iostream>
using namespace std;

int main(){
    int a =42, b=433, c=4444;
    cout<<"the value of a without setw is: "<<setw(4)<<a<<endl;
    cout<<"the value of b without setw is: "<<setw(4)<<b<<endl;
    cout<<"the value of c without setw is: "<<setw(4)<<c<<endl;

    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;
    cout<<"the value of c is: "<<c<<endl;
    return 0;
}