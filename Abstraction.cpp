#include<bits/stdc++.h>
using namespace std;

//Abstract class
//instance can't be created
//pointer to the class is allowed
class SmartPhone
{
    public:
    virtual void TakeSelfie() = 0;
};

class Android:public SmartPhone
{
    public:
    void TakeSelfie()
    {
        cout<<"Android took a selfie"<<endl;
    }
};

class Iphone:public SmartPhone
{
    public:
    void TakeSelfie()
    {
        cout<<"Iphone took a selfie"<<endl;
    }
};
int main()
{
    SmartPhone *s1=new Android(); //base class pointer points to derived class
    SmartPhone *s2=new Iphone(); //base class pointer points to derived class
    s1->TakeSelfie();
    s2->TakeSelfie();
    system("exit");
}