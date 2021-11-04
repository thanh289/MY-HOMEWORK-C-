#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;
int const k=1e6+1;
int n, m, index=0, ans=10000000;
int arr[500][500], sieve[k], prime[k];

//true, false
int P(int target, int x)
{
	if(prime[x]>=target)
		return true;
	return false;
}


//binary
int binary_search(int target)
{
	int lo=0, hi=index-1;
	while(lo<hi)
	{
		int mid=(lo+hi)/2;
		if(P(target, mid) ==true)
			hi=mid;
		else 
			lo=mid+1;
	}
	return prime[lo]-target;
}

//solve
void solve()
{
	//row
	for(int i=0; i<n; i++)
	{
		int cnt=0;
		for(int j=0; j<m; j++)
			cnt+=binary_search(arr[i][j]);
		ans=min(ans, cnt);
	}
	
	//column
	for(int j=0; j<m; j++)
	{
		int cnt=0;
		for(int i=0; i<n; i++) 
			cnt+=binary_search(arr[i][j]);
		ans=min(ans, cnt);
	}	
	
	cout<<ans<<endl;
}


int main()
{
	//sieve
	sieve[0]=1;
	sieve[1]=1;
	for(int i=2; i*i<k; i++)
		if(!sieve[i])
			for(int j=i*i; j<k; j+=i)
				sieve[j]=1;
				
	for(int i=2; i<k; i++)
		if(!sieve[i])
			prime[index++]=i;
	
	//input	
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) cin>>arr[i][j];
		
	solve();
}
