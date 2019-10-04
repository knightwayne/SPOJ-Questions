#include<iostream>
using namespace std;
int sum(long long int x)
{
	int sum=0;
	while(x>0)
	{
		sum=sum+(x%10);
		x=x/10;
	}
	return sum;
} 
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n;
		cin>>n;
		bool flag=true;
		int ret=0;
		while(flag)
		{
			ret=sum(n);
			if(n%ret==0)
			{
				cout<<n<<endl;
				flag=false;
				break;
			}
			else
			n++;
		}
		t--;
	}
	return 0	;
}
