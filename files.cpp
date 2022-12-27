#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string myTxt;
    ifstream myFile("mytxt.txt"); //used for reading a file
    while (getline (myFile, myTxt))
    
    {
        /* code */
        cout<<myTxt;
    }
    myFile.close();
    

    // ofstream myFile("mytxt.txt"); //used for writning into file
    // myFile << "Hello Abhishek!"<<endl<<"you are welcome";
    // myFile.close();
}


