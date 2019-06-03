//multilevel inheritance
//single inheritance
#include<iostream>
#include<conio.h>
using namespace std;

class credit
{
	public:
		
			char accno[10];
			int bal;
		void process()
		{
			cout<<"enter the account no.:";
			cin>>accno;
			cout<<"enter the account balance:";
			cin>>bal;
		}
};

class get:public credit
{
	public:
		int cred;
		void getdata()
		{
			cout<<"\nEnter the amount to be credited:\n";
			cin>>cred;
		}
		
};
class display:public get
{
	public:
		void disp()
		{
			cout<<"\naccount No.: "<<accno;
			cout<<"\nbalance: "<<bal+cred<<"\n";
			}
};

int main()
{
	display c;
	c.process();
	c.getdata();
	c.disp();
	getch();
	return 0;
}
