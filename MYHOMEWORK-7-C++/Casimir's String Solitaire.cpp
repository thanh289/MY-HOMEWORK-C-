#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin>>n;
	while(n--)
	{
		string s; cin>>s;
		int a=0, b=0, c=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='A') a++;
			else if(s[i]=='B') b++;
			else if(s[i]=='C') c++;
		}
		if (a+c==b) cout<<"YES"<<endl;
		else        cout<<"NO"<<endl;
	}
}
