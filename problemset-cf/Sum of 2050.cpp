#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long n; cin>>n;
		if(n%2050!=0) cout<<-1<<endl;
		else
		{
			long long k=n/2050;
			int ans=0;
			while(k>0)
			{
				ans+=k%10;
				k=k/10;
			}
			cout<<ans<<endl;
		}
	}
}
