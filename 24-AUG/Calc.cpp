#include<iostream>
using namespace std;

class Calc
{
	int x;
	int y;
	
	public :
		
		int sum();// making the function as outlline
		int subtract();
	    void inputValues();
	
	
};

      
	void Calc::inputValues() 
	{cout<<"\n Enter the first value ";
	cin>>x;
	cout<<"\n Enter the second number ";
	cin>>y;
	} 
	  
	  int Calc::sum()
      {
      	
      	return (x+y);
      	
      	
      	
	  }
	  
	  int Calc::subtract()
	  {
	  	return (x-y);
	   }
	   
	   
	   
	   int main()
	   {
	   	  
	   	Calc cc;
	   	cc.inputValues();
	   	cout<<"\n the sum of two values is "<<cc.sum();
		cout<<"\n the minus of two values is "<< cc.subtract();  	
	   	
	   }
