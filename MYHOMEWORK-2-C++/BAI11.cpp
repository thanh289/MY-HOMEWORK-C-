#include <iostream>
using namespace std;

const int MAX=1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void count_x(int arr[], int n, int x);
void insert_sort(int arr[], int n);
void find_min_position(int arr[], int n, int x);


//ham main
int main()
{
	int my_array[MAX];
	int n_size;
	
	//nhap xuat mang
	nhapmang(my_array,n_size);
	xuatmang(my_array,n_size);
	
	int x;
	cout<<"\nNhap mot so x bat ki: ";
	cin>>x;
	
	//ham dem x
	count_x(my_array, n_size, x);
	

	find_min_position(my_array, n_size, x);

	
return 0;
}

//ham nhap mang
void nhapmang(int arr[], int &n)
{
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n;
	
	cout<<"Nhap cac phan tu cua mang:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
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

//ham dem so phan tu x
void count_x(int arr[], int n, int x)
{
	int count=0;
	for(int i=0; i<n; i++)
	{
		if (arr[i]==x)
			count= count+ 1;
	}
			cout<<"\nSo phan tu "<<x<<" co trong mang la: "<<count;
			cout<<"\nTong cac phan tu "<<x<<" co trong mang la: "<<x*count;

}

//ham sap xep insert
void insert_sort (int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int tempo= arr[i];
		int j=i-1;
	
		while (j>=0 && arr[j]>tempo)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=tempo;
	}
}



void find_min_position(int arr[], int n, int x)
{
	//sap xep lai mang
	insert_sort(arr,n);
	
	int count=0;
	for(int i=0; i<n; i++)
	{
		if (arr[i]<x)
			count= count+1;
	}
	cout<<"\n";
	cout<<x<<" nho thu "<<count+1<<" trong mang"<<endl;
}
