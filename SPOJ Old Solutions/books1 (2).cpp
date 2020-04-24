#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int n,c;

ll chk(int arr[], ll d)
{
	int cnt=c;
	int i=0;
	int idx=1;
	ll sum=0;
	ll max=0;
	bool exhaust=false;
	while(1)
	{
		sum=arr[i];
		while(sum<d)
		{
			sum+=arr[idx];
			idx++;
			if(sum>max)
			max=sum;
			if((idx-1)>=(n-1))
			{
				exhaust=true;
			}
		}
		if(exhaust)
		{
			cnt=7;
			cout<<"exhaust\n";
			break;
		}
		i=idx;
		idx=idx+1;
		cnt--;
		cout<<"cnt!=0 max "<<max<<" sum "<<sum<<" cnt "<<cnt<<endl;
		
		if(cnt==0)
		{
			sum=0;
			for(int j=i;j<n;j++)
			{
				sum+=arr[j];
			}
			if(sum>max)
			max=sum;
			cout<<"cnt==0 max "<<max<<" sum "<<sum<<" cnt "<<cnt<<endl;
			break;
		}
	}
	cout<<"max pages "<<max<<" for mid "<<d<<endl;
	if(cnt==0)
	return max;
	else
	return 0;
}
ll binary(int arr[], ll min, ll max)
{
	ll mid;
	ll ans=0;
	ll minm_max=max;
	while(min<max)
	{
		mid=min+(max-min)/2;
		ll x=chk(arr,mid);
		cout<<min<<" "<<max<<endl;
		if(x)
		{
			if(x<minm_max)
			{
				minm_max=x;
				ans=mid;
			}
			cout<<mid<<" good\n";
			min=mid+1;
		}
		else
		{
			cout<<mid<<" bad\n";
			max=mid;
		}
	}
	ll sum=0;
	int cnt=c;
	int i=0;
	for(int i=0;i<n;i++)
	{
		if(cnt!=0)
		{
			if(sum<ans)
			{
				cout<<arr[i]<<" ";
				sum=sum+arr[i];
			}
			else
			{
				cout<<"/ "<<arr[i]<<" ";
				sum=arr[i];
				cnt--;
			}
		}
		else if(cnt==0)
		{
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl;
	return ans;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		cin>>n>>c;
		c=c-1;
		int arr[n]={};
		ll min=10000000000,max=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			max+=arr[i];
			if(arr[i]<min)
			min=arr[i];
		}
		
		if(n==c+1)
		{
			for(int i=0;i<n;i++)
			{
				if(i!=n-1)
				cout<<arr[i]<<" / ";
				else
				cout<<arr[i]<<endl;
			}
		}
		else
		{
			//reverse(arr,arr+n);
			ll ans=binary(arr,min,max);
			cout<<"answer is "<<ans<<endl;		
		}
		
		tc--;
	}
	return 0;
}
