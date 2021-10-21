#include <bits/stdc++.h>
using namespace std;
#define max_n 1000010
bool isPrime[max_n];

int main()
{
	int n; cin>>n;
	for(int i=2; i<n; i++) isPrime[i]=true;
	
	for(int i=2; i*i<n; i++)
	{
		if(isPrime[i]==true)
		{
			for(int j=i*i; j<n; j+=i) isPrime[j]=false;
		}
	}
	
	for(int i=2; i<n; i++)
		if(isPrime[i]==true) cout<<i<<" ";
}

