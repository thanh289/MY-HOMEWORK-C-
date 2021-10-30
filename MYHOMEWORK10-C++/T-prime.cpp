#include <bits/stdc++.h>
using namespace std;
const int k=10e6 +10;
int isPrime[k];

int main()
{
	isPrime[0]=1;
	isPrime[1]=1;
	for(int i=2; i*i<k; i++)
		if(!isPrime[i])
			for(int j=i*i; j<k; j+=i) isPrime[j]=1;
			

	
	int t;cin>>t;
    while(t--)
    {
        long long x; cin>>x;
        long long y=sqrt(x);
        if(y*y==x && !isPrime[y])
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }

}

