#include <bits/stdc++.h>
using namespace std;
int main()
{
	int  t; cin>>t;
	while(t--)
	{
		int n, count=0; cin>>n;
		while(n--)
		{
			int a; cin>>a;
			if(a==1 || a==3) count++;
		}
		cout<<count<<endl;
	}
}
