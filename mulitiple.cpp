//multiple inheritance
#include<iostream>
#include<conio.h>
using namespace std;

class credit
{
	public:
		char accno[10];
		int bal;
		void getc()
		{
			cout<<"\nEnter Credit account no.: ";
			cin>>accno;
			cout<<"\n enter the balance:";
			cin>>bal;
		}
};
class deposit
{
	public:
		int dep;
		void getf()
		{
			cout<<"enter the amont to be deposited :";
			cin>>dep;
		}
};
class display:public credit,public deposit
{
	public:
		int deb;
		void disp()
		{
			cout<<"\nAccount no.: "<<accno<<"\nbalance before deposition: "<<bal<<"\n"<<"balance after deposition:"<<bal+dep;
			cout<<"\n enter the amount to be debited:";
			cin>>deb;
			cout<<"\n the balance after withdrawl is "<<(bal+dep)-deb;
		}
};
int main()
{
	display d;
	d.getc();
	d.getf();
	d.disp();
	return 0;
	}
