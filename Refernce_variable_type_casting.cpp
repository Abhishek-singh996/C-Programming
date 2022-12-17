#include<iostream>

using namespace std;

int c = 32;
int main(){
    //*************Built in datatypes********
    int a, b;
    cout<< "Enter the value of a:"<<endl;
    cin>>a;
    cout<< "Enter the value of b:"<<endl;
    cin>>b;
    cout<< "Sum of a + b is : "<<(a+b)<<endl;
    cout<< "global c is : "<<::c<<endl;

    //*************Literals********
    float d= 34.4f;
    long double e = 34.4L;
    cout<<"size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"size of 34.4fF is : "<<sizeof(34.4F)<<endl;
    cout<<"size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"size of 34.4L is : "<<sizeof(34.4L)<<endl;

    //*************Reference variable********
    // Rohan---->Monty----->rohu---->Dengerous coder
    float x = 38.7;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    //************reference variable************
    int j = 45;
    float k = 45.46;
    cout<<"the value of j is : "<<j<<endl;
    cout<<"the value of j is : "<<int(j)<<endl;
    cout<<"the value of j is : "<<float(j)<<endl;
    cout<<"the value of k is : "<<int(k)<<endl;
    cout<<"the value of k is : "<<float(k)<<endl;

    int c=int(j);
    cout<<"the value of c is : "<<c<<endl;

    return 0;

}