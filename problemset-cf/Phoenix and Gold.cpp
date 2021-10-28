#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n, x, sum=0; cin>>n>>x;
		vector <int> v,v_remain;
		for(int i=0; i<n; i++)
		{
			int a; cin>>a;
			v.push_back(a);
			sum+=v[i];
		}
		if(sum == x) cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			int ans=0;
			for(int i=0; i<n; i++)
			{
				ans+=v[i];
				if(ans==x) 
				{
					ans-=v[i];
					v_remain.push_back(v[i]);
				}
				else cout<<v[i]<<" ";
			}
			for(int i=0; i<v_remain.size(); i++) cout<<v_remain[i]<<" ";
		}
		cout<<endl;
	}
}
