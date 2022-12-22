#include<iostream>
using namespace std;

// inside class
class MyClass{
    public:
    void myMethod(){
        cout << "Hi Abhishek"<<endl;
    }
};
// outside class
class MyClass_1{
  public:
  void myMethod_1();
};
void MyClass_1::myMethod_1(){
  cout<<"Hi Singh"<<endl;
}

class Car{
  public:
  int speed(int maxSpeed);
};
int Car::speed(int maxSpeed){
  return maxSpeed;
}


int main(){
    MyClass myobj;
    MyClass_1 myobj1;
    myobj.myMethod();
    myobj1.myMethod_1();
    Car myobj2;
    cout<<myobj2.speed(200)<<endl;
    return 0;
}


