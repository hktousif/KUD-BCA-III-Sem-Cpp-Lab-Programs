/*
6) Write a program to perform bank transaction
*/
#include<iostream.h>
#include<conio.h>
class bank
{
	char name[20];
	float bal;
	public:
	bank()
	{
		bal=0;
		cout<<"Enter Account holder name \n";
		cin>>name;
	}
	void deposit();
	void withdraw();
	void check_bal();
};
void bank::deposit()
{
	float temp;
	clrscr();
	cout<<"Enter amount to deposite \n";
	cin>>temp;
	bal+=temp;
	cout<<"Rs."<<temp<<" deposited to your account \n"<<"Your current balance is Rs."<<bal<<endl;
	return;
}
void bank::withdraw()
{
	float temp;
	clrscr();
	cout<<"Enter amount to whithdraw \n";
	cin>>temp;
	bal-=temp;
	cout<<"Rs."<<temp<<" whithdrawn from your account \n"<<"Your current balance is Rs."<<bal<<endl;
	return;
}
void bank::check_bal()
{
	clrscr();
	cout<<"Account Holder Name: \n";
	cout<<"Avalable balance is: Rs."<<bal<<endl;

}
void main()
{
	bank b;
	int i,loop=1,ch;
	clrscr();
	while(loop==1)
	{
		cout<<"\n\n\n";
		cout<<"1:Deposit"<<endl;
		cout<<"2:Whithdraw"<<endl;
		cout<<"3:Chech Balance"<<endl;
		cout<<"4:Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				b.deposit();
				break;
			case 2:
				b.withdraw();
				break;
			case 3:
				b.check_bal();
				break;
			case 4:
				loop=2;
				break;
			default:
				cout<<"Please enter your choice properly \n";
				break;
		}
	}
	getch();
}
