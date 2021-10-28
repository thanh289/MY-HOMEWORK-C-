#include <iostream>
using namespace std;

//hang phan tu cua mang
const int MAX=1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void add_first_elem(int arr[], int &n, int y);
void add_last_elem(int arr[], int &n, int y);
void add_middle_elem(int arr[], int &n, int y);


//ham main
int main()
{
	int my_array[MAX];
	int n_size;
	
	
	//nhap mang
	nhapmang(my_array, n_size);
	//xuat mang
	xuatmang(my_array, n_size);
	
	//chen vao dau
	int a;
	add_first_elem(my_array, n_size, a);
	xuatmang(my_array, n_size);

	//chen vao cuoi
	add_last_elem(my_array, n_size, a);
	xuatmang(my_array, n_size);
	
	//chen vao giua
	add_middle_elem(my_array, n_size, a);
	xuatmang(my_array, n_size);
	
	
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


//ham chen mot phan tu vao dau
//cac tham so cua ham lan luot la mang, do dai mang, phan tu muon chen
void add_first_elem(int arr[], int &n, int y)
{
	cout<<"\n\nNhap phan tu muon chen vao dau: ";
	cin>>y;
	
	for(int i=n; i>0; i--)
		arr[i]= arr[i-1];
	arr[0]= y;
	n++;
}


//ham chen mot phan tu vao cuoi
void add_last_elem(int arr[], int &n, int y)
{
	cout<<"\n\nNhap phan tu muon chen vao cuoi: ";
	cin>>y;
	
	arr[n]= y;
	n++;
}


//ham chen mot phan tu vao giua
void add_middle_elem(int arr[], int &n, int y)
{
	cout<<"\n\nNhap phan tu muon chen vao giua: ";
	cin>>y;
	
	for(int i=n; i> n/2; i--)
		arr[i]= arr[i-1];
	arr[n/2]= y;
	n++;
}




