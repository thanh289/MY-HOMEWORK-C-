#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int ans=0;
		for(int i=1; i<=n; i++)
		{
			ans++;
			while (ans%10==3 || ans%3==0)
			ans++;
		}
		cout<<ans<<endl;
	}
	
}
