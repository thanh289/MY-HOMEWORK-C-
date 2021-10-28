#include <iostream>
#include <ctime> //for time()
#include <cstdlib> //for rand() and srand()
using namespace std;

//ham nhap mang
void nhapmang(int arr[], int n)
{
	srand(time(NULL));
	for(int i=0; i<n; i++)
		arr[i]=rand();
}


//ham xuat mang
void xuatmang(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

//ham sap xep bubble sort
void bubblesort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if (arr[j-1] >arr[j])
				swap(arr[j-1], arr[j]);
		}
	}
}


//ham main
int main()
{
	//khai bao
	int MAX;
	cout<<"Nhap so phan tu cua mang: ";
	cin>>MAX;
	int my_array[MAX];
	
	//nhap xuat mang
	nhapmang(my_array, MAX);
	cout<<"Mang truoc khi sap xep la: ";
	xuatmang(my_array, MAX);
	
	//sap xep lai mang
	cout<<"\nMang sau khi sap xep la: ";
	bubblesort(my_array, MAX);
	xuatmang(my_array, MAX);
	
return 0;
}
