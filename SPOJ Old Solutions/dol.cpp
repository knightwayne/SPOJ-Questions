#include<iostream>
#include<math.h>
using namespace std;

long long dol(long long n)
{
	if(n%2==1)
	{
		return n;
	}
	else
	{
		return dol(n/2);
		/*bool mult=false;
		long long i=0,root=sqrt(n);
		for(i=2;i<=root;i+=2)
		{
			if(n%i==0)
			{
				long long ans=n/i;
				if(ans%2==1)
				{
					mult=true;
					cout<<i<<" "<<ans<<endl;
					return ans;
				}
			}
		}
		if(!mult)
		return 1;*/
	}
	
}
int main()
{
	int t;
	cin>>t;
	int x=0;
	while(x!=t)
	{
		long long n;
		cin>>n;
		cout<<"Case "<<x+1<<": "<<dol(n)<<endl;
		x++;
	}
	return 0;
}
