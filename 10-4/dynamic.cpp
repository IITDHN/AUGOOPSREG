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
		
		void withdraw()// overriding function
		{
			cout<<"\n this is withdraw of child class ";
		}
	
	
	
};


class FDaccount:public SavingAccount
{
	public:
		
		void withdraw()
		{
			Account::withdraw();
			SavingAccount::withdraw();
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


Account *account;
Account account1;
SavingAccount savingaccount;
account=&account1;
account->withdraw();
account=&savingaccount;
account->withdraw();
FDaccount fdaccount;
account=&fdaccount;
account->withdraw();
}
	
	
	
	

