#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int xa, ya, xb, yb, xp, yp;
		cin>>xa>>ya>>xb>>yb>>xp>>yp;
		if(xa==xb && xa==xp && yp<max(ya, yb) && yp>min(ya, yb)) cout<<max(ya,yb)-min(ya,yb)+2<<endl;
		else if(ya==yb && ya==yp && xp<max(xa, xb) && xp>min(xa, xb)) cout<<max(xa,xb)-min(xa,xb)+2<<endl;
		else cout<<abs(xa-xb)+abs(ya-yb)<<endl;
	}
}
