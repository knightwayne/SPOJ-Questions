#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	vector <pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(make_pair(x,n-i));
	}
	sort(v.begin(),v.end());
	//for(int i=n-1;i>=0;i--)
	//cout<<v[i].first<<" "<<v[i].second<<endl;
	int cnt=0;
	int max=n;
	for(int i=n-2;i>=0;i--)
	{
		if(v[i].second<v[i+1].second)
		{
			cnt++; max++;
			v[i].second=max;
		}
	}
	//for(int i=n-1;i>=0;i--)
	//cout<<v[i].first<<" "<<v[i].second<<endl;
	cout<<cnt<<endl;
	return 0;
}
