/* Hierarchical Inheritance

In this type of inheritance, more than one sub class is inherited from a single base class. i.e.
more than one derived class is created from a single base class.*/

#include<bits/stdc++.h>
using namespace std;

//BASE class
class Parent{  //creation of BASE class
    public:  //access modifier (since its public ,so its datamembers can be accessed by any other classes or functions outside this class )

    Parent()
    {
        cout<<"I'm the Parent."<<endl;
    }
};


//derived class from Base class -> derived from Parent
class Daughter: public Parent { 
    public:

    Daughter()
    {
        cout<<"I'm the Daughter."<<endl;
    }
};


//derived class from Base class -> derived from Parent
class Son : public Parent{
    public:

    Son()
    {
        cout<<"I'm the Son."<<endl;
    }
};


//main
int main()
{
    Parent obj1; //it will give the content of its constructor in the output
    cout<<"-------------------------------------"<<endl;
    Daughter obj2; //it will first give the content of Parent constructor & then the content of Daughter constructor
    cout<<"-------------------------------------"<<endl;
    Son obj3; //it will first give the content of Parent constructor & then the content of Son constructor
return 0; 
}

