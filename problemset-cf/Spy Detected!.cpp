#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> v;
		for(int i=0; i<n; i++)
		{
			int x; cin>>x;
			v.push_back(x);
		}
		
		if(v[0] !=v[1] && v[0] !=v[2]) cout<<1<<endl;
		else
		{
			for(int i=1; i<n; i++)
			{
				if(v[0]!=v[i]) cout<<i+1<<endl;
			}
		}
	}
}

//cách 2 ta se sort lai vector roi kiem tra dau duoi 
