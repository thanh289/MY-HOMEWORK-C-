//#include <bits/stdc++.h>
//using namespace std;
//
//#define N 1000010
//int isPrime[N];
//
//int main(){
//	int n; cin>>n;
//	
//	for(int i = 2; i*i < n; i++){
//		if(!isPrime[i]){
//			for(int j = i*i; j < n; j += i)
//				isPrime[j] = 1;
//		}
//	}
//	
//	vector <int> v; 
//	for(int i = 2; i < n; i++){
//		if(!isPrime[i]) v.push_back(i);
//	}
//	
//
//	
//	for(int i = 0; i < v.size(); i++){
//		int t = 0;
//		while(n % v[i] == 0){
//			t++;
//			n = n/v[i];
//		}
//		if(t > 0)
//			cout<<v[i]<<"^"<<t<<"*";
//	}
//	cout<<"1";
//	
//	
//}


//C2:
#include <bits/stdc++.h>
using namespace std;

#define N 10000000
int isPrime[N];

int main(){
	int n; cin>>n;
	
	for(int i=2; i*i<=n; i++){
		if(!isPrime[i]){
			for(int j=i*i; j<=n; j+=i)
				isPrime[j] = i;
		}
	}
	
	for(int i=2; i<=n; i++){
		if(!isPrime[i]) isPrime[i] = i;
	}
	
	vector <int> v;
	while(n!=1){
		v.push_back(isPrime[n]);
		n /= isPrime[n];
	}
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<"*";
	}
	cout<<"1";
}
