#include<iostream>
using namespace std;
int sybil;// global variable

int main()
{
	void subfunction();// prototype of the function 
	
	// what is prototype of the function 
	//1. it includes return type of the function
	//2. it includes name sof the function
	//3. it includes arguments of the function
	
	sybil=20;// global varibale
	cout<<"\n the value of sybil is "<<sybil;
	
	subfunction();
	
	
}

// :: SRO ->scope resolution operator

void subfunction()
{
int sybil=21;// local variable

cout<<"\n the value of sybil is "<<sybil;
cout<<"\n the value of sybil is "<<::sybil++;
cout<<"\n the value of sybil is "<<::sybil;
	
}
