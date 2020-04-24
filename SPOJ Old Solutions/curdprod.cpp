#include<iostream>
#define ll long long int
using namespace std;

ll func(ll arr[], int n, ll tar, ll max)
{
	if(n==1)
	return arr[0]*tar;

	ll lo=1;
	ll hi=max*tar;
	//cout<<"hi "<<hi<<endl;
	ll ans=0;
	ll tot=0;
	while(lo<hi)
	{
		tot=0;
		//cout<<lo<<" "<<hi<<endl;
		ll mid=lo+((hi-lo)/2);
		//cout<<"mid "<<mid<<endl;
		for(int i=0;i<n;i++)
		{
			tot+=(mid/arr[i]);
		}
		//cout<<"tot "<<tot<<endl;
		if(tot>=tar)
		{
			ans=mid;
		//	cout<<"ans "<<ans<<endl;
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		ll tar,max=-1;
		cin>>n>>tar;
		ll arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>max)
			max=arr[i];
		}
		ll ans=func(arr,n,tar,max);
		cout<<ans<<endl;
		t--;
	}
	return 0;
}
