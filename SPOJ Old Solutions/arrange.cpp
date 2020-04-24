#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n;
		cin>>n;
		int arr[n];
		int cnt=0;
		map <int,int> m;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>arr[i];
			x=arr[i];
			m[arr[i]]++;
			if(arr[i]==1)
			cnt++;
		}
		int size=m.size();
		if(m[2]==1&&m[3]==1&&size<=3)
		{
			sort(arr,arr+n);
			for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
			cout<<endl;
		}
		else
		{
			sort(arr,arr+n);
			reverse(arr,arr+n);
			for(int i=0;i<cnt;i++)
			cout<<"1 ";
			for(int i=0;i<n-cnt;i++)
			cout<<arr[i]<<" ";
			cout<<endl;
		}
		m.clear();
		tc--;
	}
	return 0;
}
