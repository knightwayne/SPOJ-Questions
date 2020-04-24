#include<iostream>
using namespace std;
int arr[1000001]={1};
 
int func(int n)
{
	if(n==1)
	return 1;
	else if(arr[n-1]!=0)
	{
		//cout<<"used me\n";
		return arr[n-1];
	}
	
	else
	{
		arr[0]=1;
		int j=1;
		int l=1;
 
		for(int i=0;;i++)
		{
			int cnt=arr[i];
			int k=j;
			//cout<<cnt<<endl;
			for(j=k;cnt>0;j++)
			{
				arr[j]=l+1;
				if(j==1000000)
				{
					return arr[n-1];
				}
				cnt--;
			}
			l++;
		}
	}
	
}
int main()
{
	int tc;
	cin>>tc;
	int x=1;
	func(1000000);
	while(x<=tc)
	{
		int n;
		cin>>n;
		//for(int i=1;i<=n;i++)
		cout<<"Case #"<<x<<": "<<func(n)<<endl;
		x++;
	}
	return 0;
}
