#include<conio.h>
#include<iostream.h>
class matrix
{
	int a[10][10];
	int i,j;
	public:
	void get_mat()
	{
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				cin>>a[i][j];
			}
		}
		return;
	}
	void print_mat()
	{
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
		return;
	}
	void operator +(matrix x)
	{
		int temp[10][10];
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				temp[i][j]=a[i][j]+x.a[i][j];
			}
		}
		cout<<"\nAddition of matrix is: \n";
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				cout<<temp[i][j]<<"\t";
			}
			cout<<endl;
		}
		return;
	}
};
void main()
{
	matrix x,y;
	clrscr();
	cout<<"Enter elements of first matrix \n";
	x.get_mat();
	cout<<"Enter elements of second matrix \n";
	y.get_mat();
	cout<<"\nElements of first  matrix \n";
	x.print_mat();
	cout<<"\nElements of second matrix \n";
	y.print_mat();
	x+y;
	getch();
}
