#include <iostream>
using namespace std;

//hang phan tu cua mang
const int MAX=1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void find_max_sum(int arr[], int n, int k);


//ham main
int main()
{
	int my_array[MAX];
	int n_size;
	
	
	//nhap mang
	nhapmang(my_array, n_size);
	//xuat mang
	xuatmang(my_array, n_size);
	
	//tinh max tong day co do dai bang k 
	int k;
	find_max_sum(my_array, n_size, k);

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




//ham tim tong lon nhat day co do dai bang k
void find_max_sum(int arr[], int n, int k)
{
	//nhap k
	cout<<"\n\nNhap mot so bat ki: ";
	cin>>k;
	
	
	//tinh tong k phan tu dau tien cua mang
	int sum=0;
	for(int i=0; i<k; i++)
	{
		sum= sum+arr[i];
	}
	
	//luu tong vao bien tam tempo
	int tempo=sum;

	for(int i=0; i<n-k; i++)
	{
		//xoa so hang dau tien cua day con 
		//roi them phan tu sau do
		sum=sum- arr[i]+ arr[i+k];
		
		//neu tong sau ma lon hon tong truoc thi luu vao bien tam
		if (tempo<sum)
			tempo=sum;
			
	}
	cout<<"tong lon nhat cua day so co do dai bang "<<k<<" la "<<tempo;
}
