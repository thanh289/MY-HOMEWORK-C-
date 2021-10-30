#include <bits/stdc++.h>
using namespace std;
const int m=1001;
int isPrime[m];
int main()
{	
	for(int i=2; i*i<m; i++)
		if(!isPrime[i])
			for(int j=i*i; j<m; j+=i) isPrime[j]=1;
			
	vector <int> v;	
	for(int i=2; i<m; i++)
		if(!isPrime[i]) v.push_back(i);
	
	int n, k, count=0;; cin>>n>>k;
	
	for(int i=0; v[i]<n; i++)
	{
		int x=v[i]+v[i+1]+1;
		if(!isPrime[x] && x<=n ) count++;
		if(x>n) break;
	}
	
	if(count>=k) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
