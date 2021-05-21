#include<bits/stdc++.h>
using namespace std;
int longestalluniqe(string s)
{
	map<char, int>mp;
	int i=0,j=0,mx=0;
	if(s.length()<1)
	{
		return 0;
	}
	while(j<s.length())
	{
		mp[s[j]]++;
		if(mp.size()==j-i+1)
		{
			mx=max(mx, j-i+1);
			j++;
		}
		else if(mp.size()<j-i+1)
		{
			while(mp.size()<j-i+1)
			{
				mp[s[i]]--;
			if(mp.size()==0)
			{
				mp.erase(s[i]);
			}
			i++;
			
		}
		j++;
	}
}
	return mx;
}
int main()
{
	string s;
	cin>>s;
	cout<<longestalluniqe(s);
}
