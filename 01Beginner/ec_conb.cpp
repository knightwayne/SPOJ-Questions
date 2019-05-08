	#include<stdio.h>
	//#include<iostream>
	#include<stdlib.h>
	#include<math.h>
	//using namespace std;
	
	int main()
	{
		int n;
		//cin>>n;
		scanf("%d",&n);
		int arr[n];
			for(int i=0;i<n;i++)
			{
				//cin>>arr[i];
				scanf("%d",&arr[i]);
			}	
			for(int l=0;l<n;l++)
			{
				if(arr[l]%2==0)
				{
					int cnt=0;
					char str[20]={'\0'},buf[20]={'\0'};
					itoa(arr[l],str,2);
					int j=0;
					/*while(arr[l]>=0)
					{
						str[j]=arr[l]%2;
						arr[l]=(int)(arr[l]/2)-(int)(str[j]);
						j++;
					//	printf("%d",(int)str[j]);
					}*/
					for(int i=0;str[i]!='\0';i++)
					{cnt++;}
					int sum=0;
					for(int i=0;i<cnt;i++)
					{
						buf[i]=str[cnt-i-1];
						sum=sum+(((int)buf[i]-48)*pow(2,cnt-i-1));
					}
					arr[l]=sum;
				}
			}
			for(int i=0;i<n;i++)
			{
				//cout<<arr[i]<<endl;
				printf("%d\n",arr[i]);
			}
		return 0;
	}
