#include<iostream>
#include<algorithm>
//#include<vector>
using namespace std;
int n,c;
//vector <int> v;
bool chk(int arr[], int c, int d)
{
	c=c-1;
	int i=0;
	int nxt=1;
	while(nxt<n)
	{
		//cout<<"i "<<i<<" nxt "<<nxt<<endl;
		if(arr[i]+d<=arr[nxt])
		{
			c--;
			if(c==0)
			{
		//		cout<<"no cows left\n";
		//		cout<<"nxt "<<nxt<<endl;
				break;
			}
		//	cout<<"in if i "<<i<<" nxt "<<nxt<<endl;
			i=nxt;
			nxt=i+1;
		}
		else
		{
			nxt++;
		}
	}

	if(c==0)
	{
		//cout<<"P\n";
		return true;
	}
	else
	{
		//cout<<"NP\n";
		return false;
	}
	
}
int agg(int arr[], int min, int max, int c)
{
	int mid=min+(max-min)/2;
	//cout<<"mid \t"<<mid<<endl;
	if(min<=max)
	{
		//int mid=(min+max)/2;
		//cout<<"min "<<min<<" max "<<max<<" mid "<<mid<<endl;
		if(chk(arr,c,mid))
		return agg(arr,mid+1,max,c);
		else
		return agg(arr,min,mid-1,c);
	}
	else
	return max;
}
int main()
{

	int t;
	cin>>t;
	//cout<<t;
	while(t)
	{
		//int n,c;
		cin>>n>>c;
		int arr[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		//	v.push_back(arr[i]);
		}
		sort(arr,arr+n);
		int max=arr[n-1]-arr[0];
		int k=agg(arr,0,max,c);
		//v.clear();
		cout<<k<<endl;
		t--;
	}
	return 0;
}
