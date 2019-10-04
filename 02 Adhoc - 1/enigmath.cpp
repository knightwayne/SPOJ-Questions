#include<iostream>
using namespace std;

int gcdfunc(int a, int b)
{
	if(b>a)
	return gcdfunc(b,a);
	else if(b==0)
	return a;
	else
	return gcdfunc(b,a%b);
}
int main()
{
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int a,b;
		cin>>a>>b;
		long long int lcm=b/gcdfunc(a,b);
		lcm=lcm*a;
		cout<<(lcm/a)<<" "<<(lcm/b)<<endl;
		
		tc--;
	}
	return 0;
}
