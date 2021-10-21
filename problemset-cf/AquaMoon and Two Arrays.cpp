#include <bits/stdc++.h>
using namespace std;

int a[100],b[100],c[100],d[100];
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++) cin>>b[i];

		int e=0, f=0;
		for(int i=0; i<n; i++)
		{
			while(a[i]>b[i])
			{
				a[i]--;
				c[e]=i+1;
				e++;
			}
			
			while(a[i]<b[i])
			{
				a[i]++;
				d[f]=i+1;
				f++;
			}
		}
		
		if(e==f) {
			cout<<e<<endl;
			for(int i=0; i<e;i++) cout<<c[i]<<" "<<d[i]<<endl;
		}
		else cout<<-1<<endl;
	}
}
