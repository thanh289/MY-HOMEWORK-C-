#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int const k =100010;
int isPrime[k];
int arr[500][500], r[500][500], c[500][500];
int n, m;
int ans=10000000;

int main()
{
	//sieve
	isPrime[0]=1; isPrime[1]=1;
	for(ll i=2; i*i<k; i++)
		if(!isPrime[i])
			for(ll j=i*i; j<k; j+=i)
				isPrime[j]=1;
		
//	for(int i=94923; i<100000; i++)
//		if(!isPrime[i]) cout<<i<<endl;

	//input
	cin>>n>>m;
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<m; j++)
		{
			cin>>arr[i][j];
			//row
			r[i][j]=arr[i][j];
			//column
			c[i][j]=arr[i][j];
		}
	}
	
	//row
	for(ll i=0; i<n; i++)
	{
		int count=0;
		for(ll j=0; j<m; j++)
		{
			while(isPrime[r[i][j]])
			{
				r[i][j]++;
				count++;
			}
		}
		ans=min(ans, count);
	}
	
	//column
	for(ll j=0; j<m; j++)
	{
		int count=0;
		for(ll i=0; i<n; i++)
		{
			while(isPrime[c[i][j]])
			{
				c[i][j]++;
				count++;
			}
		}
		ans=min(ans, count);
	}
	
	cout<<ans<<"\n";
}
