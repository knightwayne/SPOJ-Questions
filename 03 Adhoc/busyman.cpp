#include<bits/stdc++.h>
//#include<vector>
//#include<algorithm>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		vector <pair<int , int > > v;
		int x,y;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			v.push_back(make_pair(y,x));
		}
		sort(v.begin(), v.end());
		int cnt=1;
		int et=v[0].first;
		for(int i=1;i<n;i++)
		{
			if(v[i].second>=et)
			{
				cnt++;
				et=v[i].first;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
