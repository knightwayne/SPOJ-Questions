#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		
		if(n)
		{
			vector < pair<int,int> > v1,v2;
			int v;
			for(int i=0;i<n;i++)
			{
				cin>>v;
				if(v>=0)
				v1.push_back(make_pair(v,i));
				else
				v2.push_back(make_pair(-1*v,i));
			}
			
			int ptr=0;
			long long size=0;
			for(int i=0;i<v1.size();i++)
			{
				while(v1[i].first>0)
				{
					if(v1[i].first>=v2[ptr].first)
					{
						size+=abs(v1[i].second-v2[ptr].second)*(v2[ptr].first);
						v1[i].first-=v2[ptr].first;
						ptr++;
						cout<<"size1 "<<size<<endl;
					}		
					else
					{
						size+=abs(v1[i].second-v2[ptr].second)*(v1[i].first);
						v2[ptr].first-=v1[i].first;
						cout<<"size2 "<<size<<endl;
						break;
					}				
				}	
			}
			cout<<size<<endl;
		}
		else
			break;
	}
	return 0;
}
