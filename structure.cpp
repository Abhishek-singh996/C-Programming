#include<iostream>
using namespace std;



//declaring one structure to use more than two structure
struct car{
    string brand;
    string model;
    int year_1;

};
int main(){
    //******struct 1********
    struct{
        int a;
        string s;
    }myString;
    myString.a = 1;
    myString.s = "a";
    cout<<myString.a<<endl;
    cout<<myString.s<<endl;

    // ********struct 2*******
    struct{
        int model_number;
        string model_name;
        int year;
    }myStruct1,myStruct2;
    myStruct1.model_number = 2344;
    myStruct1.model_name = "BMW";
    myStruct1.year = 2022;
    myStruct2.model_number = 3244;
    myStruct2.model_name = "AUDI";
    myStruct2.year = 2021;
    cout<<myStruct1.model_number<<endl<<myStruct1.model_name<<endl<<myStruct1.year<<endl;
    cout<<myStruct2.model_number<<endl<<myStruct2.model_name<<endl<<myStruct2.year<<endl;

    // ******structure 3---->use one structure to represent two structure*******
    car myCar1;
    car myCar2;
    myCar1.brand= "TATA";
    myCar1.model  = "2xdd";
    myCar1.year_1 = 1997;
    myCar2.brand= "hundai";
    myCar2.model  = "fxcc";
    myCar2.year_1 = 1999;
    cout<<myCar1.brand<<endl<<myCar1.model<<endl<<myCar1.year_1<<endl<<myCar2.brand<<endl<<myCar2.model<<endl<<myCar2.year_1<<endl;

    return 0;


}

