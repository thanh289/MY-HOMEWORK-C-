#include <bits/stdc++.h>
using namespace std;
#define k 100001

int main()
{
	//sieve
	vector<vector<int> > divisor(k);
	for(int i=1; i<k; i++)
		for(int j=i; j<k; j+=i) divisor[j].push_back(i);
	
	//input
	int l, r,ans=0; cin>>l>>r;
	for(int i=l; i<=r; i++)
	{
		int sum=0;
		for(int j=0; j<divisor[i].size(); j++)
			sum+=divisor[i][j];
		if(sum-i>i) ans++;
	}
	cout<<ans<<endl;
}

