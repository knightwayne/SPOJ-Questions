#include<bits/stdc++.h>
using namespace std;

long long int farida(int arr[], int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return arr[0];
	else if(n==2)
	return max(arr[0],arr[1]);
	else
	{
		long long int ans[n+1];
		ans[0]=0;ans[1]=arr[0];ans[2]=max(arr[0],arr[1]);
		for(int i=3;i<=n;i++)
		{
			ans[i]=max(ans[i-2]+arr[i-1],ans[i-1]);
		}
		return ans[n];
	}
}
int main()
{
	int tc;
	cin>>tc;
	int t=0;
	while(t++<tc)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		cout<< "Case "<<t<<": "<<farida(arr,n)<<endl;
	}
	return 0;
}


