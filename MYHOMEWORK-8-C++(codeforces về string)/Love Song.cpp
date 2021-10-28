//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, q; cin>>n>>q;
//	string s; cin>>s;
//	map<char, int> m;
//
//	while(q--)
//	{
//		int l,r; cin>>l>>r;
//		int count=0;
//		for(int i=l-1; i<r; i++)
//		{
//			count+=s[i]-96;	
//		}
//		cout<<count<<endl;
//	}
//}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,l,r, a[100002]; cin>>n>>q;
	string s; cin>>s;
	a[0]=0;
	
	for(int i=0; i<=n; i++)
		{
			a[i]=a[i-1]+(s[i-1]-96);
		}
	
	while(q--)
	{	
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
}

