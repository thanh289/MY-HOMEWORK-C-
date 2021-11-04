#include <bits/stdc++.h>
using namespace std;

//array, size_array, day, weight_can_carry
int P(int a[], int n, int d, int w)
{
	int count=1, total=0;
	for(int i=0; i<n; i++)
	{
		total+=a[i];
		if(total>w)
		{
			count++;
			total=0;
			i-=1;	
		}
	}
	if(count<=d) 
		return true;
	return false;
}

//array, size_array, highest_weight, sum_weight, day
int binary(int a[], int n, int max_w, int sum_w,int d)
{
	int lo=max_w, hi=sum_w;
	while(lo<hi)
	{
		int mid=(lo+hi)/2;
		if(P(a,n,d,mid) == true)
			hi=mid;
		else
			lo=mid+1;
	}
	return lo;
}


int main()
{
	int n, d, largest=0, sum=0; cin>>n>>d;
	int weight[n];
	for(int i=0; i<n; i++) 
	{
		cin>>weight[i];
		sum+=weight[i];
		largest=max(largest, weight[i]);
	}

	cout<<binary(weight,n,largest,sum,d);

}
