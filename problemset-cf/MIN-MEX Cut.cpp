#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int count=0;
		int n=s.size();
		for(int i=0; i<n-1; i++)
		{
			if(s[i]=='0' && s[i+1]=='1') count++;
		}
		if(s[n-1]=='0') count++;
//		cout<<count<<endl;
		cout<<min(count,2)<<endl;
	}
}
