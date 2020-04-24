#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	int tc;
	cin>>tc;
	while(tc)
	{
		int rx,ry,cx,cy,dx,dy;
		cin>>rx>>ry>>cx>>cy>>dx>>dy;
		bool flag=false;
		if(rx==cx&&ry==cy)
		{
			cout<<"NO\n";
			flag=true;
		}
		if(rx==dx&&ry==dy)
		{
			cout<<"NO\n";
			flag=true;
		}
		if((rx-cx==ry-cy)&&(dx-rx==dy-ry))
		{
			if(((rx-cx)>=0)&&((dx-rx)>=0))
			{
				cout<<"NO\n";
				flag=true;
			}
		}
		if((cx-rx==ry-cy)&&(rx-dx==dy-ry))
		{
			if(((cx-rx)>=0)&&((rx-dx)>=0))
			{
				cout<<"NO\n";
				flag=true;
			}
		}
		if((rx-dx==ry-dy)&&(cx-rx==cy-ry))
		{
			if(((rx-dx)>=0)&&((cx-rx)>=0))
			{
				cout<<"NO\n";
				flag=true;
			}
		}
		if((dx-rx==ry-dy)&&(rx-cx==cy-ry))
		{
			if(((dx-rx)>=0)&&((rx-cx)>=0))
			{
				cout<<"NO\n";
				flag=true;
			}
		}
		if(flag==false)
		cout<<"YES\n";
		tc--;
	}
	return 0;
}
