#include<iostream>
using namespace std;
class sample
{
	public:
		void get(int x,int y)
		{
			cout<<"the result is "<<x/y;
		}
};
main()
{
	int a,b;
	cout<<"\nEnter a,b";
	cin>>a>>b;
	try
	{
		if(b==0)
		throw 'a';
	}
	catch(char)
	{
		cout<<"\nInvalid input change value of b";
	}
	sample s;
	s.get(a,b);	
}

