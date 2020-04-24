#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

double ar(double a, double b, double c, double d)
{
	double s=(a+b+c+d)/2;
	return sqrt((s-a)*(s-b)*(s-c)*(s-d));
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		//cout<<(double)ar(a,b,c,d)<<endl;
		cout<<fixed<<setprecision(2)<<ar(a,b,c,d)<<endl;
		t--;
	}
	return 0;
}
