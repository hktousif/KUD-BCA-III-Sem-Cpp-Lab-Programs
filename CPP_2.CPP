#include<iostream.h>
#include<conio.h>
class num
{
	int a,b,temp;
	public:
	getnum()
	{
		cout<<"Enter the value of a and b"<<endl;
		cin>>a>>b;
	}
	void shownum()
	{
		cout<<"A is: "<<a<<endl<<"B is: "<<b<<endl;
	}
	friend void swap(num &n1);
};
void swap(num &s)
{
	s.temp=s.a;
	s.a=s.b;
	s.b=s.temp;
}
void main()
{
	clrscr();
	num s1;
	s1.getnum();
	cout<<"Before swaping "<<endl;
	s1.shownum();
	cout<<"after swapping "<<endl;
	swap(s1);
	s1.shownum();
	getch();
}