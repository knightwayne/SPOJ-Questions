#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int busy(vector < pair<int,int> > v, int n)
{
	int cnt=1;
	//int si=v[0].second;
	int ei=v[0].first;
	for(int i=1;i<n;i++)
	{
		if(v[i].second>=ei)
		{
			//cout<<"hallelujah "<<v[i].second<<" "<<v[i].first<<endl;
			cnt++;
			ei=v[i].first;
		}
		else
		continue;
	}
	return cnt;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		vector < pair<int,int> > v;
		for(int i=0;i<n;i++)
		{
			int x=0,y=0;
			cin>>x>>y;
			v.push_back(make_pair(y,x));
		}
		sort(v.begin(),v.end());
		/*for(int i=0;i<n;i++)
		{
			cout<<v[i].second<<" "<<v[i].first<<endl;
		}*/
		cout<<busy(v,n)<<endl;
		
		tc--;
	}
	return 0;
}
