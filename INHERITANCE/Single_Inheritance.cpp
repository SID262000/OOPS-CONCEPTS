/* Single Inheritance

In single inheritance, a class is allowed to inherit from only one class. i.e. one sub class is inherited by one base class only. */

#include<bits/stdc++.h>
using namespace std;

//this is the BASE class
class Parent {   //creation of a class     
    public :     //acess specifier or modifier (since its public ,so its data members can be acessed by any other classes or functions outside of this class)

    Parent()    //constructor (a constructor has the same name as that of the class & is invoked whenever an object is created)
    {
        cout<<"I'm the Parent."<<endl;
    }
};


//this is the DERIVED class
class Child : public Parent{
    public : 
    Child()
    {
        cout<<"I'm the Child ."<<endl;
    }
};



//main
int main()
{
    Parent obj1; //we'll get only what's in the Parent constructor as output
    cout<<"--------------------------------------------"<<endl;
    Child obj2; //we'll get first the content of Parent constructor & then the content of Child constructor as output

    return 0;
}