#include<iostream>
using namespace std;


class Employee
{
	string name;
	int age;
	int salary;
	
	public :
		
		void inputInformation()// camel case convention
	{
   
     
cout<<"\n Enter the name ";
cin>>name;
cout<<"\n Enter the age ";
cin>>age;
cout<<"\n Enter the saalry ";
cin>>salary;
}
	
void displayInformation()
{
	
	cout<<"\n the name is "<<name;
	cout<<"\n the age is "<<age;
	cout<<"\n the salary is "<<salary;
	
	}	
	





};



int main()
{
	
	
	Employee himanshu;
	himanshu.inputInformation();
	himanshu.displayInformation();
	
	
	return 0;
	}
