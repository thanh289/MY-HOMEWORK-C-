#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
		int win1=max(s1,s2);
		int win2=max(s3,s4);
		int third=max(min(s1,s2), min(s3,s4));
		if(third<win1 && third <win2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}
