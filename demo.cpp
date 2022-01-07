//declare a class animal
#include<bits/stdc++.h>
using namespace std;
class Animal
{
    public:
    int num;
    char name[10];
    int cost;
    //member function
    void walk()
    {
        cout<<"I can walk"<<endl;
    }
    // //Default Constructor
    Animal ()
    {
        num=5;
    }

    //Paremetrized Constructor
    Animal(int c,int n)
    {
        cost=c;
        num=n;
    }

    // int add(int a,int b)
    // {
    //     return a+b; 
    // }

    int add(int,int); //member function declaration

    //function overloading
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};

//member function definition
Animal::add(int a,int b)
    {
        return a+b; 
    }
//Inheritance
class sidd:public Animal
{
    public:
    void walk()
    {
        cout<<"I am going to sidd"<<endl;
        Animal::walk();

    }
};
int main()
{
    // Animal obj1(10,200); //values passed for parmeterized constructor,
    // //value of num gets overwritten
    // //obj1.num=10;
    // cout<<obj1.num<<endl;
    // cout<<obj1.cost<<endl;
    // cout<<obj1.walk()<<endl;
    // cout<<obj1.add(obj1.num,obj1.cost)<<endl;
    // cout<<obj1.add(10,20,30)<<endl;
    //cout<<type(sidd).name()<<endl;
    sidd obj2;
    obj2.walk();
    return 0;

}