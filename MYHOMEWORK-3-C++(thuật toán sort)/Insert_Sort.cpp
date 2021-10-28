#include <iostream>
#include <cstdlib> //for srand() and rand()
#include <ctime> //for time()

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

//ham sap xep insert
void insertsort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int tempo=arr[i];
		int j=i-1;
		while(j>=0 && arr[j] > tempo)
		{
			arr[j+1]=arr[j];
			j=j-1;	
		}
		arr[j+1]=tempo;
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
	
	//sap xep lai
	insertsort(my_array, MAX);
	cout<<"\nMang sau khi sap xep la: ";
	xuatmang(my_array, MAX);
	
return 0;
}
