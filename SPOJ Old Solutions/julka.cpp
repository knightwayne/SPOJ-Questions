#include<iostream>
#include<algorithm>
using namespace std;

string subtract(string str1, string str2)
{
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	string ans=str1;
	//cout<<str1<<" "<<str2<<" "<<ans<<endl;
	for(int i=0;i<ans.size();i++)
	{
		if(str1[i]>=str2[i])
		ans[i]=str1[i]-str2[i]+48;
		else
		{
			ans[i]=str1[i]-str2[i]+48+10;
			if(str1[i+1]!=0)
			str1[i+1]-=1;
			else
			str1[i+1]=9;
		}
		//cout<<i<<" i "<<str1<<" "<<str2<<" "<<ans<<endl;
	}
	//cout<<ans<<endl;
	reverse(ans.begin(),ans.end());
	return ans;	
}
string divide(string str)
{
	string ans=str;
	bool carry=false;
	for(int i=0;i<str.size();i++)
	{
		if(!carry)
		{
			if(str[i]-48==0)
			ans[i]=0+48;
			else if(str[i]-48==1)
			{
				ans[i]=0+48;
				carry=true;
			}
			else if((str[i]-48)>=2)
			{
				int x=str[i]-48;
				
				ans[i]=(x/2)+48;
				
				if(x%2!=0)
				carry=true;
				else
				carry=false;
			}
		}
		else
		{
			if(str[i]-48==0)
			{
				ans[i]=0+48+5;
				carry=false;
			}
			
			else if(str[i]-48==1)
			{
				ans[i]=0+48+5;
				carry=true;
			}
			else if(str[i]-48>=2)
			{
				int x=str[i]-48;

				ans[i]=(x/2)+5+48;
				
				if(x%2!=0)
				carry=true;
				else
				carry=false;
			}
		}	
	}
	return ans;
}
string sum(string str1, string str2)
{
	string ans=str1;
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	bool carry=false;
	for(int i=0;i<ans.size();i++)
	{
		int x=str1[i]-48;
		int y=str2[i]-48;
		if(!carry)
		{
			if(x+y<=9)
			ans[i]=x+y+48;
			else
			{
				ans[i]=x+y+48-10;
				carry=true;
			}
		}
		else
		{
			if(x+y+1<=9)
			{
				ans[i]=x+y+48+1;
				carry=false;
			}
			else
			{
			ans[i]=x+y+48-10+1;
			carry=true;
			}
		}
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main()
{
	int tc=10;
	while(tc)
	{
		string str1,str2,doub,less,more;
		cin>>str1>>str2;
		while(str1.size()!=str2.size())
		{
			str2="0"+str2;
		}
		//cout<<str1<<" "<<str2<<endl;
		doub=subtract(str1,str2);
		//cout<<"2x "<<doub<<endl;
		less=divide(doub);
		//cout<<"x "<<less<<endl;
		more=sum(less,str2);
		bool strt=false;
		for(int i=0;i<more.size();i++)
		{
			if(strt)
			{
				cout<<more[i];
			}
			else
			{
				//cout<<more[i]<<endl;
				if(more[i]!=48)
				{
					strt=true;
					cout<<more[i];
				}
			}
		}
		cout<<endl;
		strt=false;
		for(int i=0;i<less.size();i++)
		{
			if(strt)
			{
				cout<<less[i];
			}
			else
			{
				//cout<<less[i]<<endl;
				if(less[i]!=48)
				{
					strt=true;
					cout<<less[i];
				}
			}
		}
		cout<<endl;
		//cout<<more<<"\n"<<less<<endl;
		tc--;
	}
	return 0;
}
