#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	int tc;
	while(tc--)
	{
		int rx,ry,cx,cy,dx,dy;
		cin>>rx>>ry>>cx>>cy>>dx>>dy;
		
		if((cx<=rx)&&(rx<=dx))
		{
			
		}
		else if((dx<=rx)&&(rx<=cx))
		{
			
		}
		else if((cy<=ry)&&(ry<=dy))
		{
			
		}
		else if((dy<=ry)&&(ry<=cy))
		{
			
		}
		else
		{
			cout<<"YES\n";
		}
	}
	return 0;
}
