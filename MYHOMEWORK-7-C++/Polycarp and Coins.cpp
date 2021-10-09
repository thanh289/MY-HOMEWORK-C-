#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while (t--)
	{
		int n; cin>>n;
		if(n%3==0)
			cout<<n/3<<" "<<n/3<<endl;
		
		if(n%3==1)
		{
			int a=(n-1)/3;
			cout<<a+1<<" "<<a<<endl;
		}
		
		if(n%3==2)
		{
			int b=(n-2)/3;
			cout<<b<<" "<<b+1<<endl;
		}
	}
return 0;
}
