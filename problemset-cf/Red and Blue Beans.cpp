#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int r,b,d,ax,in,k; cin>>r>>b>>d;
		ax=max(r,b); in=min(r,b);
		k=ax/in;
		if(ax%in==0)
		{
			if(k-1<=d) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		
		else if(ax%in!=0)
		{
			if(k<=d) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
}
