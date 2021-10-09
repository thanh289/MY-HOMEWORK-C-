#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin>>n;
	string s; cin>>s;
	
	//chuyen chu hoa ve chu thuong -> de kiem tra hon
	for(int i=0; i<n; i++)
	{
		if(s[i]<=90)
			s[i]=s[i]+32;
	}
	
	
	int a=97;
	for(int i=0; i<n; i++)
	{
		if(s[i]==a)
		{
			i=-1;
			a++;
		}
	}
	
	if(a==123) cout<<"YES";
	else if(a<123) cout<<"NO";
return 0;	
}
