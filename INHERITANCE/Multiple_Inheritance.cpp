/*Multiple Inheritance

In Multiple Inheritance a class can inherit from more than one classes. i.e one sub class is inherited from more than one base classes. */

#include<bits/stdc++.h>
using namespace std;

//BASE class 1
class Mother { //creation of a base class
    public :   //access modifier  
    
    Mother()   //constructor (it has the same name as that of the class & is invoked whenever an object of that class type is created)
    {
        cout<<"I'm the Mother."<<endl;
    }
};

//BASE class 2
class Father{ //creation of Another Base class
    public:  //since its public so we can access its data member even from outside this class by any other functions or classes

    Father()
    {
        cout<<"I'm the Father."<<endl;
    } 
};


//derived class
class Child : public Mother , public Father{ //derived class 
//it is derived from Mother & Father classes
    public:
    
    Child()
    {
        cout<<"I'm the child."<<endl;
    }
};



int main()
{
    Mother obj1;   //it will give the content of Mother constructor as output
    cout<<"-------------------------------------------------"<<endl;
    Father obj2;  //it will give the content of father constructor as output
    cout<<"-------------------------------------------------"<<endl;
    Child obj3; //it will give first the output of the 1stBASE class followed by the content of 2ndBASE class and then the content of
              //its own constructor
return 0;
}