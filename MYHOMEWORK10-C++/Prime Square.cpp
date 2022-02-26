#include <bits/stdc++.h>
using namespace std;

int a[101][101];

//c1: map look like: 
//1 0 0 0 0 1
//0 1 0 0 1 0
//0 0 1 1 0 0
//0 0 1 1 0 0
//0 1 0 0 1 0
//1 0 0 0 0 1

//int main(){
//	int t;  cin>>t;
//	while(t--){
//		int n; cin>>n;
//		for(int i=0; i<n; i++)
//			for(int j=0; j<n; j++) a[i][j]=0;
//			
//		for(int i=0; i<n; i++){
//			a[i][i] =1;
//			a[i][n-i-1]=1;
//		}
//		
//		if(n%2==1){
//			a[0][n/2]=1;
//			a[n/2][0]=1;
//			a[n-1][n/2]=1;
//			a[n/2][n-1]=1;
//		}
//		
//		for(int i=0; i<n; i++){
//			for(int j=0; j<n; j++){
//				cout<<a[i][j]<<" ";
//			}
//			cout<<endl;
//		}	
//	}
//}



//c2: map look like: 
//(1 1) 0 0 0 0
//0 (1 1) 0 0 0
//0 0 (1 1) 0 0
//0 0 0 (1 1) 0
//0 0 0 0 (1 1)
//1) 0 0 0 0 (1

int main(){
	int t; cin>>t;
		while(t--){
		int n; cin>>n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<(i==j || i==j-1 || (i==n-1 && j==0))<<(j==n-1 ? "\n" : " ");
			}
		}
	}
}

