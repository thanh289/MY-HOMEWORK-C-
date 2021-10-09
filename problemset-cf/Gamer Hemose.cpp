//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main()
//{
//	//test case
//	int t,w,h; cin>>t;
//	while(t--)
//	{
//		cin>>w>>h;
//		
//		vector <int> v;
//		for(int i=0; i<a.weapon; i++)
//		{
//			//dam vu khi
//			int x; cin>>x; 
//			v.push_back(x);
//		}
//		
//		//sap xep lai dam tu lon den be
//		sort(v.begin(), v.end());
//
//		int damage=0, j=0;
//		while(damage<h)
//		{
//			j++;
//			if(j%2==1) damage +=v[w-1];
//			else damage += v[w-2];
//		}
//		
//		cout<<j<<endl;
//	}
//	
//return 0;
//}



#include<bits/stdc++.h>
using namespace std;
int T;
int n,a[2005],b[2005];
int main(){
	
	cin>>T;
	while(T--){
		int h;
		cin>>n>>h;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		cout<< h/(a[n]+a[n-1]) *2  +   ( h % (a[n]+a[n-1]) + a[n] - 1)  /  a[n]<<"\n";
	}
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t,n,i,h;cin>>t;
//	while(t--)
//	{
//		cin>>n>>h;
//		int a[n];
//		for(i=0;i<n;++i) cin>>a[i];
//		sort(a,a+n);
//		cout<<( h / (a[n-1]+a[n-2]) *2 )   +   ( h % (a[n-1]+a[n-2]) > 0)   +  (h % (a[n-1]+a[n-2]) > a[n-1])<<'\n';
//	}
//}

