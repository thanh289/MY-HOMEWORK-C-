#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> m;
		int k;
		while(n>0)
		{
			k=n%10;
			m.push_back(k);
			n/=10;
		}
		sort(m.rbegin(), m.rend());
		cout<<m[0]<<endl;	
	}
}
