#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		int arr[n]={};
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+i+1;
		}
		cout<<sum<<endl;
		tc--;
	}
	return 0;
}
