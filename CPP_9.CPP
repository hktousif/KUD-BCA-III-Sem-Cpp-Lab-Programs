#include<conio.h>
#include<iostream.h>
class complex
{
	int real,imag;
	public:
	void set_data()
	{
		cout<<"Enter real past \n";
		cin>>real;
		cout<<"Enter imaginery part\n";
		cin>>imag;
	}
	void print_data()
	{
		cout<<"The sum of complex number is:"<<real<<"+i"<<imag;
	}
	friend complex sum(complex,complex);
};
complex sum(complex a,complex b)
{
	complex temp;
	temp.real=a.real+b.real;
	temp.imag=a.imag+b.imag;
	return temp;
}
void main()
{
	complex a,b,c;
	clrscr();
	a.set_data();
	b.set_data();
	c=sum(a,b);
	c.print_data();
	getch();
}
