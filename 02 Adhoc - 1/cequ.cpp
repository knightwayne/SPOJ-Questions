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
	int tc;
	cin>>tc;
	int t=1;
	while(t<=tc)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int g=gcd(a,b);
		if(c%g==0)
			cout<<"Case "<<t<<": Yes"<<endl;
		else
			cout<<"Case "<<t<<": No"<<endl;
			
			
		t++;
	}
	return 0;
}
