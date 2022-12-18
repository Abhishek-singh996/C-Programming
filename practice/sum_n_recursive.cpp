#include<iostream>
using namespace std;

// using recursive
int sum(int n){
    if (n>0){
        return n+sum(n-1);

    }
    else{
        return 0;
    }
}
int main(){
    int number;
    cout<<"Enter positive number: ";
    cin>>number;
    int c = sum(number);
    cout<<"sum of n number is: "<<c<<endl;
}

// using procedual programming
// int main() {
//     int n, sum = 0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for (int i = 1; i <= n; ++i) {
//         sum += i;
//     }

//     cout << "Sum = " << sum;
//     return 0;
// }