#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string func(string str, string v)
{
	/*vector <int> v;
	int nsize=n.size();
	while(nsize!=0)
	{
		int x=n%10;
		n=n/10;
		v.push_back(x);
		nsize--;
	}
	reverse(v.begin(),v.end());
	int size=v.size();
	for(int i=0;i<size;i++)
	v.push_back(v[size-1-i]);
	*/
	int num=v.size();
	for(int i=0;i<num;i++)
	{
		v+=v[num-1-i];
	}
	cout<<v<<endl;
	string output;
	int size=v.size();
	
	for(int i=0;i<str.size();i++)
	{
		int j=i;
		if(j>=size)
		j=j%size;
	
		int x=(((int)str[i])-((int)v[j])+48-96);
		//cout<<"str "<<(int)str[i]<<endl;
		//cout<<"num "<<(int)v[j]<<endl;
		//cout<<"x "<<x<<endl;
		if(x<0)
		x+=26;
		//cout<<(char)(x+96)<<" ";
		if(x==0)
		x=26;
		output+=(char)(x+96);
	}
	v.clear();
	return output;
	
}
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		//int n;
		//cin>>n;
		string n;
		cin>>n;
		string str;
		cin>>str;
		cout<<func(str,n)<<endl;
		tc--;
	}
	return 0;
}
