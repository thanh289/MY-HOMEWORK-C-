#include <bits/stdc++.h>
using namespace std;
//int main()
//{
//	int t; cin>>t;
//	while(t--)
//	{
//		int n; cin>>n;
//		vector <int> v;
//		for(int i=0; i<n; i++)
//		{
//			int x;cin>>x;
//			v.push_back(x);
//		}
//
//
//		int count=0;
//		for(int i=n-1;i>0; i--)
//		{
//			int a=max(v[i], v[i-1]);
//			int b=min(v[i], v[i-1]);
//			int c=ceil(a/b); 
//			if(c>2)
//			{
//				for(int j=n-1; j>=i;j--)
//				{
//					v[j+1]=v[j];
//				}
//				v[i]=(a+b)/2;
//				n++;
//				i=n;
//				count++;
//			}
//		for(int i=0; i<n; i++) cout<<v[i]<<" ";
//		cout<<endl;
//		}
//		cout<<count<<endl;
//	
//	}
//}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a; cin>>a;
		int count=0;
		for(int i=1; i<n; i++)
		{
			int b; cin>>b;
			int c=max(a,b);
			int d=min(a,b);
			while(d*2<c)
			{
				d*=2;
				count++;
			}
			a=b;
		}
		cout<<count<<endl;
	}
}
