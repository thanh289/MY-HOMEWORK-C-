#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c; cin>>a>>b>>c;
		int k=max(a,b)-min(a,b);
//		cout<<k<<endl;
		int m=max(max(a,b),c);
//		cout<<m<<endl;
		if(m>k*2) cout<<-1<<endl;
		else
		{
			int d=c+k;
//			cout<<d<<endl;
			if(d<=k*2) cout<<d<<endl;
			else cout<<d-k*2<<endl;
		}
	}
}
