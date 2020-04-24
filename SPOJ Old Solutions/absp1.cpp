#include<iostream>
//#include<math.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		//int arr[n]={};
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			//cin>>arr[i];
			sum=sum+(x*(n-i-1))-(x*(i));
			//sum=abs(sum);
		}
		//cout<<abs(sum)<<endl;
		if(sum<0)
		cout<<-1*sum<<endl;
		else
		cout<<sum<<endl;
		tc--;
	}
	return 0;
}
