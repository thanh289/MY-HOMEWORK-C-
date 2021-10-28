#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n, count=0; cin>>n;
		string s; cin>>s;
		
		for(int i=0; i<n-1; i++)
			if(s[i]!=s[i+1]) count++;
		set <char> letter;
		for(int i=0; i<n; i++)
			letter.insert(s[i]);
		if(count==letter.size()-1) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
