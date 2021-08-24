#include <iostream>
#include <climits>
using namespace std;

const int MAX=1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void find_max_secondmax(int arr[], int n);
void find_min_secondmin(int arr[], int n);


//ham main
int main()
{
	int my_array[MAX];
	int n_size;
	
	//nhap xuat mang
	nhapmang(my_array,n_size);
	xuatmang(my_array,n_size);
	
	//tim so lon nhat
	find_max_secondmax(my_array, n_size);

	//tim so nho nhat
	find_min_secondmin(my_array, n_size);
	
	return 0;
}



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


//ham tim so lon nhat va so lon thu hai
void find_max_secondmax(int arr[], int n)
{
	int tempo =INT_MIN;
	//find max
	for(int i=0; i<n; i++)
	{
		if (arr[i]>tempo)
			tempo=arr[i];
	}
	cout<<"\nSo lon nhat cua mang la: "<<tempo<<endl;
	
	
	//find second max
	int tempo1=INT_MIN;
	for(int i=0; i<n; i++)
	{
		if (arr[i]<tempo && arr[i]>tempo1)
			tempo1=arr[i];
	}
	cout<<"So lon thu hai cua mang la: "<<tempo1<<endl;
}



//ham tim so nho nhat va nho nhat thu hai
void find_min_secondmin(int arr[], int n)
{
	//find min
	int tempo=INT_MAX;
	for(int i=0; i<n; i++)
	{
		if (arr[i]<tempo)
			tempo=arr[i];
	}
	cout<<"\nSo nho nhat cua mang la: "<<tempo<<endl;
	
	
	//find second min
	int tempo1= INT_MAX;
	for(int i=0; i<n; i++)
	{
		if (arr[i]>tempo && arr[i]<tempo1)
			tempo1=arr[i];
	}
	cout<<"So nho thu hai cua mang la: "<<tempo1<<endl;
}

