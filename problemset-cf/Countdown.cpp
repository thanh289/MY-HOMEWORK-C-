#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		int sum=0,count=0;
		for(int i=0; i<n; i++) sum+=s[i]-48;
		for(int i=0; i<n;i++)
		{
			if(s[i]!=48) count++;
		}
		if(s[n-1]==48) cout<<count+sum<<endl;
		else cout<<count+sum-1<<endl;
		
	}
}
