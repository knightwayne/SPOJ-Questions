#include<iostream>
#include<cmath>
using namespace std;
int arr[1001]={0};

int nfury(int n,int arr[])
{

	if(n<=1)
	{
		return 1;
	}
	else if(arr[n]>0)
	return arr[n];
	else
	{
		arr[0]=1;
		arr[1]=1;
		int smallroot=sqrt(n);
		if((smallroot*smallroot)==n)
		{
			arr[n]=1;
			return 1;
		}
		else
		{
			int min=0;
			for(int i=1;i<=smallroot;i++)
			{
				int square=i*i;
				arr[n]=nfury(square,arr)+nfury(n-square,arr);
				if(i==1)
				min=nfury(square,arr)+nfury(n-square,arr);
				//cout<<"n "<<n<<" i "<<i<<" arr[n] "<<arr[n]<<" minValue "<<min<<endl;
				if(arr[n]<min)
				{
					min=arr[n];
				}	
			}
			arr[n]=min;
			return arr[n];
		}
	}
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		cout<<nfury(n,arr)<<endl;
		tc--;
	}
	return 0;
}
