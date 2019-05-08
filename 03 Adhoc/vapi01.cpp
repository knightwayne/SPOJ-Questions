#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		map <int,int> m;
		long long int t=0;
		//negative means already present
		//positive means in need
		int k=0;
		for(long long i=0;i<str.size();i++)
		{
			k=(int)str[i];
			if(i%2==0)
			{
				m[k-32]+=1;
				//cout<<"1 "<<(char)(k-32)<<" "<<m[k-32]<<" ";
			}
			else
			{
				
				if(m[k]>0)
				m[k]-=1;
				else
				t++;
				//cout<<"2 "<<(char)k<<" "<<m[k]<<"\n";	
			}
		}
		cout<<t<<endl;
		m.clear();
	}
	return 0;	
}
