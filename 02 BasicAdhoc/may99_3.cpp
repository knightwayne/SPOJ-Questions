#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a<b)
	return gcd(b,a);
	else if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(((z>x)&&(z>y)))
		{
			cout<<"NO"<<endl;
		}
		else
		{
			int g=gcd(x,y);
			if(z%g==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
		}
		
		t--;
	}
	return 0;
}
