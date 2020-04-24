#include <bits/stdc++.h>
using namespace std;
//int m=1000000007;
 
unsigned long long alphacode(string str, int n, unsigned long long int arr[])
{
	if(n==0)
	return 1;
	if(n==1)
	{
		if(str[0]=='0')
		return 0;
		else
		return 1;	
	}
	if(arr[n]!=0)
	return arr[n];
	else
	{
		arr[0]=1;arr[1]=1;
		char a=str[0],b=str[1];
		if(a=='0')
		return 0;
		else
		{
			if(a=='1')
			{
				arr[n]=alphacode(str.substr(1),n-1,arr)+alphacode(str.substr(2),n-2,arr);
                //arr[n]%=m;
				return arr[n];
			}
			else if(a=='2')
			{
				if(b-48<=6)
				{
					arr[n]=alphacode(str.substr(1),n-1,arr)+alphacode(str.substr(2),n-2,arr);
                    //arr[n]%=m;
					return arr[n];
				}
				else
				{
					arr[n]=alphacode(str.substr(1),n-1,arr);
					return arr[n];
				}
			}
			else
			{
				arr[n]=alphacode(str.substr(1),n-1,arr);
				return arr[n];
			}
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
		unsigned long long int arr[t+1]={0};
		for(int i=0;i<=t;i++)
		arr[i]=0;
		//unsigned long long int k=alphacode(str,t,arr);
		cout<<alphacode(str,t,arr)<<endl;
		cin>>str;
	}
	return 0;
} 
