#include<bits/stdc++.h>
using namespace std;

vector <int> v;
void calc()
{
	v.push_back(1);
	int ptr=0,dig=2;
	while(v.size()<=1000000)
	{
		for(int i=0;i<v[ptr];i++)
		v.push_back(dig);
		
		ptr++;
		dig++;
	}
}
int main()
{
	calc();
	int t=1,tc;
	cin>>tc;
	while(t<=tc)
	{
		int n;
		cin>>n;
		cout<<"Case #"<<t<<": "<<v[n-1]<<endl;
		t++;
	}
	return 0;
}
