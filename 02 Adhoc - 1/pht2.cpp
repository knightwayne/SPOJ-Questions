#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int tc=1;
	while(tc<=t)
	{
		long long int n,j;
		cin>>n;
		j=sqrt(n+1)-1;
		cout<<"Case "<<tc<<": "<<j<<endl;
		tc++;
	}
	return 0;
}
