#include<iostream.h>
#include<conio.h>
template<class T>
T large(T a,T b)
{
	return(a>b?a:b);
}
void main()
{
	clrscr();
	cout<<"largest no of Integer type:"<<large(9,5)<<endl;
	cout<<"Largest no of float type: "<<large(4.3,4.6);
	getch();
}

