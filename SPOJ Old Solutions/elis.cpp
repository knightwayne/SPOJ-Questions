#include<iostream>
#include<algorithm>
using namespace std;

int lis(int str[], int arr[], int size)
{
	if(size==1)
	return 1;
	else if(arr[size-1]>0)
	return arr[size-1];
	else
	{
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<i;j++)
			{
				int max=0;
				if(str[j]>str[i])
				{
					max=arr[j]+1;
					if(max>arr[i])
					arr[i]=max;
				}
			}
		}
		return arr[size-1];
	}
}
int main()
{
	/*string str;
	cin>>str;
	int arr[str.size()]={0};
	int t=lis(str,arr,str.size());
	cout<<"ans\n";
	for(int i=0;i<str.size();i++)
	cout<<arr[i]+1<<" ";
	return 0;*/
	int t;
	cin>>t;
	int str[t],arr[t]={0};
	for(int i=0;i<t;i++)
	cin>>str[i];
	int k=lis(str,arr,t);
	for(int i=0;i<t;i++)
	cout<<arr[i]+1<<" ";
	cout<<endl;
	cout<<*max_element(arr,arr+t)+1<<endl;
	return 0;
}
