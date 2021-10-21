#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int h,w; cin>>h>>w;
		int arr[h+1][w+1];
		
		for(int i=1; i<=h; i++)
			for(int j=1; j<=w; j++)
				arr[i][j]=0;
		for(int i=3; i<h; i+=2)
		{
			arr[i][1]=1;
			arr[i][w]=1;
		}
		
		for(int i=1; i<=w; i+=2)
		{
			arr[1][i]=1;
			arr[h][i]=1;
		}
		
		if(h%2==0)
		{
			arr[h][1]=0; arr[h][2]=0;
			arr[h][w]=0; arr[h][w-1]=0;
		}
				for(int i=1; i<=h; i++)
		{
			for(int j=1; j<=w; j++)
				cout<<arr[i][j];
			cout<<endl;
		}
	}
}
