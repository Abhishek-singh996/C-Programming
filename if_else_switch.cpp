#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: "<<endl;
    cin>>age;
    // if-else statement
    if ((age<18 && age>0)){
        cout<<"you are not allowed"<<endl;
    }
    else if (age<1)
    {
        cout<<"you are not born yet."<<endl;
    }
    else
    {
        cout<<"you are allowed"<<endl;
    }
    // switch statement
    switch (age)
    {
    case 18:
        cout<<"your age is 18"<<endl;
        break;
    
    default:
        cout<<"your default age will be considered"<< endl;
        break;
    }
    cout<<"done with switch case"<<endl;
    return 0; 
}