#include <iostream>
using namespace std;

class myClass{
    public:
    myClass(){
        cout<<"Hello Abhishek"<<endl;
    }

};

class Car{
    public:
    string Brand;
    string Model;
    int year;
    Car(string x,string y, int z){
        Brand = x;
        Model = y;
        year = z;
    }

};

class Car_1{
    public:
    string Brand;
    string Model;
    int year;
    Car_1(string x,string y, int z);

};
Car_1::Car_1(string x,string y, int z){
    Brand = x;
    Model = y;
    year = z;
}


int main(){
    myClass myobj;
    Car myCar_1("Audi","1xdd",2021);
    Car myCar_2("BMW","2xdd",2022);
    Car_1 myCar_3("Hyundai","3xdd",1998);

    cout<<myCar_1.Brand<<" "<<myCar_1.Model<<" "<<myCar_1.year<<endl;
    cout<<myCar_2.Brand<<" "<<myCar_2.Model<<" "<<myCar_2.year<<endl;
    cout<<myCar_3.Brand<<" "<<myCar_3.Model<<" "<<myCar_3.year<<endl;
    return 0;
}