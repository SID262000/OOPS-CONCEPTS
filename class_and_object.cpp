/*
CLASS & OBJECT
class : it is a user defined datatype .It is the blueprint for the object.

-NO SPACE IS ALLOCATED WHEN A CLASS IS CREATED.
-SPACE IS ALLOCATED WHEN AN OBJECT IS CREATED.
-OBJECT IS AN INSTANCE OF A CLASS
*/


#include<bits/stdc++.h>
using namespace std;

//creation of a class
class Student{ 
    public:  //access modifier(since its public,so its datamember can be accessed by any other classes pr functions outside this class)

    //this is the definition of the object
    string name;
    string department;
    int roll;
    char gender;

void details(string name,string department,int roll,char gender) //member function
{
    cout<<name<<endl;
    cout<<department<<endl;
    cout<<roll<<endl;
    cout<<gender<<endl;
}
 
};

//main
int main()
{
    Student obj1; //creation of an object of type Student
    obj1.details("Shweta Bhagat","CSE",20,'F'); //calling function detalis using the instane of class
    cout<<"-------------------"<<endl;
    obj1.details("Siddhant","CSE",21,'M');
return 0;

}