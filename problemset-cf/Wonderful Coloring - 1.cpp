#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		map<char, int> m;
		for(int i=0; i<s.size(); i++)
		{
			m[s[i]]++;
		}


		int count1=0, count2=0;
		for(map<char, int> :: iterator it=m.begin(); it!=m.end(); it++)
		{
			if((*it).second>=2) count1+=1;
			if((*it).second==1) count2+=1;
		}
		cout<<count1 + (count2/2)<<endl;
	}
}
