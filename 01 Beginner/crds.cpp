#include<iostream>
using namespace std;
int mod = 1000007;
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		
		
		long long int x=0,z=0;
		cin>>x;
		//z=(((x*(x+1)))%1000007+((x*(x-1))/2)%1000007)%1000007;
		//z=((((((3*x)*x)%1000007)+x)%1000007)/2)%1000007;
		//z=(((((3*x)*x)%1000007)+x)/2)%1000007;
		z=((x*(x+1))%mod+(((x-1)*x)/2)%mod)%mod;
		cout<<z<<endl;
		n--;	
	}
	return 0;
}
