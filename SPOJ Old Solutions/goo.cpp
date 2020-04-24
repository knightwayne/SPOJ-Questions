#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		long long int num=0,ones=0;
		num=pow(2,n-1);
		ones=num+(num*(n-1))/2;
		cout<<num<<" "<<ones<<endl;
		t--;
	}
	return 0;
}
