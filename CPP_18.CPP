/*
18) Write a program to create a student report using inheritance technique.
*/
#include<iostream.h>
#include<conio.h>
class basic_info
{
	char name[20];
	int rno;
	char USN_no[20];
	public:
	void getdata()
	{
		cout<<"Enter name: \n";
		cin>>name;
		cout<<"Enter Roll No: \n";
		cin>>rno;
		cout<<"Enter Univercity Seat No: \n";
		cin>>USN_no;
	}
	void print_data()
	{
		cout<<"Name: "<<name<<"	       Roll No: "<<rno<<"	USN No: "<<USN_no<<endl;
	}
};
class result_info:public basic_info
{
	int m1,m2,m3,total;
	float per;
	public:
	void get_marks()
	{
		cout<<"Enter m1, m2 and m3 marks acordingly \n";
		cin>>m1>>m2>>m3;
		total=m1+m2+m3;
		per=total/3;
	}
	print_result()
	{
		cout<<"Marks: m1= "<<m1<<"	m2= "<<m2<<"	    m3: "<<m3<<endl;
		cout<<"Total= "<<total<<endl<<"Percentage: "<<per<<"%";
	}
};
void main()
{
	result_info stu;
	clrscr();
	cout<<"Enter Student details: \n";
	stu.getdata();
	stu.get_marks();
	cout<<"Entered student details are\n";
	stu.print_data();
	stu.print_result();
	getch();
}
