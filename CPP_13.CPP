#include<iostream.h>
#include<conio.h>
template<class T,class N>
void sort(T a[],N n)
{
	T t;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout<<"After sorting \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

}
void main()
{
	int x[5]={1,5,2,7,6};
	float y[5]={1.5,5.3,9.5,2.4,5.1};
	clrscr();
	sort(x,5);
	sort(y,5);
	getch();
}

