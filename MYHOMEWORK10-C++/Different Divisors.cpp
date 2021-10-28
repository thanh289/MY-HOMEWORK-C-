#include <bits/stdc++.h>
using namespace std;
#define k 100001
int isPrime[k];

//y tuong :
//b1: sang nguyen to
//b2: so thoa man ycau de bai la so co 4 uoc, 1, chinh no (n) va 2 uoc nguyen to i,j thoa man i*j=n
int main()
{
	for(int i=2; i*i<k; i++)
		if(!isPrime[i])
			for(int j=i*i; j<k; j+=i) isPrime[j]=1;
	

	int t; cin>>t;
	while(t--)
	{
		int d; cin>>d;
		int i, j;
		for(i=d+1;isPrime[i];) i++;
		for(j=i+d;isPrime[j];)j++;
		cout<<i*j<<endl;
	}
}
