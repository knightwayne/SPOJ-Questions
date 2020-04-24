#include<iostream>
using namespace std;
int recursum(int **arr, int k, int n)
{
	if(k==0)
	return n;
	else if(arr[k][n]>0)
	{
		//cout<<"valla\n";
		return arr[k][n];
	}
	else
	{
		//cout<<"halla\n";
		int tot=0;
		for(int i=1;i<=n;i++)
		{
			tot+=recursum(arr,k-1,i);
		}
		arr[k][n]=tot;
		return arr[k][n];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int k,n;
		cin>>k>>n;
		int **arr = new int*[k+1];
		for(int i=0;i<=k;i++)
		arr[i]=new int[n+1];
		
		for(int i=0;i<=k;i++)
		{
			for(int j=0;j<=n;j++)
			{
				arr[i][j]=0;
			}
		}
		int ans=recursum(arr,k,n);
		cout<<ans<<endl;
		//function call accordingly;
		
		for(int i=0;i<=k;i++)
		delete [] arr[i];
		delete [] arr;
			t--;
	}
	return 0;
}
