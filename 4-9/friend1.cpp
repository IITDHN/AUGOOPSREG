#include<iostream>
using namespace std;

class friendExample
{   private:
	int firstno;
	int secondno;
	
	public :
		
		
		void enterValues()
		{
			cout<<"\n enter the first no";
			cin>>firstno;
			cout<<"\n enter the second no ";
			cin>>secondno;
			
		}
	
	friend int sum(friendExample fe);
	
};




int sum(friendExample fe)// defining friend function
{
	return (fe.firstno+fe.secondno);
	
	
}

int main()
{
	
	
	friendExample fe1;
	fe1.enterValues();
	
	cout<<"\n the sum is "<<sum(fe1);// calling of friend function
}
