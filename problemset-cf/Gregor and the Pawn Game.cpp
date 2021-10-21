#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s1,s2; cin>>s1>>s2;
		int count=0;
		for(int i=0; i<n; i++)
		{
			if(s2[i]==49)
			{
				if(s1[i]==48) count++;
				else if(s1[i]==49)
				{
					if(s1[i-1]==49) {count++; s1[i-1]=48;}
					else if(s1[i+1]==49){ count++; s1[i+1]=48;}
				}
			}
		}
		cout<<count<<endl;
	}
}
