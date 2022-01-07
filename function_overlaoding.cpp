#include<bits/stdc++.h>
using namespace std;

class Base
{
	public:
	int followers;
	string Name;

	int add(int a,int b)
	{
		return a+b;
	}

	int add(int a,int b,int c)
	{
		return a+b+c;
	}

};

int main()
{
	Base obj1;
	cout<<obj1.add(1,2)<<endl;
	cout<<obj1.add(1,2,3)<<endl;
	return 0;
}

