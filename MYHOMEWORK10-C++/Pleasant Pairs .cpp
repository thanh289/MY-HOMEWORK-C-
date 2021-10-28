#include <bits/stdc++.h>
using namespace std;
int main()
{
//cach nay timelimit
//	int t; cin>>t;
//	while(t--)
//	{
//		int n; cin>>n;
//		int a[n+1];
//		for(int i=1; i<=n; i++) cin>>a[i];
//		
//		int ans=0;
//		for(int i=1; i<=n; i++)
//		{
//			for(int j=i+1; j<=n; j++)
//				if(a[i]*a[j]==i+j) ans++;
//		}
//		cout<<ans<<endl;
//	}


//tinh chat: if a[i]*a[j]=i+j -> (i+j) % a[i]==0 and (i+j) % a[j]==0
//code co tham khao moi lam dc .__.
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int long long a[n+1];
		for(int i=1; i<=n; i++) cin>>a[i];
		
		int ans=0;
		for(int i=1; i<=n; i++)
		{
			for(int j=a[i]-i; j<=n; j+=a[i])
				if(j>0)
					if(i<j && a[i]*a[j]==i+j) ans++;
		}
		cout<<ans<<endl;
	}
}
