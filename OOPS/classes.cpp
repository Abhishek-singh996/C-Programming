#include<iostream>
using namespace std;

class myClass{
    public:
    int num;
    string myStr;
};

int main(){
    myClass myobj;
    myClass myobj1;

    myobj.num = 15;
    myobj.myStr = "Abhi";
    cout<<myobj.num<<endl;
    cout<<myobj.myStr<<endl;
    myobj1.num = 78;
    myobj1.myStr = "Singh";
    cout<<myobj1.num<<endl;
    cout<<myobj1.myStr<<endl;
    return 0;
}