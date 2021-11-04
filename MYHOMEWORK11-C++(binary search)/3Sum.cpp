#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int lo, int hi, int target)
{
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		if(a[mid] == target)
			return mid;
		else if(a[mid] < target)
			lo=mid+1;
		else
			hi=mid-1;
	}	
	return -1;
}


int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]==arr[i+1]) continue;
		for(int j=i+1; j<n; j++)
		{
			int m=0-arr[i]-arr[j];
			int x=binary_search(arr,0,arr[n-1],m);
			if(x!=-1 && x!=i && x!=j)
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[x]<<endl;
		}
	}
	
}
