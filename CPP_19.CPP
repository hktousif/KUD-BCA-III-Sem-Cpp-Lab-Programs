/*
19) Write a program to add two time variable
*/
#include<iostream.h>
#include<conio.h>
class time
{
	int hh,mm,ss;
	public:
	void getTime();
	void printTime();
	time addTime(time temp);
};
void time::getTime()
{
	cout<<"Enter Time in the format of hh:mm:ss \n";
	cin>>hh>>mm>>ss;
	hh=(hh>60)?60:hh;
	mm=(mm>60)?60:mm;
	ss=(ss>60)?60:ss;
}
void time::printTime()
{
	cout<<hh<<":"<<mm<<":"<<ss<<endl;
}
time time::addTime(time x,time y)
{
	time temp;
	temp.ss=ss+x.ss+y.ss;
	temp.mm=mm+x.mm+y.mm;
	temp.hh=hh+x.hh+y.hh;
	temp.mm+=temp.ss/60;
	temp.ss%=60;
	temp.hh+=temp.mm/60;
	temp.mm%=60;
	return temp;
}
void main()
{
	time d1,d2,d3,d4;
	clrscr();
	cout<<"Time 1: \n";
	d1.getTime();
	cout<<"Time 2:\n";
	d2.getTime();
	cout<<"Time 3:\n";
	d3.getTime();
	d4=d1.addTime(d2,d3);
	cout<<"Sum of two Time veriable is: \n";
	d4.printTime();
	getch();
}
