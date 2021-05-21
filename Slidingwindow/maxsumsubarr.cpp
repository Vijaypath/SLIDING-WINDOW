#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],s=0,k,i=0,j=0;
	int mx=INT_MIN;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	while(j<=n-1)
	{
		s=s+a[j];
		if(j-i+1<k)
		{
			j++;
		}
		else if(j-i+1==k)
		{
			mx=max(mx,s);
			s=s-a[i];
			j++;
			i++;
		}
	}
	cout<<mx;
}
