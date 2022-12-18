#include<iostream>
using namespace std;

int main(){
    string food = "pizza";
    string* ptr = &food;
    cout<<food<<endl; 
    cout<<ptr<<endl; 
    cout<<*ptr<<endl; 
    // modify the pointer value
    *ptr  = "Cake";
    cout<<*ptr<<endl; 
    cout<<food<<endl; 

}