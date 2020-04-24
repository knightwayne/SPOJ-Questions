#include<iostream>
#include<algorithm>
using namespace std;

int knapsackmain(int wt[], int val[], int n, int w, int **arr)
{
	if(n==0)
	return 0;
	if(w==0)
	return 0;
	else if(arr[n][w]>=0)
	return arr[n][w];
	else
	{
		if(wt[n-1]<=w)
		{
			int ans=max((val[n-1]+knapsackmain(wt,val,n-1,w-wt[n-1],arr)),knapsackmain(wt,val,n-1,w,arr));
			arr[n][w]=ans;
			return ans;
		}
		else
		{
			int ans=knapsackmain(wt,val,n-1,w,arr);
			arr[n][w]=ans;
			return ans;
		}
	}
}
int knapsack(int wt[], int val[], int n, int w)
{
		int **arr = new int*[n+1];
	for(int i=0;i<=n;i++)
	arr[i]=new int[w+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			arr[i][j]=-1;
		}
	}
	int ans=knapsackmain(wt,val,n,w,arr);
	//function call accordingly;
	
	for(int i=0;i<=n;i++)
	delete [] arr[i];
	delete [] arr;
	
	return ans;
}
int main()
{
	int n,w;
	cin>>w>>n;
	int wt[n]={0},val[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>wt[i]>>val[i];
	}
	cout<<knapsack(wt,val,n,w)<<endl;
	return 0;
}	
