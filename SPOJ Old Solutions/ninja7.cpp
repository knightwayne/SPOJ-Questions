#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		long long int arr[n]={};
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		int count=0;
		long long sum=0;
		vector <int> v;
		
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			arr[i]=arr[i]-x;
			if(arr[i]>=0)
			{
				count++;
				sum+=arr[i];
				//cout<<sum<<endl;
			}
			else
			v.push_back(abs(arr[i]));   //not taking abs silly mistake
		}
		
		//cout<<"sum "<<sum<<endl;
		//cout<<"knt "<<count<<endl;
		//cout<<"vector\n";
		sort(v.begin(),v.end());
		/*for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}*/
		
		for(int i=0;i<v.size();i++)
		{
			//cout<<i<<" "<<v[i]<<endl;
			sum=sum-v[i];
			//cout<<sum<<endl;
			if(sum>=0)
			{
				count++;
			}
			else
			break;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
