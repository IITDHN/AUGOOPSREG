#include<iostream>
using namespace std;
const  int MAX =500;
class charArray
{
	char ch;
	char data[MAX];
	
	public :
		
		void getArray();
		void displayArray();
		void noOfchar();
};

void charArray::getArray()
{      
     cout<<" ENTER THE DATA UNTIL U ENTER @ ";
     cin.get(data,MAX,'$');
	 int i=0;
	 while((ch=cin.get())=='$')
	 {
	 	
	 	data[i++]=ch;
	}
	 data[i]='\0';	
	
		cout<<"\n THE ENTERED DATA IS ";
	char ch;
	
	for( int i=0;data[i]!='\0';i++)
	{
     cout<<"The entered data is:\n"<<data[i];
				//cout.put(data[i]);
	}
}
    void charArray::noOfchar()
    {
	
    int i,j;
	for(i=0;data[i]!='\0';i++)
	{
	    	j=data[i];
		
	}
	cout<<"\nthe nof characters is :"<<j;
}


int main()
{
	
	charArray ca;
	ca.getArray();
	//ca.displayArray();
	ca.noOfchar();
}
