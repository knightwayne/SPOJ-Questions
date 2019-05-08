#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

void func(int arr[], int n)
{
	map <int,int> m;
	m.clear();
	for(int i=0;i<n;i++)
	m[arr[i]]++;
	bool flag=true;
	for(int i=0;i<(n/2);i++)
	{
		m[i]+=m[n-1-i];
		if(m[i]==2)
		continue;
		else
		{
			flag=false;
			break;
		}
	}
	//for(int i=0;i<n;i++)
	//cout<<m[i]<<" ";
	if(flag)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	//m.clear();
	return;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		int arr[n]={};
		for(int i=0;i<n;i++)
		cin>>arr[i];
		func(arr,n);
		tc--;
	}
	return 0;
}
