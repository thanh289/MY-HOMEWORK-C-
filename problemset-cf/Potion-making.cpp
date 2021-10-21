#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int k; cin>>k;
		int ans=100;
		for(int i=2; i<=k; i++)
		{
			while(ans%i==0 && k%i==0)
			{
				ans/=i;
				k/=i;
			}
		}
		cout<<ans<<endl;
	}
}
