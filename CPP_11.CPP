/*
11) Write a program to add two distance variable.
*/
#include<iostream.h>
#include<conio.h>
class distance
{
	float feet,inch;
	public:
	void getDist();
	void printDist();
	distance addDist(distance temp);
};
void distance::getDist()
{
	cout<<"Enter Feet: \n";
	cin>>feet;
	cout<<"Enter Inch: \n";
	cin>>inch;
	inch=(inch>=12)?12:inch;
}
void distance::printDist()
{
	cout<<"Feet is: "<<feet<<endl;
	cout<<"Inch is: "<<inch<<endl;
}
distance distance::addDist(distance x)
{
	distance temp;
	temp.feet=feet+x.feet;
	temp.inch=inch+x.inch;
	if(temp.inch>=12)
	{
		temp.feet++;
		temp.inch-=12;
	}
	return temp;
}
void main()
{
	distance d1,d2,d3;
	clrscr();
	cout<<"Enter distnce one \n";
	d1.getDist();
	cout<<"Enter distance two\n";
	d2.getDist();
	d3=d1.addDist(d2);
	cout<<"Sum of two distance is: \n";
	d3.printDist();
	getch();
}
