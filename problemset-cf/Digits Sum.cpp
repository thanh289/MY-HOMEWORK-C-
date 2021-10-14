#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int ans;
		if(n%10==9) ans=n/10 +1;
		else ans=n/10;
		cout<<ans<<endl;
	}
}
