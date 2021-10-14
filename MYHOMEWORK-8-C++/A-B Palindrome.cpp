#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,n; cin>>a>>b; n=a+b;
		string s; cin>>s;
		
		for(int i=0; i<n; i++)
			if(s[i]=='?') s[i]=s[n-i-1];
//		cout<<s<<endl;
		
		int z=0 ,o=0;
		for(int i=0; i<n; i++)
		{
			if(s[i]=='0') z++;
			else if(s[i]=='1') o++;
		}
		a-=z;
		b-=o;
//		cout<<a<<" "<<b<<endl;
		
		for(int i=0; i<n/2; i++)
		{
			if(s[i]==s[n-i-1] && s[i]=='?')
			{
				if(a>1) { s[i]='0'; s[n-i-1]='0'; a-=2;}
				else if(b>1) { s[i]='1'; s[n-i-1]='1'; b-=2; }
			}
		}
		
		for(int i=0; i<n; i++)
		{
			if(s[i]=='?')
			{
				if(a>0) { s[i]='0'; a-=1; }
				else { s[i]='1'; b-=1; }
			}
		}
//		cout<<s<<endl;
//		cout<<a<<" "<<b<<endl;
		

		string s1=s;
		reverse(s1.begin(),s1.end());
		if(s==s1 && a==0 && b==0) cout<<s<<endl;
		else cout<<-1<<endl;
	}
}
