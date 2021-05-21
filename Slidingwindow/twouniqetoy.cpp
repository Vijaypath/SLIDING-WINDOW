#include<bits/stdc++.h>
using namespace std;
int twouniqetoy(string s,int k)
{
	map<char, int> mp;
	int i=0,j=0,mx=0;
	while(j<s.length()){
		mp[s[j]]++;
		if(mp[s[j]]<k)
		{
			j++;
		}
		else if(mp.size()==k)
		{
			mx=max(mx,j-i+1);
			j++;
		}
	if(mp.size()>k)
	{
		while(mp.size()>k)
		{
			mp[s[i]]--;
		else if(mp[s[i]]==0)
		{
			mp.erase(s[i]);
		}
		i++;
	}
}
j++;
	}
	return mx;
}
int main()
{
	int k;
	string s;
	cin>>s>>k;
	cout<<twouniqetoy(s,k);
}

