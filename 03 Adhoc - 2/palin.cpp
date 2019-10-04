#include<bits/stdc++.h>
using namespace std;

string palin(string str)
{
	string ret;
	if(str.size()==1)
	{
		if(str[0]!=(9+48)){
			ret=(char)(str[0]+1);
			return ret;
		}
		else
		return "11";
	}
	else if(str.size()==2)
	{
		if(((int)str[0]==(9+48))&&((int)str[1]==(9+48)))
			return "101";
		else if((int)str[0]>(int)str[1]){
			ret+=(char)(str[0]);
			ret+=(char)(str[0]);
			return ret;
		}
		else if((int)str[0]<=(int)str[1]){
			ret+=(char)(str[0]+1);
			ret+=(char)(str[0]+1);
			return ret;
		}
	}
	else{
		int cntNine=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]==(9+48))
				cntNine++;
		}
		if(str.size()==cntNine)
		{
			ret+='1';
			for(int i=0;i<cntNine-1;i++)
			ret+='0';
			ret+='1';
			return ret;
		}
		else if(str.size()%2==0)
		{
			bool palind=true;
			for(int i=0;i<(str.size()/2)-1;i++)
			{
				if(str[i]==str[str.size()-i-1])
				{
					continue;
					ret=str;
				}
				else if(str[i]>str[str.size()-i-1])
				{
					palind=false;
					str[str.size()-i-1]=str[i];
					ret=str;
				}
				else if(str[i]<str[str.size()-i-1])
				{
					palind=false;
					str[str.size()-i-1]=str[i];
					int k=str.size()-i-1-1;
					bool ninePres=false;
					while(k>=0){
						if((int)str[k]!=(9+48))
						{
							int val=(int)str[k];
							val++;
							str[k]=(char)val;
							break;
						}
						else{
							ninePres=true;
							str[k]='0';
					}
					k--;	
				}
				if(ninePres){
					str=palin(str);
					ret=str;	
				}
				else
				ret=str;
				}
				//cout<<str<<"str \n";
			}
			int k=str.size()/2;
			if(str[k-1]>str[k])
			{
				palind=false;
				int val=(int)str[k-1];	
				str[k]=(char)val;
				ret=str;
				//cout<<val<<" "<<str<<" >\n";
			}
			else if(str[k-1]<str[k])
			{
				palind=false;
				int val=(int)str[k-1];
				val++;
				str[k]=(char)val;
				str[k-1]=(char)val;
				ret=str;
				//cout<<val<<" "<<str<<" <\n";
			}
			else if(str[k-1]==str[k])
			{
				//palind=true;
			}
			
			if(palind)
			{
				//cout<<"palindrome\n";
				int k=(str.size()/2);
				if((int)str[k]!=(9+48))
				{
					int val=(int)str[k];
					val++;
					str[k-1]=(char)val;	
					str[k]=(char)val;
					ret=str;
				}
				else
				{	
					str[k]='0';
					k--;
					str[k]='0';
					k--;
					bool ninePres=false;
					while(k>=0){
						if((int)str[k]!=(9+48))
						{
							int val=(int)str[k];
							val++;
							str[k]=(char)val;
							break;
						}
						else{
							ninePres=true;
							str[k]='0';
						}
						k--;	
					}
				string sub=str.substr(0,str.size()/2);
				ret=sub;
				reverse(ret.begin(),ret.end());
				ret=sub+ret;
				/*if(ninePres)
				ret=palin(str);
				else
				ret=str;*/
				}
			}
			return ret;
		}
		else
		{
			bool palind=true;
			for(int i=0;i<str.size()/2;i++)
			{
				if(str[i]==str[str.size()-i-1])
				{
					continue;
					ret=str;
				}
				else if(str[i]>str[str.size()-i-1])
				{
					palind=false;
					str[str.size()-i-1]=str[i];
					ret=str;
				}
				else if(str[i]<str[str.size()-i-1])
				{
					palind=false;
					str[str.size()-i-1]=str[i];
					int k=str.size()-i-1-1;
					bool ninePres=false;
					while(k>=0){
						if((int)str[k]!=(9+48))
						{
							int val=(int)str[k];
							val++;
							str[k]=(char)val;
							break;
						}
						else{
							ninePres=true;
							str[k]='0';
					}
					k--;	
				}
				if(ninePres)
				ret=palin(str);
				else
				ret=str;
				}
			}
			if(palind)
			{
				//cout<<"palindrome\n";
				int k=str.size()/2;
				bool ninePres=false;
					while(k>=0){
						if((int)str[k]!=(9+48))
						{
							int val=(int)str[k];
							val++;
							str[k]=(char)val;
							break;
						}
						else{
							ninePres=true;
							str[k]='0';
					}
					k--;	
				}
				if(ninePres)
				ret=palin(str);
				else
				ret=str;
			}
			return ret;
		}
	}
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		string str;
		cin>>str;
		cout<<palin(str)<<endl;
	}
	return 0;
}
