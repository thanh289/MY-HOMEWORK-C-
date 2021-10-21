#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,sum=0; cin>>n;
		int a[n]; 
		
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0) cout<<-1<<endl;
		else
		{
			int count=0;
			int ava=sum/n;
			for(int i=0; i<n; i++) 
				if(a[i]>ava) count++;
			cout<<count<<endl;
		}
		
		
	}
}
