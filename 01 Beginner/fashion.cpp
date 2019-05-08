#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int n;
		cin>>n;
		int x[n],y[n];
		for(int i=0;i<n;i++)
		cin>>x[i];
		for(int i=0;i<n;i++)
		cin>>y[i];
			sort(x,x+n);
			sort(y,y+n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+x[i]*y[i];
		}
		cout<<sum<<endl;
		
		tc--;
	}
	return 0;
}
