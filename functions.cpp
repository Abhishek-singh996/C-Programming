#include<iostream>
using namespace std;

void my_main(){
    cout<<"My name is Abhishek"<<endl;
}

// parameters/arguments
void information(string name,int age,string salary){
    cout<<name<<endl<<age<<endl<<salary<<endl;

}

// user defined function with return type
int sum(int a, int b){
    int c=a+b;
    return c;
}

int main(){
    my_main();
    information("Abhishek Singh",28,"50k");
    cout<<sum(2,3)<<endl;
    return 0;
}