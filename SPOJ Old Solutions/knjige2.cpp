#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(vector < pair<int,int> > v, int n)
{
	int count=0;
	int max=n;
	for(int i=n-1;i>0;i--)
	{
		if(v[i].second>v[i-1].second)
		{
			//cout<<v[i].first<<" "<<v[i-1].first<<" "<<max<<endl;
			count++;
			v[i-1].second=max;
			max++;
		}
	}
	return count;
}
int main()
{
	/*int tc;
	cin>>tc;
	while(tc)
	{*/
		int n;
		cin>>n;
		vector < pair<int,int> > v;
		for(int i=0;i<n;i++)
		{
			int x=0;
			cin>>x;
			v.push_back(make_pair(x,n-i-1));
		}
		sort(v.begin(),v.end());
		cout<<func(v,n)<<endl;
		//tc--;
	//}
	return 0;
}
