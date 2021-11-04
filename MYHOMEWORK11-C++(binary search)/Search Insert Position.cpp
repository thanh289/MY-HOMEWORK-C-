#include <bits/stdc++.h>
using namespace std;

bool P(int a[], int x, int target)
{
	if(a[x] >= target) 
		return true;
	return false;
}

int binary1(int a[], int size_a, int target)
{
	int lo=0, hi=size_a-1;
	while(lo<hi)
	{
		int mid=(lo+hi)/2;
		if (P(a, mid, target) == true)
			hi=mid;
		else 
			lo=mid+1;
	}
	return lo;
}

int main()
{
	int n,k; cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	if(k>arr[n-1]) 
		cout<<n<<endl;
	else
		cout<<binary1(arr,n,k)<<endl;
	
}
