#include <iostream>
using namespace std;

//for array
const int MAX=1000;

//ham nhap mang
void nhapmang(int arr[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	cout<<"Nhap cac phan tu cua mang:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}


//ham xuat mang
void xuatmang(int arr[], int n)
{
	cout<<"Cac phan tu cua mang la: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
} 

//ham chia mang thanh 2 mang con chua so chan va so le
void split_arr(int arr[], int n, int A[], int &m, int B[],int &k)
{
	for (int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			A[m++]=arr[i]; //even number
		else
			B[k++]=arr[i]; //odd number
	}
}


int main()
{
	int my_array[MAX];
	int n_size;
	
	//nhap mang
	nhapmang(my_array, n_size);
	
	//xuatmang
	xuatmang(my_array, n_size);

	int m=0, k=0;
	int A[MAX], B[MAX];
	
	//chia 2 phan
	split_arr(my_array,n_size,A,m,B,k);
	
	cout<<"\nMang so chan:"<<endl;
	xuatmang(A,m);
	cout<<"\nMang so le:"<<endl;
	xuatmang(B,k);
	
	
return 0;	
}
