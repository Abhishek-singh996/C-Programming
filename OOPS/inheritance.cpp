#include<iostream>
using namespace std;

class Vehicle{
    public:
        string brand;
        void horn(){
            cout<<"tuut tuut"<<endl;
        }
};
class Car: public Vehicle{
    public:    
        string model = "mustang";


};

int main(){
    Car mycar;
    mycar.horn();
    cout<<mycar.brand + " " + mycar.model<<endl;
    return 0;
}