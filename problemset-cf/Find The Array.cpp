#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int sum=0;
		int count=0;
		for(int i=1;;i+=2)
		{
			if(sum>=n) break;
			sum+=i;
//			cout<<sum<<endl;
			count++;
		}
		cout<<count<<endl;
	}
}
