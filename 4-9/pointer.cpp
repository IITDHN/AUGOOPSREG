// default constructor
#include<iostream>
using namespace std;

class Employee
{
	string name;
	int salary;
	int age;
	
	
	public :
		
		
		void inputInfo()
		{
			
			cout<<"\n enter the name of the employee";
			cin>>name;
			cout<<"\n enter the salary of the employee";
			cin>>salary;
			cout<<"\n enter the age of the employee";
			cin>>age;
			
		}
	
// camel case convention
void showInfo()
{
	
	cout<<"\n the name of the employee is "
	<<name;
	cout<<"\n the salary of the emplyee is "<<salary;
	cout<<"\n the age of the employee is "<<age ;	
	
}





};


int main()
{
	//Employee chirag;
	Employee *ee;
	ee=new Employee;// dynamic memory allocation using new keyword
	ee->inputInfo();//->link operator
	ee->showInfo();
/*	Employee *ee1;
	ee1=new Employee;
	ee1->inputInfo();
	ee1->showInfo();
	//delete(ee1);
	
	ee1->inputInfo();
	ee1->showInfo();*/
	
	
	
}

