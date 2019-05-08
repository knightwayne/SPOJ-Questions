	#include<iostream>
	using namespace std;
	
	int revbits(int n)
	{
		//cout<<"hi  ";
		int rev=0;
		while(n>0)
		{
			if(n&1==1) //last bit is 1
			{
				rev=rev<<1;
				rev=rev^1;//rev++;
				n=n>>1;
			}
			else //last bit is 0
			{
				rev=rev<<1;
				n=n>>1;
			}
			
		}
		//cout<<n<<" "<<rev<<endl;
		return rev;
	}
	int main()
	{
		int n;
		cin>>n;
		int arr[n];
			for(int i=0;i<n;i++)
			{
			cin>>arr[i];
			}	
			for(int i=0;i<n;i++)
			{
				if(arr[i]%2==0)
				{
					int j=arr[i];
					j=revbits(j);
					arr[i]=j;
				}
				
			}
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<endl;
			}
		return 0;
	}
	
	
	
	
	
	
	
	/*#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	
	int revbits(int n)
	{
		int rev=0;
		while(n>0)
		{
			if(n&1==1) //last bit is 1
			{
				rev<<1;
				rev=rev^1;//rev++;
				n>>1;
			}
			else //last bit is 0
			{
				rev<<1;
				n>>1;
			}
			
		}
		printf("%d\t",rev);
		return rev;
	}
	int main()
	{
		int n;
		scanf("%d",&n);
		int arr[n];
			for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}	
			for(int l=0;l<n;l++)
			{
				if(arr[l]%2==0)
				{
					int j=arr[l];
					j=revbits(j);
					arr[l]=j;
				}
				
			}
			for(int i=0;i<n;i++)
			{
				printf("%d\n",arr[i]);
			}
		return 0;
	}*/
