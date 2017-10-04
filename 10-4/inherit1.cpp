// single inheritance

#include<iostream>


//<< operator is called as insertion operator
//>> operator is called extraction operator
#include<string>
using namespace std;
class person 
{
private:
	string name;
	string dob;
	int age;
    
	public:
	void getInfo()
	{
		cout<<"\n enter the name ";
		cin>>name;
		cout<<"ENTER the dob";
		cin>>dob;
		
		cout<<"\n ENTER THE age ";
		cin>>age;
	}
void display()
		{    cout<<"\n the size of int is "<<sizeof(int)<<endl;
		
		      cout<<"\n the size of string is "<<sizeof(name)<<endl;
			cout<<"\n the name is "<<name<<endl;
			cout<<"\n the age is "<<age <<endl;
			cout<<" the dob is "<<dob<<endl;
		}
	
	
};

class Employee :public person
{
	
};


int main()
{
	Employee e;
	person p;
	cout<<"\n the size of object of clss employee is "<<sizeof(e);
	cout<<"\n the size of parent class object is "<<sizeof(p)<<endl;
	
	p.getInfo();
	p.display();
	
}
