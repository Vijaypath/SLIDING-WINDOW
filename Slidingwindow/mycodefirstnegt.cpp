#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, a[1000],i=0,j=0;
	cin>>n;
	queue<int>q;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cin>>k;
	while(j<=n-1)
	{
		if(a[j]<0)
		{
			q.push(j);
		}
		if(!q.empty())
		{
			cout<<a[q.front()]<<" ";
		}
		else
		{
			cout<<"0"<<" ";
		}
			 if(a[i]==q.front())
			{
				q.pop();
			}
			else if(a[j]<0)
			{
				q.push(j);
			}
				if(!q.empty())
		{
			cout<<a[q.front()]<<" ";
		}
		else
		{
			cout<<"0"<<" ";
		}
		}
	}

