#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
ofstream ofile;
ofile.open("first.dat",ios::out|ios::binary);
float x=1.5;
float y=10.5;
cout<<"x       temp"<<endl;
while(x<=y)
{
float temp=x*x;
ofile<<x<<'\t'<<temp<<endl;
cout<<x<<'\t'<<temp<<endl;
x=x+1.5;
}
ofile.close();
getch();
}
