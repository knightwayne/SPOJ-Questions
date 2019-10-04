#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int x,y;
		cin>>x>>y;
		int arr1[x]={0},arr2[y]={0};
		for(int i=0;i<x;i++)
		cin>>arr1[i];
		for(int i=0;i<y;i++)
		cin>>arr2[i];
		sort(arr1,arr1+x);
		sort(arr2,arr2+y);
		int a=0,b=0;
	
		while((a<x)&&(b<y))
		{
			if(arr1[a]<arr2[b])
			{
				a++;
			}
			else
			{
				b++;
			}
		}
		if(a==x)
		cout<<"MechaGodzilla"<<endl;
		else if(b==y)
		cout<<"Godzilla"<<endl;
		else
		cout<<"uncertain"<<endl;
		t--;
	}
	return 0;
}
