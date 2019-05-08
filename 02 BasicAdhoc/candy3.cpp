#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		long long x=0,sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			sum=(sum+(x%n))%n;
		}
		if(!sum)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
		tc--;
	}
	return 0;
}
