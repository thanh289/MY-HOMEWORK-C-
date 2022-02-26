
#include <bits/stdc++.h>
using namespace std;

#define N 1010
int isPrime[N];

int main(){
	for(int i=2; i*i<N; i++){
		if(!isPrime[i]){
			for(int j=i*i; j<N; j+=i)
				isPrime[j] = 1;		
		}
	}
	vector<int> v;
	for(int i=2; i<N; i++) 
		if(!isPrime[i])
			v.push_back(i);
	
	int n, k, ans=0;  cin>>n>>k;
	for(int i=0; i<v.size()-1; i++){
		int x = v[i]+v[i+1]+1;
		if(!isPrime[x] && x<=n) ans++;
		else if(x>n) break;
	}
	if(ans>= k) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}



