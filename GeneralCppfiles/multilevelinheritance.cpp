#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"SPEAKING ........"<<endl;
    }
};
class Dog: public Animal{

};
class BullDog: public Dog{

};
int main()
{
    BullDog bd;
    bd.speak();
    cout<<bd.age<<endl;
}