#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n,pos;
		cin>>n>>pos;
		queue < pair<int,int> > q;
		priority_queue <int> pq;
		int x,num;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(i==pos)
			num=x;
			pq.push(x);
			q.push(make_pair(x,i));
		}
		long long time=0;
		pair <int,int> elem;
		while(pq.top()!=num)
		{
			while(q.front().first!=pq.top())
			{
				elem=q.front();
				q.pop();
				q.push(elem);
			}
			q.pop();
			//cout<<pq.top()<<endl;
			pq.pop();
			time++;
		}
	
		/*int size=q.size();	
		for(int i=0;i<size;i++){
			cout<<q.front().first<<" "<<q.front().second<<endl;
			elem=q.front();
			q.pop();
			q.push(elem);
		}*/
		
		while(1)
		{
			if((q.front().first)==num)
			{
				if(q.front().second==pos)
				{
					time++;
					break;
				}
				else
				time++;	
			}
			q.pop();
		}
		cout<<time<<endl;
		
		while(!pq.empty())
		pq.pop();
		while(!q.empty())
		q.pop();
	}
	return 0;
}
