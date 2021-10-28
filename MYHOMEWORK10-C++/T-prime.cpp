#include <bits/stdc++.h>
using namespace std;
const int k=10e6 +10;
bool isPrime[k];

int sieve(int x)
{
	for(int i=2; i<k; i++) isPrime[i]=true;
	for(int i=2; i*i<k; i++)
		if(isPrime[i]==true)
			for(int j=i*i; j<k; j+=i) isPrime[j]=false;
			
//	vector <int> p;
//	for(int i=2; i<=k; i++)
//		if(isPrime[i]==true) p.push_back(i);
	
	int check;
	if(isPrime[x]==true) check=1;
	else check=0;
	return check;
}


int main()
{
    int t;cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long x; cin>>x;
        long long y=sqrt(x);
        if(y*y==x && sieve(y))
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
