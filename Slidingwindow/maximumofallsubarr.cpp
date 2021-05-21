#include<bits/stdc++.h>
using namespace std;

  vector<int> maxSlidingWindow(vector<int>& a, int k) {
  	int i=0,j=0;
  	list<int>l;
  vector<int>ans;
  	 while(j<=a.size())
  {
  	while(l.size()>0 && l.back()<a[j])
  	{
  		l.pop_back();
	  }
	  l.push_back(a[j]);
  
  if(j-i+1 < k)
  {
  j++;
}
else if(j-i+1==k)
{
	ans.push_back(l.front());
	cout<<l.front()<<" ";
if(l.front()==a[i])
{
	l.pop_front();
	i++;
	j++;
}
}
}
cout<<ans[(l.front()];
}

int main()
{
  int n,k;
  vector<int> a(100);

  cin>>n;
  for(int i=0; i<a.size(); i++)
  {
  	cin>>a[i];
  }
  cin>>k;
  maxSlidingWindow(a,k)<<" ";
 
}
