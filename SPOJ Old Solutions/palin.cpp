#include<iostream>
using namespace std;

bool palin(string str)
{
	int n=str.size();
	int i=0;
	for(i=0;i<n;i++)
	{
		if(str[i]==str[n-i-1])
		continue;
		else
		break;
	}
	if(i==n)
	return 1;
	else
	return 0;
}

string func_np(string str1)
{
	string str=str1;
	int n=str.size();
	for(int i=0;i<(n/2);i++)
	{
		int x=str[i]-48; int y=str[n-i-1]-48;
		//cout<<x<<" "<<y<<endl;
		if(x>=y)
		{
			str[n-i-1]=x+48;
		}
		else if(x<y)
		{
			if(y==9)
			{
				str[n-i-1]=0+48;
				for(int j=n-i-2;j>=0;j--)
				{
					if((str[j]-48)==9)
					{
						str[j]=0+48;
					}
					else
					{
						str[j]+=1;
						break;
					}
				}
				i=i-1;
			}
			else
			{
				str[n-i-1]=x+48;
				for(int j=n-i-2;j>=0;j--)
				{
					if((str[j]-48)==9)
					{
						str[j]=0+48;
					}
					else
					{
						str[j]+=1;
						break;
					}
				}
				i=i-1;	
			}		
		}
	}
	return str;
}

string func_p(string str1)
{
	string str=str1;
	int n=str.size();
	if(str[n-1]!=57)
	{
		str[n-1]+=1;
		return func_np(str);
	}
	else
	{
		int count=0;
		for(int i=n-1;i>=0;i--)
		{
			if(str[i]==57)
			{
				count++;
				str[i]=0;
			}
			else
			{
				str[i]+=1;
				break;
			}
		}
		if(count!=n)
		{
			return func_np(str);
		}
		else
		{
			str="1";
			for(int i=0;i<n;i++)
			str+="0";
			return func_np(str);
		}	
	}
	//return str;
}

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		string str;
		cin>>str;
		if(palin(str))
		cout<<func_p(str)<<endl;
		else
		cout<<func_np(str)<<endl;
		tc--;
	}
	return 0;
}
