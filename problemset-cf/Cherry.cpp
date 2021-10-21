#include <bits/stdc++.h>
using namespace std;
long long arr[100001];
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		for(int i=0; i<n; i++) cin>>arr[i];
		long long m=0;
		for(int i=0; i<n-1; i++) m=max(m,arr[i]*arr[i+1]);
		cout<<m<<endl;
	}
}
