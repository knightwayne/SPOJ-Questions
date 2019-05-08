#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double n;
	cin>>n;
	while(n!=0.00)
	{
		//cout<<x<<endl;
		
		if(n<=0.5)
		cout<<"1 card(s)\n";
		else
		{
			double ll=0.00,hl=0.5;
			double i=2;
			while(1)
			{
				ll=(ll+(1/i)); hl=hl+(1/(i+1));
				//cout<<ll<<" "<<hl<<endl;
				if((n<=hl)&&(n>ll))
				{
					cout<<i<<" card(s)\n";
					break;
				}
				i++;
			}
		}
		
		cin>>n;
	}
	return 0;
}
