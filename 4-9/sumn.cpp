#include<iostream>
using namespace std;
class sumOfN
{
	int n;
	
	public:
		
		void getValue()
		{
			cout<<"\n ENTER THE VALUE OF N ";
			cin>>n;
		}
	
	int sum(int n);
	
};

int sumOfN::sum(int n)
{
	int temp =0;
	
	for(int i=1;i<=n;i++)
	{
		
		temp+=i;
	}
	return (temp);
	
	
}




int main()
{    int n;
	sumOfN son;
	//son.getValue();
	cout<<"\n ENTER THE VALUE OF N ";
	cin>>n;
int total_sum=son.sum(n);

cout<<"1+.....+ "<<"  "<<n<<"is"<<total_sum;

}
