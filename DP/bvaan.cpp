#include<bits/stdc++.h>
using namespace std;
string str1,str2;

int bvaan(int i, int j, int k, int ***dp, int m, int n)
{
	if(k<0)//size<0
	return -1;
	if(k==0)//got appropriate string
	return 0;
	if(i>=m||j>=n)//string indexing out of bounds - because havent got needed string + 
	{	
		return INT_MIN;
	}
	else if(dp[i][j][k]!=-1)
	return dp[i][j][k];
	else
	{
		int ans=max(bvaan(i,j+1,k,dp,m,n),bvaan(i+1,j,k,dp,m,n));
		if(str1[i]==str2[j])
		ans=max(ans,str1[i]+bvaan(i+1,j+1,k-1,dp,m,n));
		dp[i][j][k]=ans;
		return ans;
	}
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int k;
		cin>>str1>>str2>>k;
		int m=str1.size();
		int n=str2.size();
		int ***arr = new int**[101];
		for(int i=0;i<101;i++)
		{
			arr[i]=new int*[101];
			for(int j=0;j<101;j++)
			{
				arr[i][j]=new int[101];
				for(int ka=0;ka<101;ka++)
				{
					arr[i][j][ka]=-1;
				}
			}
		}
		long long int ans = bvaan(0,0,k,arr,m,n);
		if(ans<0)
		ans=0;
		cout<<ans<<endl;
		
		//delete properly
		for(int i=0;i<m;i++)
		delete [] arr[i];
		delete [] arr;
	}
	return 0;
}
