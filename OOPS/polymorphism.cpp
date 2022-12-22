#include <iostream>
using namespace std;

class Animal{
    public:
        void animalSound(){
            cout<<"Animal make a sound"<<endl;

        }
};
class Dog: public Animal{
    public:
        void animalSound(){
            cout<<"Bow bow bow..."<<endl;

        }
};
class Pig: public Animal{
    public:
        void animalSound(){
            cout<<"suu suu suu...."<<endl;

        }
};
class Crow: public Animal{
    public:
        void animalSound(){
            cout<<"crow crow crow.."<<endl;

        }
};
int main(){
    Animal myAnimal;
    Dog myDog;
    Pig myPig;
    Crow myCrow;
    myAnimal.animalSound();
    myDog.animalSound();
    myPig.animalSound();
    myCrow.animalSound();
    return 0;
}