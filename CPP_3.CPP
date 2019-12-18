/*
 Write a program to calculate area and circumference of circle using inline
function
*/
#include<conio.h>
#include<iostream.h>
#define pi 3.143
inline double circu(float r)
{
	return (2*pi*r);
}
inline double area(float r)
{
	return (pi*r*r);
}
void main()
{
	float r;
	clrscr();
	cout<<"Enter redius"<<endl;
	cin>>r;
	cout<<"Curcumference is: "<<circu(r)<<endl;
	cout<<"Area is: "<<area(r);
	getch();
}
