#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a,b;
		cin>>a>>b;
		if(a==0)
		{
			if(b==1)
			cout<<2<<endl;
			else if(b==2)
			cout<<3<<endl;
			else
			cout<<4<<endl;
		}
		else if(a==1)
		{
			if(b==2)
			cout<<2<<endl;
			else
			cout<<3<<endl;
		}
		else if(a==2)
		{
			cout<<2<<endl;
		}
		else if(a==3)
		{
			cout<<1<<endl;
		}
		else
		cout<<0<<endl;
		t--;
	}
	return 0;
}


