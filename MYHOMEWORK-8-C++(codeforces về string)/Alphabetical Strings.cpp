#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		
		int l,r,b;
		l=0;
		r=s.size()-1;
		b=1;
		
		for(int i=r; i>=0; i--)
		{
			if(s[r]==i+97) r--;
			else if(s[l]==i+97) l++;
			else b=0;
		}		
		if(b==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
