/*Write a program that allows the user to enter two values. Display the results of adding
the two values, subtracting them from each other, multiplying them, and dividing them.*/
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	float a,b,add,sub,mul,div;
	cout<<"Enter two numbers a,b";
	cin>>a>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	cout<<"\n"<<a<<"+"<<b<<"="<<add;
	printf("\n%f+%f=%f",a,b,add);
	cout<<"\n"<<a<<"-"<<b<<"="<<sub;
	cout<<"\n"<<a<<"*"<<b<<"="<<mul;
	cout<<"\n"<<a<<"/"<<b<<"="<<div;	
}
