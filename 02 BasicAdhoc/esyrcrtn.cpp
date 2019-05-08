#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n;
		cin>>n;
		if(n%6==1)
		cout<<1<<endl;
		else if(n%6==2)
		cout<<4<<endl;
		else if(n%6==3)
		cout<<6<<endl;
		else if(n%6==4)
		cout<<5<<endl;
		else if(n%6==5)
		cout<<2<<endl;
		else 
		cout<<0<<endl;
		
		t--;
	}
}

/*
#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	//int arr[6]={1,3,2,-1,-3,-2};
	int arr[6]={1,4,6,5,2,0};
	while(tc)
	{
		long long int n;
		cin>>n;
		int x=n%6;
		cout<<arr[x-1]<<endl;
		tc--;
	}
	return 0;
}
*/
