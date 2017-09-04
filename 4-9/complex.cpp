#include<iostream>
using namespace std;

class Complex
{
	int real;// DATA MEMBERS
	int imaginary;
	
	public:
		
		
		void getValues()
		{cout<<"\n ENTER THE REAL VALUE";
		cin>>real;
		cout<<"\n ENTER THE IMAGINARY VALUE ";
		cin>>imaginary;
		}
	
	
void showValues()
{
	cout<<"THE SUM OF REAL VALUES IS "<<this->real<<endl;
	cout<<"THE SUM OF IMAGINARY VALUE IS "<<this->imaginary<<"i"<<endl;
	
	cout<<"FINALLY THE COMPLEX VALUE IS "<<real<<"+"<<imaginary<<"i"<<endl;
}

Complex sumOfObjects(Complex c1,Complex c2)// this function returns object of the class therefore we have to return object and for that we have to write return type as class name
{
	Complex temp;
	
	temp.real=c1.real+c2.real;
	
	temp.imaginary=c1.imaginary+c2.imaginary;
	return temp;
	
}


};


int main()
{
	
	Complex c1,c2,temp;
	c1.getValues();
	c2.getValues();
	temp=temp.sumOfObjects(c1,c2);
	temp.showValues();
	
	
	
	
}
