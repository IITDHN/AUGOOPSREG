#include<iostream>
using namespace std;

class SalaryApp

{
	private:
    string name;
     int age;
	int salary;
	int HRA;// HRA is 20% of salary
	int DA;// DA is 10% of salary
	int TA;// TA is 5% of salary
	int pf;// 2 % of salary
	int NS;
	
	int calculateNS()
	{
		HRA=0.2*salary;
		DA=0.1*salary;
		
		TA=.05*salary;
		pf=.02*salary;
		NS=salary+HRA+DA+TA-pf;
		
		return NS;
	}
public:
	
	
	
	
	void getDetails()
	{
	cout<<"\n Enter the name ";
	cin>>name;
		
		cout<<"\n Enter the age ";
		cin>>age;
		cout<<"\n Enter the salary ";
		cin>>salary;
		
	}
	
void showDetails()
{
	
	cout<<"\n the name is "<<name;
	cout<<"\n the age is "<<age ;
	
	cout<<"\n the basic  salary is "<<salary;
	
	NS=calculateNS();
	cout<<"\n the net salary after calculation is "<<NS;
	
	
	
	
	}	
	
	
};



int main()
{
	
	SalaryApp sa;
	sa.getDetails();
	sa.showDetails();
	
	
	
}
