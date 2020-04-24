#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#define max 2147483647
using namespace std;

int lim=sqrt(max);
vector <int> v;
vector <int> prime;
void pri()
{
	v.assign(lim,1);
	v[0]=0;
	v[1]=0;
	for(int i=2;i<=lim;i++)
	{
		if(v[i])
		{
			prime.push_back(i);
			for(int j=i*i;j<=lim;j+=i)
			v[j]=0;
		}
		
	}
	//for(int i=0;i<prime.size();i++)
	//cout<<prime[i]<<" ";
}
void seg_sieve(long long m, long long n)
{
	vector <int> v1;
	v1.assign(n-m+1,1); 
	if(m==1)
	v1[0]=0;
	if(n==1)
	v1[n-m+1]=1;
	for(int i=0;prime[i]<=sqrt(n);i++)
	{
		long long ind=0;
		long long start=(m/prime[i])*prime[i];
		long long start2=start+prime[i];
		if(m==start)
		ind=start-m;
		else
		ind=start2-m;
		for(long long j=ind;j<n-m+1;j+=prime[i])
		{
			v1[j]=0;
			//cout<<j+m<<" ";	
		}
		if(ind+m==prime[i])
		{
			v1[ind]=1;
			//cout<<"sp ";
		}		
	}
	for(long long int i=0;i<v1.size();i++)
	if(v1[i])
	printf("%lld\n",(i+m));
	//cout<<i+m<<endl;
}
int main()
{
	int t;
	//cin>>t;
	scanf("%d",&t);
	while(t)
	{
		long long m,n;
		//cin>>m>>n;
		scanf("%lld %lld",&m,&n);
		pri();
		seg_sieve(m,n);
		printf("\n");
		t--;
	}
	return 0;	
}

