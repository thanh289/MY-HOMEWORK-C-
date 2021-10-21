#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	int count=0;
	while(t--)
	{
		int arr[3]; for(int i=0; i<3;i++) cin>>arr[i];
		int b=0;
		for(int i=0; i<3;i++)
		{
			if(arr[i]==1)
			{
				b++;
			}
		}
		if(b>=2) count++;
	}
	cout<<count<<endl;
}
