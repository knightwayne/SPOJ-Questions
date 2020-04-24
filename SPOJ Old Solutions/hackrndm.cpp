#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		int lo=i;
		int hi=n-1;
		
		while(lo<=hi)
		{
			int mid=(lo+hi)/2;
			if(abs(arr[i]-arr[mid])==k)
			{
				count++;
				break;
			}
			else if(arr[i]<=arr[mid])
			{
				if(arr[mid]-arr[i]<k)
				{
					lo=mid+1;
					//hi=n-1;
				}
				else if(arr[mid]-arr[i]>k)
				{
					lo=i+1;
					hi=mid-1;
				}
			}
			else
			{
				break;
			}
		}		
	}
	
	cout<<count<<endl;
	return 0;
}
