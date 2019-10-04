#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	if(b==0)
	return a;
	else if(b>a)
	return gcd(b,a);
	else
	return gcd(b,a%b);
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[n],d[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i]>>c[i];
			d[i]=a[i]+b[i];
		}
		
		long long lcm=d[0];
		for(int i=1;i<n;i++)
			lcm=(lcm*d[i])/(gcd(lcm,d[i]));

		//cout<<"lcm "<<lcm<<endl;
		
		string arr[n];
		for(int j=0;j<n;j++)
		{
			string str,sub;
			for(int i=0;i<a[j];i++)
			str+='1';
			for(int i=0;i<b[j];i++)
			str+='0';
			
			sub=str.substr(0,c[j]);
			str+=sub;
			str=str.substr(c[j]);
			arr[j]=str;
			while(arr[j].size()<lcm)
			arr[j]+=str;
			//cout<<"arr[j] "<<arr[j]<<" ";
		}
		//cout<<endl;
		
		bool flag=false;
		int t=0;
		for(int j=0;j<lcm;j++)
		{
			int bit=0;
			for(int k=0;k<n;k++)
			bit|=((int)(arr[k][j])-48);
			
			if(bit==0)
			{
				flag=true;
				t=j;
				break;
			}
		}
		if(flag)
		cout<<t<<endl;
		else
		cout<<"Foxen are too powerful\n";
	}
	return 0;
}
