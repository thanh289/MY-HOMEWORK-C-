#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k,m;
		string s;
		cin>>n>>k>>s;
		//ta co the viet m<n/2 -1 nhung vi neu n le k dc nen viet nhu nay
		for(m=0; m<n-m-2 && s[m]==s[n-m-1];)m++;
		if(m>=k)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
