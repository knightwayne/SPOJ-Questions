#include<iostream>
using namespace std;
//int mod=1000000007;
bool flag=true;

unsigned long long alphacode(string str, int size, unsigned long long int arr[])
{
	if((size==0)||(size==1))
	{
		if((size==1)&&str[0]=='0')
		return 0;
		else
		{
			//cout<<"size0/1\n";
			return 1;	
		}
		
	}
	else
	{
		arr[0]=1;
		arr[1]=1;
		if(arr[size]>0)
		{
			//cout<<"Memory\n";
			return arr[size];
		}
		else
		{
			int a=str[0]-48;
			int b=str[1]-48;
			int c=str[2]-48;
			int ans=0,ans1=0,ans2=0;
			
			if(a==0)
			{
				//cout<<"a=0\n";
				flag=false;
				return 0;
				//ans=ans*0;
			}
			else
			{
				if(b==0)
				{
					if((a==1)||(a==2))
					{
						//cout<<"10 or 20 appeared\n";
						ans=ans+alphacode(str.substr(2),size-2,arr);
	
					}
					else
					{
						//cout<<"30 or 40 appeared\n";
						flag=false;
						return 0;
						//ans=ans*0;
					}
				}
				else
				{
					//cout<<"No Zero\n";
					ans=ans+alphacode(str.substr(1),size-1,arr);
					if(((a*10)+b)<=26)
					{
						//cout<<"ab <= 26 \n";
						ans=ans+alphacode(str.substr(2),size-2,arr);
					}
				}	
			}
			arr[size]=ans;
			return arr[size];		
		}
	}
}
int main()
{
	string str;
	cin>>str;
	while(str[0]!='0')
	{
		int t=str.size();
		unsigned long long int arr[t+1];
		for(int i=0;i<=t;i++)
		arr[i]=0;
		if(flag==true)
		cout<<alphacode(str,t,arr)<<endl;
		else
		cout<<0<<endl;
		cin>>str;
		flag=true;
	}
	return 0;
}
