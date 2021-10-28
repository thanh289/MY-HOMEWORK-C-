#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string a, b; cin>>a>>b;
		vector <int> similar;
		
		for(int i=0; i<a.size(); i++)
		{
			for(int j=0; j<b.size(); j++)
			{
				int count=0;
				int n=i, m=j;
				while(a[n]==b[m] && n<a.size() && m<b.size())
				{
					count++;
					n++;m++;
				}
				similar.push_back(count);
			}
		}
		sort(similar.rbegin(), similar.rend());
		cout<<a.size()+b.size()-similar[0]*2<<endl;
	}
}
