#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		string s,p; cin>>s;
		s="0"+s+"0";
		p=s;
		while(m--)
		{
			for(int i=1; i<=n; i++)
			{
				if(p[i-1]+p[i+1]==97) s[i]=49;
			}
			
			if(p==s) break;
			p=s;
		}
		for(int i=1; i<=n; i++) cout<<s[i];
		cout<<endl;
	}
}
