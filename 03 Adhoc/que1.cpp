#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n,x;
		cin>>n;
		int arr1[n];
		vector < pair<int,int> > v;
		
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(make_pair(arr1[i],x));
		}
		
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		vector<int> arr;
		vector <int> :: iterator it;
		arr.assign(n,-1);
		arr[0]=v[0].first;
		int cnt=0;
		for(int i=1;i<n;i++)
		{
			arr.insert(arr.begin()+v[i].second,v[i].first);
		}
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
