// this is a keyword in c++
// it is a pointer varibale that is used to hold addresss of current calling object
// this is bydefault available in every function
#include<iostream>
using namespace std;
class ThisExample
{
	
	public :
		void addressOfObject()
		{
			cout<<"\n the address of object in function "<<this;
		}
	
};

int main()
{
	ThisExample te;
	cout<<"\n the address of object is "<<&te;
	
	te.addressOfObject();
	ThisExample te1;
	cout<<"\n the address of second object is "<<&te1;
	te1.addressOfObject();
}
