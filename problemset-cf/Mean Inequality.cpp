
#include <bits/stdc++.h>
using namespace std;
int a[60];
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		for(int i=1;i<=2*n;i++)cin>>a[i];
		sort(a,a+2*n+1);
		for(int i=1;i<=n;i++)cout<<a[i]<<' '<<a[n+i]<<' ';
		cout<<endl;
	}
}
