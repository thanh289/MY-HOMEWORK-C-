#include <bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		for(int i=0; i<2*n; i++) cin>>a[i];
		int odd=0;
		for(int i=0; i<2*n; i++) if(a[i]%2==1) odd++;
		if(odd==n) cout<<"Yes"<<endl; else cout<<"No"<<endl;
 	}
}
