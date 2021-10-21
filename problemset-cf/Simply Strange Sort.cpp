#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> v, v1; int count=0;
		for(int i=0; i<n; i++)
		{
			int x; cin>>x;
			v.push_back(x);
		}
		
		v1=v;
		sort(v1.begin(),v1.end());
		//có hàm is_sorted
		
		while(v1!=v)
		{
			//i=count%2 là dê k xay ra vong lap vo han
			//vi du 3 2 1-> 2 3 1 neu de i =0 thì lap vo han 2 3 1 nen i=1 thì 2 1 3 roi i =0 thi 1 2 3
			for(int i=count%2; i<n-1; i+=2) 
			
			{
				if(v[i]>v[i+1]) swap(v[i],v[i+1]);
			}
			count++;
		}
		cout<<count<<endl;
	}
}
