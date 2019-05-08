#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		double n;
		cin>>n;
		/*if(n==0)
		cout<<fixed<<setprecision(8)<<.0<<endl;
		else*/
		cout<<fixed<<setprecision(8)<<(float)n/(n+1)<<endl;
		t--;
	}
	return 0;
}
