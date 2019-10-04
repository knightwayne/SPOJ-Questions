#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fact1(int n)
{
	if(n==0)
	{
		cout<<1<<endl;
		return;
	}
	vector<long long int> v;
	v.push_back(1);
	for(int i=1;i<=n;i++)
	{
		int j=0;
		int size=v.size();
		long long int prod=0,carry=0;
		//cout<<"Size "<<size<<endl;
		while(size!=0)
		{
			prod=(v[j]*i)+carry;
			v[j]=prod%10;
			carry=prod/10;
			if((size==1)&&(carry>0))
			{
				cout<<i<<endl;
				cout<<v.size()<<" ";
				while(carry!=0)
				{
					int x=carry%10;
					carry=carry/10;
					v.push_back(x);
				}
				
				cout<<v.size()<<endl;
			}
			size--;
			j++;
		}
		//cout<<"carry "<<carry<<endl;
		if(i==n)
		{
			for(int k=v.size()-1;k>=0;k--)
			cout<<v[k];
			cout<<endl;
		}
	}
	v.clear();
	return;
}

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int a;
		cin>>a;
		fact1(a);
		t--;
	}
	return 0;
}


/*#include<iostream>
using namespace std;
void print(int arr[])
{	
	int sp=0;
	//cout<<"199 "<<arr[199]<<endl;	
	for(int i=199;i>=0;i--)
	{
		if(arr[i]==0&&arr[i-1]!=0)
		{
			sp=i;
	//		cout<<"sp "<<sp<<endl;
			break;
		}
	}
	for(int p=sp-1;p>=0;p--)
	{
			cout<<arr[p];	
	}
	cout<<endl;
}
long long int fact(int a)
{
	int i=1,arr[200];
	for(int q=0;q<200;q++)
	arr[q]=0;
	arr[0]=1;
			while(i<=a)
			{
				int rem=0,remx=0;
				for(int j=0;j<199;j++)
				{
					remx=((arr[j]*i)+rem)/10;
					arr[j]=((arr[j]*i)+rem)%10;
					rem=remx;
					//print(arr,50);
				}
				i++;
			}
			print(arr);
	
}
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		int a;
		cin>>a;
		fact(a);
		cout<<endl;
		fact1(a);
		cout<<endl;
		n--;
	}
	return 0;
}*/
