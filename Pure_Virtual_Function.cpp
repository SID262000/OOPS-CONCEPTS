#include<bits/stdc++.h>
using namespace std;

//Abstract Class
class Animal
{
    public:
    //pure virtual function forces all the derived classes to have their respective copies of the walk() method
    virtual void walk() = 0 ;
};

class Dog: public Animal
{
    public:
    void walk()
    {
        cout<<"Dog can walk.."<<endl;
    }
};

int main()
{
    Dog dt1;
    Animal *obj1=&dt1;
    obj1->walk();
    return 0;
}