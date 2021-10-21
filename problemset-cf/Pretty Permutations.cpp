#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n+1];
		for(int i=1; i<=n; i++) arr[i]=i;
		if(n%2==0) for(int i=1; i<=n; i+=2) swap(arr[i], arr[i+1]);
		else
		{
			for(int i=1; i<=n-3; i+=2) swap(arr[i],arr[i+1]);
			swap(arr[n],arr[n-2]); swap(arr[n],arr[n-1]);
		}
		for(int i=1; i<=n; i++) cout<<arr[i]<<" ";
	}
}


//
//#import<bits/stdc++.h>
//using namespace std;
//int n,t;
//int main()
//{
//	for(cin>>t;t--;)
//	{
//		cin>>n;
//		for(int i=1;i<n-2;i+=2)cout<<i+1<<' '<<i<<' ';
//		if(n%2)cout<<n-1<<' '<<n<<' '<<n-2<<endl;
//		else cout<<n<<' '<<n-1<<endl;
//	}
//}
