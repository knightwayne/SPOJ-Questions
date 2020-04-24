#include<iostream>
#include<map>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		map <char,int> m;
		string str;
		cin>>str;
		int count=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>=97)
			{
				m[(char)(str[i]-32)]++;
			}
			else
			{
				if(m[str[i]]==0)
				{
					count++;
				}
				else
				m[(char)(str[i])]--;		
					
			}
			
		}
		cout<<count<<endl;
		tc--;
	}
	return 0;
}
