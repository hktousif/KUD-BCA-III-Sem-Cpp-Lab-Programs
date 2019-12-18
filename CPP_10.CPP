#include<conio.h>
#include<iostream.h>
#define SIZE 5
class stack
{
	int top;
	public:
	int s[SIZE];
	stack()
	{
	     top=-1;
	}
	void push();
	void pop();
	void display();
};
void stack::push()
{
	if(top==5)
		cout<<"Stack is full\n";
	else
	{
		int temp;
		cout<<"Enter no to push\n";
		cin>>temp;
		s[++top]=temp;
		cout<<s[top]<<" is pushed to stack\n";
	}
	return;
}
void stack::pop()
{
	if(top==-1)
		cout<<"Stack is Empty canot purform pop operation\n";
	else
		cout<<s[top--]<<" is poped from stack\n";
	return;
}
void stack::display()
{
	if(top==-1)
		cout<<"Stack is Empty canot purform pop operation\n";
	else
	{
		cout<<"stack elements are\n";
		for(int i=0;i<=top;i++)
			cout<<s[i]<<"\n";
	}
	return;
}
void main()
{
	int loop=1,ch;
	stack a;
	clrscr();
	cout<<"			Stck Opereration\n";
	while(loop==1)
	{
		cout<<"1:push\n2:pop\n3:display\n4:Exit\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a.push();
				break;
			case 2:
				a.pop();
				break;
			case 3:
				a.display();
				break;
			case 4:
				loop=2;
				break;
			default:
				cout<<"Please enter valide choice\n";
				break;
		}
	}
}