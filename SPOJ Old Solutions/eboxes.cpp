#include<iostream>
using namespace std;

int  main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n,k,t,f;
		cin>>n>>k>>t>>f;
		int d=(f-n)/(k-1);
		long long ans=n+(k*d);
		cout<<ans<<endl;
		tc--;
	}
	return 0;
}
