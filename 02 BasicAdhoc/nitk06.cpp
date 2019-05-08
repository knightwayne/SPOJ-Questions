#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		for(int i=0;i<n-1;i++)
		{
			arr[i+1]=arr[i+1]-arr[i];
			arr[i]=0;
		}
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			cnt++;
			else
			continue;
		}
		if(cnt==n)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		t--;
	}
	return 0;
}
