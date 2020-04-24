#include<iostream>
using namespace std;
int n,c;

long long chk(int arr[], long long mid, int c)
{
	int i=0;
	int idx=1;
	long long sum=0;
	long long max=0;
	while(idx<n)
	{
		if(arr[idx]-arr[i]>=mid)
		{
			
			i=idx;
			idx=idx+1;
		}
		else
		{
			sum+=
			idx++;
		}
		c--;
	}
	if(c==0)
	return sum;
	else
	return 0;
}
void bin(int arr[], long long min, long long max, int c)
{
	long long mid=min+(max-min)/2;
	long long ans=0;
	long long x=0;
	while(min<max)
	{
		x=chk(arr,mid,c);
		if(x)
		{
			ans=mid;
			min=mid+1;
		}
		else
		{
			max=mid;
		}
	}
	long long total=0;
	for(int i=0;i<n;i++)
	{
		total+=arr[i];
		if(total<x)
		cout<<arr[i]<<" ";
		else
		{
			total=0;
			cout<<" / "<<arr[i]<<" ";
		}
	}
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		cin>>n>>c;
		int arr[n]={};
		long long max=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			max+=arr[i];
		}
		long long min=0;
		bin(arr,min,max,c); 
		
		tc--;
	}
	return 0;
}
