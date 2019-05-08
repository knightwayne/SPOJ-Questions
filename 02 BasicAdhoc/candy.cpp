#include<iostream>
#include<algorithm>
using namespace std;

long long candy(int arr[], int n, long long sum)
{
	if(sum%n!=0)
	return -1;
	else
	{
		long long mov=0,avg=sum/n;
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=avg)
			break;
			mov+=(avg-arr[i]);
		}
		return mov;
	}
}
int main()
{
	int n;
	cin>>n;
	while(n!=-1)
	{
		int arr[n]={};
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		cout<<candy(arr,n,sum)<<endl;
		cin>>n;	
	}	
}
