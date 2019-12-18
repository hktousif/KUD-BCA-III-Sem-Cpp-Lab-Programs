#include<iostream.h>
#include<conio.h>
class Max
{
	int x,y;
	public:
	void getdata()
	{
		cin>>x>>y;
	}
	friend void find(Max t);
};
void find(Max t)
{
		cout<<"Maximum of 2no is: "<<(t.x>t.y?t.x:t.y);
}
void main()
{
	Max a;
	clrscr();
	cout<<"Enter first and Second Number\n";
	a.getdata();
	find(a);
	getch();
}
