#include<iostream>
using namespace std;

void code(int x)
{
	if(x==1)
	cout<<"m";
	else if(x==2)
	cout<<"a";
	else if(x==3)
	cout<<"n";
	else if(x==4)
	cout<<"k";
	else if(x==0||5)
	cout<<"u";
	
}
void write(long long n)
{
	if(n<=5)
	{
		code(n);
	}
	
	else
	{
		
		long long x=n/5;
		long long rem=n%5;
		if(rem==0)
		x--;
		write(x);
		write(rem);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		long long n;
		cin>>n;
		write(n);
		cout<<endl;
		t--;
	}
	return 0;
}
/*#include<iostream>
using namespace std;
void disp(int n)
{
	if(n==1)
	cout<<"m";
	else if(n==2)
	cout<<"a";
	else if(n==3)
	cout<<"n";
	else if(n==4)
	cout<<"k";
	else if(n==5)
	cout<<"u";
	
}
void write(long long int n)
{
	long long int q=0,r=0;
	if(n>=5)
	{
		r=n%5;
		q=n/5;
		if(r==0)
		{
			r=r+5;
			q=q-1;
		}
		write(q);
		disp(r);
	}
	else
	{
		disp(n);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n;
		cin>>n;
		//if(n==5)
		//cout<<"u";
		//else
		write(n);
		
		cout<<endl;
		t--;
	}
	return 0;
}*/
