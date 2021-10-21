#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int l,g;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(x==1) l=i;
			if(x==n) g=i;
		}
		
		if(l>g) 
		{
			x=l;l=g;g=x;
		}
		cout<<min(n-l+1,min(g,l+n-g+1))<<endl;
	}
}

/*we have 3 ways to break
if there are n stones(and if index of lowest is greater than the greatest, swap it)
 
........lowest.....greatest........ (dots is stone)
(   l   )
(        g        )
(                n                )  

way 1: g steps
way 2: n-l +1  steps
way 3: n + (n-g+1) steps */
