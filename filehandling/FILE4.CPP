#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
char ch1[2000];
ofstream ofile("teller1.txt");
cout<<"\n ENTER THE DATA UNTIL $ IS ENTERED ";
cin.get(ch1,2000,'$');
ofile<<ch1;
cout<<"\n the data is written ";
//ofile.close();
//ofstream ofile("teller.txt" );
ifstream ifile("teller.txt");
char ch;

while(!ifile.eof())
{  ch=ifile.get();
if(ch==' '||ch=='\n'||ch=='\t'); // called as busy waiting and until the condition is true control will be getting stuck in if only
//cout<<ch;
else
ofile.put(ch);
//ch=ifile.get();
}
ifile.close();
ofile.close();

getch();
}
