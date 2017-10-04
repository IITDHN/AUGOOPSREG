#include<iostream>
using namespace std;
class Account
{
	public:
		
	virtual  void withdraw()// outdated      overridden function 
		{
			
		cout<<"\n this is withdraw of parent class ";
			
		}
		
		
};

class SavingAccount: public Account
{
	public:
		
	virtual	void withdraw()// overriding function
		{
			cout<<"\n this is withdraw of child class ";
		}
	
	
	
};


class FDaccount:public SavingAccount
{
	public:
		
		virtual void withdraw()
		{
			//Account::withdraw();
			//SavingAccount::withdraw();
			cout<<"\n this is withdraw of fixed deposit class";
			
		}
	
	};

int main()
{
//	Account  *PTR;
//	PTR=new Account;// new is used to allocate memory dynamically 
//	PTR->withdraw();
/*SavingAccount *savingaccount;
savingaccount=new SavingAccount;
savingaccount->withdraw();
SavingAccount savingaccount1;
savingaccount1.withdraw();*/

// pointer of base classs 

FDaccount *fdaccount;
FDaccount fdaccount1;
fdaccount =&fdaccount1;
/*fdaccount->withdraw();
fdaccount->withdraw();
fdaccount->withdraw();
Account account;*/
//fdaccount=&account;
//fdaccount->withdraw();
SavingAccount *savingaccount;
SavingAccount savingaccount1;
savingaccount=&savingaccount1;
savingaccount->withdraw();
savingaccount=&fdaccount1;

savingaccount->withdraw();
}

