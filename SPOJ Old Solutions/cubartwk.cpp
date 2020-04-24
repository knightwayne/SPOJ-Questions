#include<iostream>
#include<map>
using namespace std;

int func(int w, int d, map <int,int> m1, map <int,int> m2)
{
	int count=0;
	for(int i=0;i<21;i++)
	{
		if(m1[i]>=m2[i])
		count+=i*m1[i];
		else
		count+=i*m2[i];
	}
	return count;
}
int main()
{
	int w,d;
	cin>>w>>d;
	while(w!=0&&d!=0)
	{
		map <int,int> m1,m2;
		int frn[w]={}, sde[d]={};
		for(int i=0;i<w;i++)
		{
			cin>>frn[i];
			m1[frn[i]]++;
		}
		for(int i=0;i<d;i++)
		{
			cin>>sde[i];
			m2[sde[i]]++;
		}
		cout<<func(w,d,m1,m2)<<endl;
		cin>>w>>d;
	}
	return 0;
}
