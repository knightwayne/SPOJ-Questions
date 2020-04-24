#include<iostream>
//#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

/*bool comp(pair <int,int> &a, pair <int,int> &b)
{
	if(a.first==b.first)
	return a.second<b.second;
	else
	return a.first>b.first;
}*/
int main()
{
	int tc;
	cin>>tc;
	while(tc)
	{
		int n,idx;
		cin>>n>>idx;
		//queue <int> q;
		//priority_queue < pair<int,int> > pq;
		vector <int> q;
		vector < pair<int,int> > pq;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			q.push_back(x);
			pq.push_back(make_pair(x,i));
		}
		sort(q.begin(),q.end());
		reverse(q.begin(),q.end());
		
		/*for(int i=0;i<n;i++)
		{
			cout<<pq[i].first<<" "<<pq[i].second<<endl;
		}
		cout<<"EndOfTimes\n";*/
		int t=0;
		while(true)
		{
			//cout<<"t "<<t<<endl;
			int a=pq.front().first;
			int b=pq.front().second;
			//cout<<q.front()<<" "<<pq.front().first<<" "<<pq.front().second<<endl;
			if(q.front()==pq.front().first)
			{
				//cout<<"if\n";
				//q.pop();
				q.assign(q.begin()+1,q.end());
				//pq.pop();
				pq.assign(pq.begin()+1,pq.end());
				t++;
				if(b==idx)
				{
					cout<<t<<endl;
					break;
				}
			}
			else
			{
				//cout<<"else\n";
				pq.assign(pq.begin()+1,pq.end());
				pq.push_back(make_pair(a,b));
			}
			
				
			//t++;
		}
		
		tc--;	
	}
	return 0;
}
