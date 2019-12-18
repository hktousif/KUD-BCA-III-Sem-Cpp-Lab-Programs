/*
5) Write a program to prepare a shopping lists
*/
#include<conio.h>
#include<iostream.h>
class s_list
{
	char i_name[20];
	int qty;
	float i_price;
	float total;
	public:
	void getdata()
	{
		cout<<"Enter name of item "<<endl;
		cin>>i_name;
		cout<<"Enter no of Quantity of: "<<i_name<<endl;
		cin>>qty;
		cout<<"Enter price of: "<<i_name<<endl;
		cin>>i_price;
	}
	float count_total()
	{
		return qty*i_price;
	}
	void print_list()
	{
		cout<<i_name<<"			"<<qty<<"			"<<i_price<<"			"<<count_total()<<endl;
	}
};
void main()
{
	s_list e[20];
	int i,n;
	clrscr();
	cout<<"Enter no of Items "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
		e[i].getdata();
	cout<<"				Shoping List"<<endl<<endl;
	cout<<"Item Name		Quantity		Price			Total"<<endl;
	for(i=1;i<=n;i++)
		e[i].print_list();
	getch();
}
