/*Multilevel Inheritance

 In this type of inheritance, a derived class is created from another derived class. */

#include<bits/stdc++.h>
using namespace std;

//BASE class
class Grandparent{  //creation of the BASE class
    public :   //access modifier(since its public ,so we can access the datamembers of this class from any other classes or functions outside this class ) 
    
    Grandparent() //constructor (it has the same name as that of the class & is invoked whenever we create an object of that class type)
    {
        cout<<"I'm the Grandparent."<<endl;
    }

};


//derived class from base class->DERIVED FROM Grandparent
class Parent:public Grandparent{ //derived class from Grandparenrt
    public:

    Parent()
    {
        cout<<"I'm the Parent."<<endl;
    }
};


//derived class from another derived class->derived from Parent class
class Child : public Parent{
    public:

    Child()
    {
        cout<<"I'm the child."<<endl;
    }

};


//main
int main()
{
    Grandparent obj1;//it gives the content of the Granparent constructor
    cout<<"---------------------------------------------------"<<endl;
    Parent obj2; //it first gives the content of the Grandparent constuctor & then the content of Parent constructor
    cout<<"---------------------------------------------------"<<endl;
    Child obj3;//it first gives the content of Parent constructor followed by the content of the Chil constructor
return 0;
}