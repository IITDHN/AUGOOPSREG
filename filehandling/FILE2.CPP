#include<fstream.h>
#include<conio.h>
#include<string.h>
const int MAX=2000;
void main()
{
ofstream ofile;
ofile.open("onee.txt");
char line[MAX];
cout<<"ENTER THE SET OF LINE AND TERMINATE WITH $  ";
cin.get(line,MAX,'$');
cout<<"GIVEN INPUT ";
cout<<line;
cout<<"storing the data on to the file ";
ofile<<line;
ofile.close();
getch();
}
