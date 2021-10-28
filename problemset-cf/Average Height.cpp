#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> even;
		for(int i=0; i<n; i++)
		{
			int a; cin>>a;
			if(a%2==1) cout<<a<<" ";
			else even.push_back(a);
		}
		for(int i=0; i<even.size(); i++) cout<<even[i]<<" ";
		cout<<"\n";
	}
}
