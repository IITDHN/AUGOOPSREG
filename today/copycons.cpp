// constructor overloading 
#include<iostream>
using namespace std;

class Employee
{
	string name;
	int age ;
	int id;
	public :
		
		
	/*	Employee()// default constructor
		{
			name=" ";
			age=18;
			id=1001;
		}*/
	Employee(string name,int age,int id)// parameterised constructor
	{this->name=name;
	this->age=age;
	this->id=id;
	}
	
	void showInfo()
	{
		cout<<"\n the name is "<<this->name;
		cout<<"\n the age is "<<this->age;
		cout<<"\n the id is "<<this->id;
	}

Employee(Employee &ee)// this is copy cons and it is copying values of one object in to another 
{
	this->name=ee.name;
    this->age=ee.age;
	this->id=ee.id;
	
}
	
	
};

int  main()
{

	Employee sarthak("sarthak",21,1002);
	sarthak.showInfo();
	Employee chirag(sarthak);// copy constructor called
	chirag.showInfo();
	Employee himanshu=chirag;// calling copy constructor
	himanshu.showInfo();
}
