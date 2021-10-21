#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b; cin>>a>>b;
		if(a==0 & b==0) cout<<0<<endl;
		else if(a==b) cout<<1<<endl;
		else
		{
			if((a%2==1 && b%2==0) || (a%2==0 && b%2==1)) cout<<-1<<endl;
			else cout<<2<<endl;
		}
	}
}
