#include <iostream>
using namespace std;

const int MAX= 1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void new_position(int arr[], int brr[], int n);
void reverse(int arr[], int n);

//ham main
int main()
{
	int my_array[MAX], second_array[MAX];
	int n_size;
	
	//nhap xuat mang
	nhapmang(my_array,n_size);
	xuatmang(my_array,n_size);
	
	//dao mang theo vi tri
	new_position(my_array, second_array, n_size);

	//dao mang (reverse)
	reverse(second_array, n_size);
	
return 0;	
}



//ham nhap mang
//can su dung tham chieu de thay doi bien n_size
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

//ham dao phan tu theo vi tri
void new_position(int arr[], int brr[], int n)
{
	int tempo;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i==arr[j])
			{
				brr[j]=arr[i];	
			}
		}
	}
	cout<<"\nMang sau khi dao phan tu theo vi tri:"<<endl;
	xuatmang(brr,n);
}

//ham dao nguoc cac phan tu cua mang
void reverse(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>i; j--)
			swap(arr[j], arr[j-1]);
	}
	
	cout<<"\nMang sau khi dao nguoc:"<<endl;
	xuatmang(arr, n);
}
