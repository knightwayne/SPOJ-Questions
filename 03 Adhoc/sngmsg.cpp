#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		string str,str2;
		cin>>str>>str2;
		
		string strtemp=str;
		reverse(strtemp.begin(),strtemp.end());
		str+=strtemp;
	
		int v;
		for(int i=0;i<str2.size();i++)
		{
			v=((int)str2[i]-97)-((int)str[i%str.size()]-48)+26;
			v%=26;
			cout<<(char)(v+97);
		}
		cout<<endl;
	}
}
