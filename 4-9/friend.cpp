// friend function
//1. friend function can access the private members of a class by using an object
//3. it is not a  member function of  a class
//4. it is not invoked by using an object of the class because it is not  the member of the class
//5. friend functin must have atleast one parmeter of object type


#include<iostream>
using namespace std;
class Employee
{  private:
	int age;
	int salary;
	string name;
	
	public:
		
		void getDetails()
		{
			cout<<"\n enter the age of the employee";
			cin>>age;
			
			cout<<"\n enter the salary of the employee";
			cin>>salary;
			cout<<"\n enter the name of the employee";
			cin>>name;
		}


friend void showDetails(Employee e);
	
	
};

void showDetails(Employee e1)// definition of friend function
{
	cout<<"\n the age of the employee is "<<e1.age;
	cout<<"\n the salary of the employee is "<<e1.salary;
	
	cout<<"\n the name of the employee is "<<e1.name;
	
}



int main()
{
	
	
	Employee e;
	//cout<<e.age;
	e.getDetails();
	showDetails(e);//calling of friend function
}
