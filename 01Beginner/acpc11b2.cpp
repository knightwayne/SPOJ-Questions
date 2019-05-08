#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int mini(int *arr1, int x, int *arr2, int y)
{
	int min=abs(arr1[0]-arr2[0]);
	int xptr=0;
	int yptr=0;
	while((xptr<x)&&(yptr<y))
	{
		int diff=abs(arr1[xptr]-arr2[yptr]);
		
		if(diff<min)
		min=diff;
		/*if(min==0)
		break;*/
		if(arr1[xptr]<=arr2[yptr])
		xptr++;
		else
		yptr++;
	}
	return min;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int x=0,y=0;
		
		cin>>x;
		int arr1[x]={0};
		for(int i=0;i<x;i++)
		cin>>arr1[i];
		
		cin>>y;
		int arr2[y]={0};
		for(int i=0;i<y;i++)
		cin>>arr2[i];
		
		sort(arr1,arr1+x);
		sort(arr2,arr2+y);
		int k=mini(arr1,x,arr2,y);
		cout<<k<<endl;
		tc--;
	}
	return 0;
}




















/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int x,y;
		
		cin>>x;
		int x1[x];
		for(int i=0;i<x;i++)
		cin>>x1[i];
		
		cin>>y;
		int y1[y];
		for(int i=0;i<y;i++)
		cin>>y1[i];
		
		int ans=abs(x1[0]-y1[0]),min=0;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				min=abs(x1[i]-y1[j]);
				if(min<ans)
				ans=min;	
			}
		}
		cout<<ans<<endl;
		tc--;
	}
return 0;
}*/
