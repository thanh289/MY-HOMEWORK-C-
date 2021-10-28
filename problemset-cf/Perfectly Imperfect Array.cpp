#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n, ans=0; cin>>n;
		for(int i=1; i<=n; i++)
		{
			int a; cin>>a;
			if(sqrt(a)!=int(sqrt(a))) ans=1;
		}

		if(ans==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
