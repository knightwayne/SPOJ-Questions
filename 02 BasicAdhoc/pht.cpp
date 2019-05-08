#include<iostream>
#include<math.h>
using namespace std;

long long int ans(long long int n)
{
	long long int x=sqrt(n);
	long long int a=0,b=0,c=0;
	a=x*(x+2);
	if(a==n)
	return x;
	else 
	return x-1;
}
int main()
{
	int tc;
	cin>>tc;
	int i=1;
	while(i<=tc)
	{
		long long int n=0,ans1=0;
		cin>>n;
		ans1=ans(n);
		cout<<"Case "<<i<<": "<<ans1<<endl;
		i++;
	}
	return 0;
}
	/*#include<iostream>				
	#include<math.h>
	#define lli long long int
	using namespace std;
	lli fun(lli i)
	{
		lli x2=0;
		if(i%2==0)
			{
				x2=(i)/2;			
				x2=x2*(i+1)*3;
			}
		else
			{
				x2=(i+1)/2;
				x2=x2*(i)*3;
			}
			return x2;
	}
	int main()
	{
		int t;
		cin>>t;
		int tc=1;
		while(tc<=t)
		{
			lli n;
			cin>>n;
			lli lo=1;
			lli hi=1000000000;
			lli ans=0;
			
			while(lo<hi)
			{
				lli mid=(lo+hi)/2;
				lli ans0=fun(mid);
				lli ans1=fun(mid+1);
				if(n<=3)
				{
					ans=1;
					break;
				}
				else if(n==ans0)
				{
					ans=mid;		
					break;
				}
				else if(n>ans0&&n<=ans1)
				{
					ans=mid+1;
					break;
				}
				else if(n<ans0)
				{
					hi=mid;
				}
				else if(n>ans1)
				{
					lo=mid;
				}
			}
			
			cout<<"Case "<<tc<<": "<<ans<<endl;
			
			tc++;
		}
		return 0;
	}*/
			
