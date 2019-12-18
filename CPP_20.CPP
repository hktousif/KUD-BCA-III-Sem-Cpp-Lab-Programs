#include<conio.h>
#include<iostream.h>
#define pi 3.143
class area
{
	public:
	void circle()
	{
		float r;
		cout<<"Enter the radius \n";
		cin>>r;
		cout<<"Area of circle is: "<<pi*r*r<<endl;
	}
	void rectangle()
	{
		float breadth,length;
		cout<<"Enter the breadth and lenght \n";
		cin>>breadth>>length;
		cout<<"Are of rectangle is: "<<breadth*length<<endl;
	}
	void triangle()
	{
		float base,height;
		cout<<"Enter the base and height \n";
		cin>>base>>height;
		cout<<"Area of Triangle is: "<<0.5*base*height<<endl;

	}
	void square()
	{
		float side;
		cout<<"Enter the side \n";
		cin>>side;
		cout<<"Area of Square is: "<<side*side<<endl;
	}
};
void main()
{
	int loop=1,ch;
	area a;
	clrscr();
	cout<<"			Area of Geometrical Figure\n";
	while(loop==1)
	{
		cout<<"1:Circle\n2:Rectangle\n3:Triangle\n4:Square\n5:Exit\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a.circle();
				break;
			case 2:
				a.rectangle();
				break;
			case 3:
				a.triangle();
				break;
			case 4:
				a.square();
				break;
			case 5:
				loop=2;
				break;
			default:
				cout<<"Please enter valide choice\n";
				break;
		}
	}
	getch();
}