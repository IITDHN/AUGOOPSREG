#include<iostream.h>
#include<conio.h>
#include<fstream.h>
//#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<iomanip.h>
#include<ctype.h>
void main()
{
clrscr();
ofstream ofile;
ofile.open("one.txt");
if(ofile.fail())
{
cout<<" unable to create a file ";
exit(1);
}
ofile<<"this is amazing \n";
ofile<<"this is file handling \n";
ofile<<"this is filehandling of c++";
//ofile.close();
ifstream ifile;
ifile.open("one.txt");
if(ifile.fail())
{
cout<<"file does not exists ";
exit(1);
}
char ch[1000];
//int count =0;
while(!ifile.eof())
{  // ifile>>ch;
//if((strcmp(ch,"this")==0))
 // ifile.getline(ch,50);
  //if(ch[0]=='t')
  //cout<<ch<<endl;
//count++;
  ch=ifile.get();
 // char uch=toupper(ch);
 // ofile.put(uch);
   if(ch==' '|| ch=='\n' );
   else
   ofile.put(ch);

cout.put(ch);


}
//cout<<"the number of this in the file are "<<count;
ifile.close();
ofile.close();
getch();
}

