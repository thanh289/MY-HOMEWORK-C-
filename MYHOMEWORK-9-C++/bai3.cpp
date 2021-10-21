#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
//Sàng Eratosthenes trên doan
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int l,r; cin>>l>>r;
		
		//x la so nguyen to <=> isPrime[x-l] ==true
		
		vector <bool> isPrime(r-l+1, true);
		for(long long i=2; i*i<=r; i++)
		{
		//voi sang nguyen to binh thg, j=i*i, nhung day la doan, ta can bat dau voi so l
		//k= (l-i+1)/i*i la so bat dau >=l, den mot luc nao do, i*i >k va ta se sang nhu binh thg
			for(long long j=max(i*i, (l+i-1)/i*i); j<=r; j+=i)
				isPrime[j-l] =false;
		}
		
		//so 1 ta phai xet rieng ra
		if(l==1) isPrime[0] =false;
		
		for(long long i=l; i<=r; i++)
			if(isPrime[i-l]==true) cout<<i<<endl;
	}
}
