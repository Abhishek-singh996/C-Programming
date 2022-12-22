#include <iostream>
using namespace std;

class myClass{
    private:
    int salary;
    public:
    //setter
    void setSalary(int s){
        salary  = s;

    }
    // getter
    int getSalary(){
        return salary;
    }

};
int main(){
    myClass employee;
    employee.setSalary(40000);
    cout<<employee.getSalary()<<endl;
    return 0;
}