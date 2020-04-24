#include<iostream>
#include<algorithm>
using namespace std;

int lbs(int str[], int size, int arr[])
{
	if(size==1)
	return 1;
	else if(arr[size-1]>0)
	return arr[size-1];
	else
	{
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<i;j++)
			{
				int max=0;
				if(str[j]<str[i])
				{
					max=arr[j]+1;
					if(max>arr[i])
					arr[i]=max;
				}
			}
		}
		return arr[size-1];
	}
}
int longestBitonicSubarray(int str[],int n)
{
	int arr[n]={0},is[n]={0},ds[n]={0};
	int k=lbs(str,n,is);
	reverse(str,str+n);
	int j=lbs(str,n,ds);
	//cout<<k<<" p "<<j<<endl;
	for(int i=0;i<n;i++)
	{
		arr[i]=is[i]+ds[n-i-1];	
		//cout<<arr[i]<<" ";
	}
	return (*max_element(arr,arr+n))+1;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc>0)
	{
	int t;
	cin>>t;
	int str[t];
	for(int i=0;i<t;i++)
	cin>>str[i];
	cout<<longestBitonicSubarray(str,t)<<endl;
	tc--;
	}return 0;
}
