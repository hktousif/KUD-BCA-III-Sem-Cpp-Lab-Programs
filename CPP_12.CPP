#include<iostream.h>
#include<conio.h>
#define SIZE 5
class Queue
{
	int rear,front;
	public:
	int Q[SIZE];
	Queue()
	{
		rear=0;
		front=0;
	}
	void Qinsert();
	void Qdelete();
	void Qdisplay();
};
void Queue::Qinsert()
{
	if(rear==SIZE)
		cout<<"Queue is full\n";
	else
	{
		int temp;
		cout<<"Enter no to Insert\n";
		cin>>temp;
		Q[rear]=temp;
		cout<<Q[rear]<<" is inserted to Queue\n";
		rear++;
	}
	return;
}
void Queue::Qdelete()
{
	if(front==rear)
		cout<<"Queue is Empty canot purform delete operation\n";
	else
		cout<<Q[front]<<" is deleted from Queue\n";
	for(int i=0;i<=rear-1;i++)
	{
		Q[i]=Q[i+1];
	}
	rear--;
	return;
}
void Queue::Qdisplay()
{
	if(front==rear)
		cout<<"Queue is Empty canot purform display operation\n";
	else
	{
		cout<<"Queue elements are\n";
		for(int i=0;i<rear;i++)
			cout<<Q[i]<<"\n";
	}
	return;
}
void main()
{
	int loop=1,ch;
	Queue a;
	clrscr();
	cout<<"			Queue Opereration\n";
	while(loop==1)
	{
		cout<<"1:Qinsert\n2:Qdelete\n3:Qdisplay\n4:Exit\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a.Qinsert();
				break;
			case 2:
				a.Qdelete();
				break;
			case 3:
				a.Qdisplay();
				break;
			case 4:
				loop=2;
				break;
			default:
				cout<<"Please enter valide choice\n";
				break;
		}
	}
	getch();
}