#include<iostream>
using namespace std;

void swap_number(int &a,int &b){
    int c = a;
    a = b;
    b = c;

}

int main(){
    int first_no = 20;
    int second_no = 30;
    cout<<"the before swap is: "<<first_no<<endl<<second_no<<endl;
    swap_number(first_no, second_no);
    cout<<"the after swap is: "<<first_no<<endl<<second_no<<endl;

    return 0;

}