#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> v;
		for(int i=0; i<n; i++)
		{
			int x; cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		int ans=0;
		for(int i=1; i<n; i++)
			if(v[i]!=v[0]) ans++;
		cout<<ans<<endl;
	}
}
