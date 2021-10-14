#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		if(n==1) cout<<1<<" "<<1<<endl;
		else
		{
			int a=sqrt(n);
			int m=(a+1)*(a+1)-a;
			if(n<=m && n>a*a) 	 cout<<(a+1)-(m-n)<<" "<<a+1<<endl;
			else if(n>m)		 cout<<a+1<<" "<<(a+1)-(n-m)<<endl;
			else cout<<a<<" "<<1<<endl;
		}
	}
}
