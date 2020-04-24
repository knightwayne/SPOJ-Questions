#include<iostream>
#define mod 1000000007
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		long long sum=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			sum+=(n/i)*i;
			sum%=mod;
		}
		cout<<sum<<endl;
		tc--;
	}
	return 0;
}
