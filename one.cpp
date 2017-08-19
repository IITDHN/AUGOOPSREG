// oops - object oriented programming str(PIE)-c++,java,c#
// ob=object based(PE)- javascript- client side scripting language
// polymorphism
// inheritance
// encap
#include<iostream>
using namespace std;


class HUMAN// 1. class defines category
//2. class is a representation of objects in memory 
//3. CAR
// 4. swift,ritz,i10
//5. chirag,sarthak,chanadan
// 6. class is a template that is used to create objects 
{
	//7. class contains two things 
	
	//1. DM 
	// 2. MF

// SRP ----------------single resp principle
private:
string name;// data members 
//string dob;
//int income;
string dob;	
int income;

public ://  access specifier

	void setDetails()// this is called as a MF
	{
		cout<<"\n enter the name ";
		cin>>name;
		
		cout<<"\n enter the dob "<<endl;
		cin>>dob;
	}
	void showDetails()
	{
		
		cout<<"\n the name is "<<name;
		cout<<"\n the dob is "<<dob;
		
	}
	
};




int main()
{
	HUMAN chirag;// chirag is a instance of a class HUMAN
//	chirag.dob=" ";
//	chirag.income=10000;
//	cout<<chirag.dob;
	chirag.setDetails();
	chirag.showDetails();
}




