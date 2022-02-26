#include <bits/stdc++.h>
using namespace std;

int main(){
	//sang nguyen to tren doan [l,R]
	int L, R; cin>>L>>R;
	
	//x l� m�t s� nguy�n t� <=> isPrime[x-L] l� true
	vector<bool> isPrime(R-L+1, true);
	for(long long i=2; i*i<=R; i++){
		//c�ng thuc t�m b�i min cua i >= left
		for(long long j = max(i*i, (L+i-1)/i*i); j<=R; j+=i){
			isPrime[j-L] = false;
		}
	}
	
	if(L <= 1){
		isPrime[1-L] = false;
	}
	
	for(long long x = L; x <= R; x++){
		if(isPrime[x-L]) cout<<x<<endl;
	}
}
