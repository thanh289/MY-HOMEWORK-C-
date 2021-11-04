#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool P(ll m,ll target)
{
	if(m*m>target) 
		return true;
	return false;
}

int binary(ll n)
{
	ll lo=0, hi=n;
	while(lo<hi)
	{
		ll mid=(lo+hi)/2 + 1;
		if(P(mid, n) == true)
			hi=mid-1;
		else
			lo=mid;	
	}	
	return hi;
}

int main()
{
	while(true)
	{
	ll n; cin>>n;
	cout<<binary(n)<<endl; 
}
}
