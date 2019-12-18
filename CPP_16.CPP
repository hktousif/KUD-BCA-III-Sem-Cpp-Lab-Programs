/*
16) Write a program to concatenate two strings.
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class String
{
	char s[20];
	public:
	getdata()
	{
		cin>>s;
	}
	void operator +(String temp)
	{
		cout<<"Concatebation: "<<strcat(s,temp.s);
	}
};
void main()
{
	String a,b;
	clrscr();
	cout<<"Enter first String\n";
	a.getdata();
	cout<<"Enter second String\n";
	b.getdata();
	a+b;
	getch();
}
