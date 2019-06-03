//hierarchial inheritance
#include<iostream>
#include<conio.h>
using namespace std;

class credit
{
	public:
		char cname[10];
		int bal;
		void getdata()
		{
			cout<<"Enter the credit account name and bal\n";
			cin>>cname>>bal;
		}
};
class display1:public credit
{
	public:
		void disp()
		{
			cout<<"\ncredit Name: "<<cname;
			cout<<"\ncredit bal: "<<bal<<"\n\n";
		}
};
class display2:public credit
{
	public:
		void disp()
		{
			cout<<"\ncredit Name: "<<cname;
			cout<<"\ncredit bal: "<<bal;
		}
};

int main()
{
	display1 g;
	display2 f;
	g.getdata();
	f.getdata();
	g.disp();
	f.disp();
}
