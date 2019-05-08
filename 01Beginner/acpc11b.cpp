#include<iostream>
#include<algorithm>
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
		
		sort(x1,x1+x);
		sort(y1,y1+y);
		
		int min=0,min1=0;
		int xptr=0,yptr=0;
		min1=abs(x1[xptr]-y1[yptr]);
		
		
		while(xptr<x&&yptr<y)
		{
		
				if(x1[xptr]<=y1[yptr])
				{
					xptr++;
					min=abs(x1[xptr]-y1[yptr]);
					if(min<min1)
					min1=min;
				}
				else 
				{
					yptr++;
					min=abs(x1[xptr]-y1[yptr]);
					if(min<min1)
					min1=min;
				}
		}
		if(xptr==x)
		{
			while(y<yptr)
			{
			min=abs(x1[xptr]-y1[yptr]);
			yptr++;
			min=abs(x1[xptr]-y1[yptr]);
			if(min<min1)
			min1=min;
			}
			
		}
		if(yptr==y)
		{
			while(x<xptr)
			{
			min=abs(x1[xptr]-y1[yptr]);
			xptr++;
			min=abs(x1[xptr]-y1[yptr]);
			if(min<min1)
			min1=min;
			}
								
		}
		cout<<min1<<endl;
		
		tc--;
	}	
	return 0;
}
