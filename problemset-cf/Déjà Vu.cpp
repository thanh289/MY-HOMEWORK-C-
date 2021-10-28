#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int i,n=s.size();
		for(i=0; i<n; i++)
		{
			if(s[i]!=97) break;
		}
		if(i==n) cout<<"NO"<<endl;
		else 
		{
			s.insert(n-i,"a");
			cout<<"YES"<<endl;
			cout<<s<<endl;
		}
	}
}
