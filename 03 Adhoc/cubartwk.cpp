#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int w,d;
		cin>>w>>d;
		if((w==0)&&(d==0))
		break;
		else
		{
			map <int,int> m1,m2;
			
			int x;
			for(int i=0;i<w;i++)
			{
				cin>>x;
				m1[x]++;
			}
			for(int i=0;i<d;i++)
			{
				cin>>x;
				m2[x]++;
			}
			
			long long tc=0;
			for(int i=0;i<21;i++)
			tc+=i*max(m1[i],m2[i]);
			cout<<tc<<endl;
		}
	}
	return 0;
}
