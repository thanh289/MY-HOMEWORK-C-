#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s="";
		for(int i=0; i<n; i++)
		{
			s+="()";
		}
		if(n==1) cout<<s<<endl;
		if(n>1)
		{
			cout<<s<<endl;
			for(int i=1; i<n; i++)
			{
				swap(s[i],s[n*2-1-i]);
				cout<<s<<endl;	
			}
		}
	}
}
