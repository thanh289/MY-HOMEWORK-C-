#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int size_a, int target)
{
	int lo=1, hi=size_a;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		if(a[mid]==target) 
			return mid;
		else if (a[mid] < target)
			lo=mid+1;
		else 
			hi=mid-1;
	}
	return -1;
}

int main()
{
	int n, target; cin>>n>>target;
	int arr[n+1];
	for(int i=1; i<=n; i++) cin>>arr[i];
	for(int i=1; i<=n; i++)
	{
		int a=arr[i], b=target-arr[i];
		int m=binary_search(arr, n, b);
		if(m != -1 && m != i)
		{
			cout<<i<<" "<<m;
			break;
		}
	}
}
