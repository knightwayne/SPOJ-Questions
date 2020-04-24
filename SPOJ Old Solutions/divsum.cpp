#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		if(n==1)
		cout<<0<<endl;
		else
		{
			long long sum=0;
			for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0)
				{
					sum+=i;
					if((n/i)!=(i))
					{
						sum+=(n/i);
					}
				}
			}
			cout<<sum+1<<endl;
			
		}
		tc--;
	}
	return 0;
}
