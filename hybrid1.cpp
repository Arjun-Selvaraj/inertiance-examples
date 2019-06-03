//hybrid inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class credit
{
	public:
		int bal;
		char accno[10];
};
class getdata:public credit
{
	public:
		void getc()
		{
			cout<<"\nEnter  account name: ";
			cin>>accno;
		}
		
};
class get:public getdata
{
	public:
		void getf()
		{
			cout<<"Enter the account balance: ";
			cin>>bal;
			
		}
		
};
class total
{
	public:
		int c;
	void getd()
	{
		cout<<"Enter the amount to be credited: ";
		cin>>c;
		cout<<"\n";
	}
};

class display:public get, public total
{
	public:
	void disp()
	{
		cout<<"account Name: "<<accno<<"\n";
		cout<<"balance:"<<bal+c<<"\n";
	}
};
int main()
{
    display d;
    d.getc();
    d.getd();
    d.getf();
	d.disp();
	getch();
	return 0;
}



