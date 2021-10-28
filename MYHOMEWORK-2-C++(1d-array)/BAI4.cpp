#include <iostream>
using namespace std;

//khai bao hang pham vi mang
const int MAX = 1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void insert_sort_halffirst_increase (int arr[], int n);
void insert_sort_halfsecond_decrease (int arr[], int n);


//ham main
int main()
{
	//khai bao
	int my_array[MAX];
	int n_size;
	
	//nhap mang
	nhapmang(my_array,n_size);
	
	
	//dung ham
	insert_sort_halffirst_increase (my_array, n_size);
	insert_sort_halfsecond_decrease (my_array, n_size);
	
	//xuat mang
	xuatmang(my_array,n_size);
	
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
	cout<<"Cac phan tu cua mang sau sap xep la: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


//ham sap xep nua day dau tang
void insert_sort_halffirst_increase (int arr[], int n)
{
	for(int i=0; i< n/2; i++)
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


//ham sap xep nua day dau giam
void insert_sort_halfsecond_decrease (int arr[], int n)
{
	for(int i=n/2; i<n; i++)
	{
		int tempo= arr[i];
		int j=i-1;
	
		while (j>=n/2 && arr[j]<tempo)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=tempo;
	}
}







