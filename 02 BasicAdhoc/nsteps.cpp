#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int x,y;
		cin>>x>>y;
		if(x==y)
		{
			if(x%2==0)
			cout<<2*x<<endl;
			else
			cout<<(2*x)-1<<endl;
		}
		else if(x-y==2)
		{
			if(x%2==0)
			cout<<x+y<<endl;
			else
			cout<<(x+y)-1<<endl;
		}
		else
		cout<<"No Number\n";
		tc--;
	}
	return 0;
}
