/*
1)	Write a program to implement digital clock
*/

#include<conio.h>
#include<iostream.h>
#include<dos.h>
void main()
{
	int hh,mm,ss,i;
	clrscr();
	cout<<"Enter current time as a format hh:mm:ss"<<endl;
	cin>>hh>>mm>>ss;
	for(;hh<24;hh++)
	{
		for(;mm<60;mm++)
		{
			for(;ss<60;ss++)
			{
				clrscr();
				cout<<endl<<endl<<endl<<"			 "<<hh<<":"<<mm<<":"<<ss<<endl;

				delay(1000);
			}
			ss=0;
		}
		mm=0;
	}
	getch();
}
