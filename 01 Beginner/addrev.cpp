#include<iostream>
#include<math.h>
using namespace std;
int rev(long long int i)
{
	long long int z=i;
	int nod=0,cnt=0;
	while(z!=0)
	{
		z=z/10;
		nod++;
	}
	z=0;
	while(i>0)
	{
		z=z+(i%10)*pow(10,(nod-cnt-1));
		cnt++;
		i=i/10;
	}
	return z;
}
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		long long int x,y,z=0;
		cin>>x>>y;
		x=rev(x);
		y=rev(y);
		z=x+y;
		cout<<rev(z)<<endl;
		n--;
	}
	return 0;
}
