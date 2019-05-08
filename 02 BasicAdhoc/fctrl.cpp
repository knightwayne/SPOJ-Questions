#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		int a,z=0,div,i=1;
		cin>>a;
		div=pow(5,i);
		while(a>=div)
		{
			div=pow(5,i);
			z=z+a/div;
			i++;
			div=pow(5,i);
		}
		cout<<z<<endl;
		n--;
	}
return 0;
}

