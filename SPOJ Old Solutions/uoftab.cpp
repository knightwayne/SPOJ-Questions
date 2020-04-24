#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b>a)
	return gcd(b,a);
	else if(b!=0)
	return gcd(b,a%b);
	else
	return a;
}
string revamp(string str, int n)
{
	int size=str.size();
	string str1=str.substr(0,n);
	//cout<<"str1 "<<str1<<endl;
	str=str.substr(n);
	//cout<<"str "<<str<<endl;
	str=str+str1;
	//cout<<"str "<<str<<endl;
	return str;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		int awa[n],sle[n],curr[n],arr[n];
		int hcf=1,lcm=1;
		string a[n];
		for(int i=0;i<n;i++)
		{
			cin>>awa[i]>>sle[i]>>curr[i];
			arr[i]=awa[i]+sle[i];
			string str;
			for(int k=0;k<awa[i];k++)
			str+="0";
			for(int k=0;k<sle[i];k++)
			str+="1";
			//cout<<str<<endl;
			str=revamp(str,curr[i]);
			a[i]=str;
			//cout<<a[i]<<" a[i] "<<endl;
		}
		
		int ans=arr[0];
		for(int i=1;i<n;i++)
		{
			lcm=(ans*arr[i])/(gcd(arr[i],ans));
			ans=lcm;
		}
		//cout<<lcm<<endl;
		int x=-1;
		//int cnt=0;
		int i=0;
		for(i=0;i<1234567;i++)
		{
			x=1;
			//cout<<"lcm "<<i<<endl;
			for(int j=0;j<n;j++)
			{
				int size=a[j].size();
				//cout<<"size "<<size<<endl;
				//cout<<"value "<<(a[j][i%size]-48)<<" ";
				x&=(a[j][i%size]-48);
				//cout<<x<<" ";
			}
			if(x==1)
			{
				cout<<i<<endl;
				break;
			}
			//cout<<endl;		
		}
		if(i==1234567)
		cout<<"Foxen are too powerful\n";
		
		tc--;
	}
	return 0;
}
