#include<conio.h>
#include<iostream.h>
class ebill
{
	char name[20];
	float unit;
	float bill;
	public:
	void getdata()
	{
		cout<<"Enter name of customer "<<endl;
		cin>>name;
		cout<<"Enter no of Units "<<endl;
		cin>>unit;
	}
	float getbill()
	{
		if(unit<100)
			bill=unit*4;
		else if(unit<=300)
			bill=unit*4.5;
		else if(unit<=500)
			bill=unit*4.75;
		else
			bill=unit*5;
		return bill;
	}
	void printbill()
	{
		cout<<name<<"			"<<unit<<"			"<<getbill()<<endl;
	}
};
void main()
{
	ebill e[20];
	int i,n;
	clrscr();
	cout<<"Enter no of customers "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
		e[i].getdata();
	cout<<"				Electricity bill"<<endl<<endl;
	cout<<"Name			No of Unit		Bill"<<endl;
	for(i=1;i<=n;i++)
		e[i].printbill();
	getch();
}

