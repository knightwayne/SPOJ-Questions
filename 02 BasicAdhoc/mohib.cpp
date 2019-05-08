#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int x=0,a=0;
		cin>>x>>a;
		int n=0;
		n=a-x;
		long long sum=(a+1)*n;
		sum=sum-(((n-1)*n)/2);
		//if(sum>=x)
		cout<<sum<<endl;
		/*else
		cout<<x<<endl;*/
		t--;
	}
	return 0;
}
