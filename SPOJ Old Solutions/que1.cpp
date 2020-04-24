#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> func(vector < pair<int,int> > v, int n)
{
	sort(v.begin(),v.end());
	vector <int> ans;
	vector <int> :: iterator it;

	for(int i=0;i<n;i++)
	{
		int x=v[n-i-1].second;
		it=ans.begin()+x;
		int val=v[n-i-1].first;
		ans.insert(it,val);
		
	}
	return ans;
	
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		int arr[n]={};
		vector < pair<int,int> > v;
		vector <int> ans;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			v.push_back(make_pair(arr[i],i));
		}
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v[i].second=x;
		}
		ans=func(v,n);
		for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
		cout<<endl;
		v.clear();
		ans.clear();
		tc--;
	}
	return 0;
}
