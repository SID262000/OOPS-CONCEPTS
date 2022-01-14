#include<bits/stdc++.h>
using namespace std;

//Friend function allows the usage of private & protected members outside the class but not vice-versa
//if friend function has any private/protected members it will not be accessible by the base class
// Friend function is not available in derived class if base class has friend function
class EquilateralTriangle
{
    private:
    float a;
    float circumference;
    float area;
    public:
    void setA(float length)
    {
        a = length;
        circumference = a*3;
        area = (1.73*a*a)/3;

    }

    //friend function
    friend void print_results(EquilateralTriangle);
};

void print_results(EquilateralTriangle et)
{
    cout<<"Circumference="<<et.circumference<<endl;
    cout<<"Area="<<et.area<<endl;
}
int main()
{
    EquilateralTriangle et;
    et.setA(3);

    print_results(et);
}