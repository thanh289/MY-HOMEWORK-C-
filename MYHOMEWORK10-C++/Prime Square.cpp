#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int prime[n][n];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++) prime[i][j]=0;

		for(int i=0; i<n; i++)
		{
			prime[i][n-i-1]=1;
			prime[i][i]=1;
		}
		
		if(n%2==1)
		{
			prime[n/2][0]=1;
			prime[n/2][n-1]=1;
			prime[0][n/2]=1;
			prime[n-1][n/2]=1;
		}
		
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++) cout<<prime[i][j]<<" ";
			cout<<endl;
		}
	}
}
