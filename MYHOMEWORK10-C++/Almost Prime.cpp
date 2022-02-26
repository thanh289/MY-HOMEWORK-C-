#include <bits/stdc++.h>
using namespace std;
 
#define N 3010
int isPrime[N];
int ans = 0;
int main(){
	int n;  cin>>n;
	for(int i=2; i*i<=n; i++){
		if(!isPrime[i]){
			for(int j=i*i; j<=n; j+=i)
				isPrime[j] = 1;
		}
	}
	
	vector <int> v;
	for(int i=2; i<=n; i++){
		if(!isPrime[i]) v.push_back(i);
	}
	
//	for(int i=0; i<v.size(); i++) cout<<v[i]<<endl;	
	for(int i=6; i<=n; i++){
		int divisor = 0;
		for(int j=0; j<v.size(); j++){
			if(i<=v[j]) break;
			if(i%v[j]==0) divisor++;
		}
		
		if(divisor==2) ans++;
	}
	cout<<ans;
}
 
