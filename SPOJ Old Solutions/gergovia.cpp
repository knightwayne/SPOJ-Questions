
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long long int func(int arr[], int size)
{
	vector < pair<int,int> > pos,neg;
	int p=0,n=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>=0)
		pos.push_back(make_pair(arr[i],i));
		else
		neg.push_back(make_pair(arr[i],i));
	}
	int psi=pos.size();
	int nsi=neg.size();
	//cout<<psi<<" "<<nsi<<endl;
	long long int sum=0;
	p=0,n=0;
	while((p<psi)&&(n<nsi))
	{
		if(abs(pos[p].first)>=abs(neg[n].first))
		{
			sum+=abs(neg[n].first)*abs(pos[p].second-neg[n].second);
			pos[p].first+=neg[n].first;
			n++;
		}
		else
		{
			sum+=(pos[p].first)*abs(pos[p].second-neg[n].second);
			neg[n].first+=pos[p].first;
			p++;
		}
	}
	pos.clear();
	neg.clear();
	return sum;
}
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		int arr[n]={};
		for(int i=0;i<n;i++)
		cin>>arr[i];
		cout<<func(arr,n)<<endl;
		cin>>n;
	}
	return 0;
}
