#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		long long sum=0,avg=0;
		cin>>n;
		int arr[n]={};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		//avg=sum/n;
		
		/*int lhs=0,rhs=0,eq=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<avg)
			{
				//cout<<arr[i]<<" lhs\n";
				lhs++;
			}
			else if(arr[i]>avg)
			{
				//cout<<arr[i]<<" rhs\n";
				rhs++;
			}
			else if(arr[i]==avg)
			eq++;	
		}*/
		//cout<<lhs<<" "<<rhs<<" "<<eq<<endl;
		if(sum%n==0)
		{
			cout<<n<<endl;		
		}
		else
		{
			cout<<n-1<<endl;	
		}
		
		tc--;
	}
	return 0;
}
