//complexity: O(log(N))
#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int size_a, int target)
{
	int lo=0, hi=size_a-1;
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
	//cant find the value target in a[]
	return -1;
}

int main()
{
	int n; cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) 
		cin>>arr[i];
	sort(arr, arr+n);
	for(int i=0; i<n; i++) 
		cout<<arr[i]<<" ";
	int k; 
	cout<<"\nvalue you want find: "; cin>>k;
	cout<<"the value's position: "<<binary_search(arr, n, k)<<endl;
}
