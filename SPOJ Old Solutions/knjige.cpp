#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

void func(int arr[], int n, map <int,int> m)
{
	int large=n;
	int small=large-1;
	int count=0;
	int i=0;
	while(small>=1)
	{	
		if(m[small]>m[large])
		{
		//	cout<<small<<" "<<large<<endl;
		//	cout<<"correct order\n";
			
		}
		else
		{
		//	cout<<small<<" "<<large<<endl;
		//	cout<<"changes to be made\n";
			int x=m[small];
			int y=m[large];
			//int temp=0;
			//temp=small;
			for(int i=x;i<n-1;i++)
			{
				//arr[i]=arr[i+1];
				m[arr[i]]=m[arr[i]]-1;
			}
			//arr[n-1]=temp;
			m[small]=n-1;
			count++;
			/*for(int i=0;i<n;i++)
			{
				
				cout<<arr[i]<<" "<<m[i+1]<<endl;
				//arr[i]=arr[i];
			}*/
		}
	large--;
	small--;
	}
	cout<<count<<endl;
	return;
}
int main()
{
	while(true)
	{
		int n;
		cin>>n;
		int arr[n]={};
		map <int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]=n-1-i;
		}
		/*for(int i=1;i<=n;i++)
		cout<<m[i]<<" ";
		cout<<endl;*/
		reverse(arr,arr+n);
		func(arr,n,m);
		m.clear();
	}
	
	return 0;
}
