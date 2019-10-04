#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		if(n%2==0)
		cout<<1<<endl;
		else
		cout<<0<<endl;
		t--;
	}
}
