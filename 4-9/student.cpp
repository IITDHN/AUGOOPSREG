#include<iostream>
using namespace std;

class Student
{
	int id;// instance variables or class level variables
	
	int fees;
	int total_marks;
	
	public:
		
		
    Student(int id,int fees,int total_marks)
		{   
		
		
		    this->id=id;// this concept is called as data shadowing
			this->fees=fees;
			this->total_marks=total_marks;
				
		
		
		}
	void display()
	{
		
		cout<<"\n the roll no of student is "<<id;
		cout<<"\n the fee of student is "<<fees;
		cout<<"\n the marks secured by student is "<<total_marks;
		
	}
	
	
};

int main()
{
	
	Student chirag(1001,3000,90);
	chirag.display();
	
	
}
