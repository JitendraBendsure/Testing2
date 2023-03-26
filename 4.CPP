#include<iostream.h>
#include<conio.h>
#include<string.h>
class Bank
{
	//sample 1343423
	int acno,amt;
	char name[20],type[20];
	public:
		void accreate(int an,char n[20],char t[20],int am)
		{
			acno=an;
			strcpy(name,n);
			strcpy(type,t);
			amt=am;
		}
		void passbook()
		{
			cout<<" Acno :"<<acno<<endl;
			cout<<" Name :"<<name<<endl;
			cout<<" Type :"<<type<<endl;
			cout<<" Amt  :"<<amt<<endl;
		}
		void withdraw(int am)
		{
			amt=amt-am;
			cout<<"You withdraw amt ::"<<am<<endl;
			cout<<"Your remaing bal :"<<amt<<endl;


		}
		void deposit(int am)
		{
			amt=amt+am;
			cout<<"Your deposited amt :"<<am<<endl;
			cout<<" Your remaintg bal :"<<amt<<endl;
		}


};
void main()
{
	clrscr();
	Bank a1[10];
	int an,amt;
	char name[20],type[20];
	cout<<"Enter your name  :"<<endl;
	cin>>name;
	cout<<"Enter actype :";
	cin>>type;
	cout<<"enter depoist amt :";
	cin>>amt;
	a1[0].accreate(101,name,type,amt);
	a1[0].passbook();
	a1[0].deposit(2100);
	a1[0].withdraw(500);
	getch();

}