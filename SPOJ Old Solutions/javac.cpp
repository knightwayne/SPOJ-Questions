#include<iostream>
using namespace std;

int main()
{
	//bool flag=true;
	string str;
	while(!cin.eof())
	{
		//string str;
		cin>>str;
		string ans="_";
		bool java=false;
		bool cpp=false;
		bool both=false;
		for(int i=0;i<str.size();i++)
		{
			int x=(int)str[i];
			//cout<<x<<" ";
			if(((65<=x)&&(x<=90))||((97<=x)&&(x<122))||(x==95))
			{
				//cout<<"enterthedragon\n";
				if(x==95)   //cpp
				{
					if(i==(str.size()-1))
					{
						both=true;
						break;
					}
					else if(i==0)
					{
						both=true;
						break;
					}
					else
					{
						int y=(int)str[i+1];
						if(y==95)
						{
							//cout<<"_ _\n";
							both=true;
							break;
						}
						else
						{
							cpp=true;
						}
					}
				}
				else if((65<=x)&&(x<=90))
				{
					if(i==0)
					{
						//cout<<"startA\n";
						both=true;
						break;
					}
					java=true;
				}
				if((java==true)&&(cpp==true))
				{
					both=true;
					//cout<<"kabhua\n";
					break;
				}
			}
			else
			{
				//cout<<"noneerror\n";
				both=true;
				break;
			}
		}
		
		if(both==true)
		{
				cout<<"Error!\n";
				//flag=false;
				//break;
		}
		else if(java==true)
		{
				for(int i=0;i<str.size();i++)
				{
					int x=(int)str[i];
					if((65<=x)&&(x<=90))
					{
						cout<<"_";
						cout<<(char)(x+32);
					}
					else
					{
						cout<<str[i];
					}
					
				}	
				cout<<endl;
		}
		else if(cpp==true)
		{
				for(int i=0;i<str.size();i++)
				{
					if(str[i]!='_')
					{
						cout<<str[i];
					}
					else
					{
						str[i+1]-=32;
					}
				}	
			cout<<endl;
		}
		else if(java==false&&cpp==false)
		cout<<str<<endl;
		
	}
	return 0;
}
