#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int l,r; cin>>l>>r;
		int k=r/2+1;
		if(l<=k) cout<<r%k<<endl;
		else cout<<r%l<<endl;
	}
}
