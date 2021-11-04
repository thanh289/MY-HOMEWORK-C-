#include <bits/stdc++.h>
using namespace std;

bool P(int a[], int x, int target)
{
	if(a[x]>target) 
		return true;
	return false;
}

int binary_search(int lo, int hi, int target, int a[])
{
	while(lo<hi)
	{
		int mid=((lo+hi)/2) +1;
		if(P(a, mid, target)==true)
			hi=mid-1;
		else
			lo=mid;
	}
	
	if(P(a, hi, target) == true)
		return -1;
	return hi;
}
int main()
{
	int n=20, k=3;
	int a[]={1,1,1,1,2,2,3,3,3,3,3,3,5,5,5,5,5,6,6,7};
	cout<<"vi tri khoa: "<<binary_search(0, n-1, k, a);
}
