#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//y tuong: luu so lan xuat hien cac phan tu theo doan vao mot mang roi lay gia tri phu hop
//vi du:
//	input: 
//	9
//	2 2 1 1 1 2 2 2 2
//	
//ta se co duoc mang arr: {2,3,4}
	
	
int main()
{
	signed int n; cin>>n;
	
	//su dung mang luu so lan xuat hien phan tu cua tung doan
	signed int arr[100000];
	for(int i=0; i<n; i++)
		arr[i]=1;
	
	//su dung vector nhap cac phan tu
	vector <signed int> vec;
	
	for(int i=0; i<n; i++)
	{
		signed int x; cin>>x;
		vec.push_back(x);
	}
	
	int k=0;
	for(int i=1; i<n; i++)
	{
		if(vec[i] == vec[i-1])
		{
			arr[k]++;
		}
		
		if(vec[i] != vec[i-1] )
		{
			k++;
		}
	}
	
	
	//o moi lan so sanh, dap an la 2 lan ket qua nho hon
	int tempo=0, ans=0;
	for(int i=1; i<=k; i++)
	{
		if(arr[i]==arr[i-1])
		{
			tempo= arr[i]*2;
			ans= max(tempo, ans);
		}
		
		else if(arr[i]>arr[i-1])
		{
			tempo= arr[i-1]*2;
			ans= max(tempo, ans);
		}
		
		else
		{
			tempo= arr[i]*2;
			ans= max(tempo, ans);
		}
	}
	
	cout<<ans<<endl;
	
return 0;
}
