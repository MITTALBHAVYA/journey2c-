#include<iostream>
using namespace std;
//here defining my first class {HERO}
class Hero
{
    //here defining public and private class elements
    private:
   int health;
   public:
   char level;
   
   Hero()
   {
    cout<<"CONSTRUCTOR CALLED"<<endl;
   }
   Hero(int health)
   {
    cout<<"this ->"<<this<<endl;
      this -> health = health;
   }
   //parameterised constructor

    void print()
    {
        cout<<level<<endl;
    }
    //making getter and setter that are child functions and help us to access parent element
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    ~Hero()
    {
        cout<<"BOOM BOOM"<<endl;
    }
};
int main()
{
    Hero ramesh(10);
    cout<<" ADDRESS OF RAMESH "<<&ramesh<<endl;
    ramesh.getHealth();
    //object created statically
    //cout<<"hi "<<endl;
    Hero *h= new Hero();
}