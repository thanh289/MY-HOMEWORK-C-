#include <iostream>
using namespace std;

const int MAX = 1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void even(int arr[], int n);
void odd(int arr[], int n);
void divisible(int arr[], int n);
void update_index(int arr[], int &n, int l, int r, int val);

//ham main
int main()
{
	int my_array[MAX];
	int n_size;
	
	//nhap mang
	nhapmang(my_array, n_size);
	//xuat mang
	xuatmang(my_array, n_size);
	
	//thao tac voi so chan
	even(my_array, n_size);
	
	//thao tac voi so le;
	odd(my_array, n_size);
	
	//tim cac so chia het n
	divisible(my_array, n_size);
	
	//cap nhat mot doan tu left den right mot gia tri value
	int left, right, value;
	update_index(my_array, n_size,left, right, value);
	xuatmang(my_array, n_size);
	
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
		cout<<arr[i]<<" ";
}


//ham tinh tong cac so chan va dem so so chan
void even(int arr[], int n)
{
	//bien tinh tong
	int sum= 0;
	
	//bien dem
	int count=0;
	for(int i=0; i<n; i++)
	{
		if (arr[i]%2==0)
		{
			sum += arr[i];
			count= count+1;
		}
			
	}
	
	cout<<"\n\nTong cac so chan cua mang la: "<<sum<<endl;
	cout<<"So cac so chan trong mang la: "<<count<<endl;	
}


//ham tinh tong cac so le va dem so so le
void odd(int arr[], int n)
{
	//bien tinh tong
	int sum= 0;
	
	//bien dem
	int count=0;
	for(int i=0; i<n; i++)
	{
		if (arr[i]%2==1)
		{
			sum += arr[i];
			count= count+1;
		}
			
	}
	
	cout<<"\n\nTong cac so le cua mang la: "<<sum<<endl;
	cout<<"So cac so le trong mang la: "<<count<<endl;	
}


//ham tim so chia het cho n
void divisible(int arr[], int n)
{
	cout<<"\nCac phan tu cua mang chia het cho "<<n<<" la: ";
	for (int i=0; i<n; i++)
	{
		if(arr[i] %n==0)
			cout<<arr[i]<<" ";
	}
}


//ham update tang gia tri phan tu trong mot doan
void update_index(int arr[], int &n, int l, int r, int val)
{
	cout<<"\n\nNhap gia tri muon tang: ";
	cin>>val;
	
	cout<<"Nhap doan muon tang them gia tri:"<<endl;
	cin>>l>>r;
	
	if(0<=l && r<n)
	{
		
		for(int i=l; i<=r; i++)
		{
			arr[i] =arr[i]+ val;
		}
	}
}

