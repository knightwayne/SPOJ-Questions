#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		if(arr[0]==0)
		{
			int l;
			for(int l=0;l<n;)
			{
				if(arr[l]<=l)
				{
					l++;
					if(l==n)
					cout<<"YES\n";
					else
					continue;
				}
				else
				{
					cout<<"NO\n";
					break;
				}
			}
			
		}
		else
		cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
