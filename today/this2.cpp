// this holds the address of current object 
// it is bydefault available in every function  


#include<iostream>
using namespace std;

# define PIN 1232
class Student
{
	string name;
	int age;
	int id;
	
	public :
		
		
		void getDetails(string name,int age,int id)
		{ // local variables 
		this->name=name;
		this->id=id;
	    this->age=age;
	cout<<PIN<<endl;
		}// pop the function from stack
	void showDetails()
	{
		cout<<"\n the name is "<<this->name;
		cout<<"\n the age is "<<this->age;
		cout<<"\n the id is "<<this->id	;
		}
	
	
};



int main()
{
	Student s;
	s.getDetails("chirag",21,1001);
	s.showDetails();
	Student sarthk;
	sarthk.getDetails("sarthak",21,1002);

//cout<<sizeof(int)<<endl;
//cout<<sizeof(float);
//cout<<sizeof(long  int);

}
