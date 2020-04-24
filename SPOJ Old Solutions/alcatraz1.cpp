#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		string str;
		cin>>str;
		int ans=0;
		for(int i=0;i<str.size();i++)
		ans+=str[i]-48;
		cout<<ans<<endl;
		tc--;
	}
	return 0;
}
