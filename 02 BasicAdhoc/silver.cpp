#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long double n;
	cin>>n;
	while(n!=0)
	{
		cout<<(long long int)log2(n)<<endl;
		cin>>n;
	}
	return 0;
}
