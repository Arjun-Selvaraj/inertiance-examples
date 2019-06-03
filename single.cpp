//single inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class balance
{
  
	public:
		
			char accountno[10];
			int bal;
		void getdata()
		{
			cout<<"\nEnter the account no. and balance:\n";
			cin>>accountno>>bal;
		}
};

class display:public balance
{
	public:
		disp()
		{
			cout<<"\naccount Number: "<<accountno;
			cout<<"\nbalance: "<<bal<<"\n";
		}
};

int main()
{
	display d;
	d.getdata();
	d.disp();
	return 0;
	
}
