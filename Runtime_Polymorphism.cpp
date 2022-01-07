#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    //virtual keyowrd helps in the execution of the same mrthod from derived class on invocation using base class pointer
    virtual void walk()
    {
        cout<<"I can walk.."<<endl;
    }
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
    //Dog dt1;
    Animal *obj1=new Dog();
    obj1->walk();
    return 0;
}