#include <iostream>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s1,s2; cin>>s1>>s2;
		for(int i=0; i<n; i++)
		{
			if(s1[i]=='1') s1[i]=s2[i];
		}
		int count=0;
		for(int i=0; i<n; i++)
		{
			if(s1[i]=='1') count++;
		}
		if(count==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
