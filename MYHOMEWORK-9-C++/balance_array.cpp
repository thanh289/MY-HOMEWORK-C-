#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int sum_be=0, sum_fr=arr[n-1];
	for(int i=0; i<n-1; i++) sum_be+=arr[i];
	
	while(true)
	{
		int ans=sum_be-sum_fr;		
		if(ans!=arr[n-2])
		{
			sum_be-=arr[n-2];
			sum_fr+=arr[n-2];
			n=n-1;
		}
		else break;
	}
	cout<<n-2<<endl;
}
