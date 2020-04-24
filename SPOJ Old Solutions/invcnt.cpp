#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int merge(int arr[], int lo, int hi)
{
	int n=hi-lo+1;
	int inp[n]={0};
	int mid=lo+(hi-lo)/2;
	int i=lo,j=mid+1,ptr=0;
	long long int ci=0;
	while((i<mid+1)&&(j<=hi))
	{
		if(arr[i]<=arr[j])
		{
			inp[ptr]=arr[i];
			ptr++;
			i++;
		}
		else
		{
			ci=ci+mid-i+1;
			inp[ptr]=arr[j];
			ptr++;
			j++;
		}
	}
	if(i==mid+1)
	{
		while(j<=hi)
		{
			inp[ptr]=arr[j];
			ptr++;
			j++;
		}
	}
	else if(j>hi)
	{
		while(i<mid+1)
		{
			inp[ptr]=arr[i];
			ptr++;
			i++;
		}
	}
	for(int i=0;i<n;i++)
	{
		//cout<<inp[i]<<" ";
		arr[i+lo]=inp[i];
	}
	//cout<<endl;
	return ci;
	
}
long long int cnt(int arr[], int lo, int hi)
{
	int n=hi-lo+1;
	int mid=lo+(hi-lo)/2;
	if(n==1||n==0)
	{
		//cout<<n<<"\n";
		return 0;
	}
	else
	{
		long long int x=0,y=0,z=0;
	//	int mid=lo+(hi-lo)/2;
		x=cnt(arr,lo,mid);
		y=cnt(arr,mid+1,hi);
		z=merge(arr,lo,hi);
		return x+y+z;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		int arr[n+3]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int l=cnt(arr,0,n-1);
		cout<<l<<endl;
		//for(int i=0;i<n;i++)  //1 4 3 2 5
		//cout<<arr[i]<<" ";
		t--;
	}
	return 0;
}
