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
	cout<<"\nCac phan tu cua mang la: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


//ham sap xep theo kieu bubble
void bubble_sort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		for (int j=n-1; j>i; j--)
		{
			if (arr[j]<arr[j-1])
				swap(arr[j], arr[j-1]);
		}
	}
	//in mang sau khi sap xep
	xuatmang(arr, n);
}

//ham chen phan tu vao mang
//cac tham so  cua mang lan luot la: mang, so phan tu cua mang, vi tri muon chen, so muon chen
void add_elem(int a[], int b[], int &n, int &m, int pos, int y)
{
	cout<<"\nNhap vi tri muon chen: ";
	cin>>pos;
	
	cout<<"Nhap gia tri muon chen: ";
	cin>>y;
	
	//pos can nam trong pham vi cua mang de chen
	//vong for nay cho mang 1
	if (pos>=0  && pos <=n)
	{
		for(int i=n; i>pos; i--)
			a[i]= a[i-1];
		a[pos]= y;
		n++;
	}
	
	//vong for nay cho mang 2
	if (pos>=0  && pos <=m)
	{
		for(int i=m; i>pos; i--)
			b[i]= b[i-1];
		b[pos]= y;
		m++;
	}
}


//ham main
int main()
{
	int a[MAX], b[MAX];
	int n_size, m_size;
	
	//nhap mang
	nhapmang(a,n_size);
	nhapmang(b,m_size);
	
	//xuatmang
	xuatmang(a,n_size);
	xuatmang(b,m_size);

	//sap xep
	cout<<"\n\nSau khi sap xep ta co : "<<endl;
	bubble_sort(a,n_size);
	bubble_sort(b,m_size);
	
	//chen
	int pos;
	int z;
	add_elem(a, b, n_size, m_size, pos, z);
	
	cout<<"Sau khi chen ta co mang: "<<endl;
	xuatmang(a,n_size);
	xuatmang(b,m_size);

return 0;
}

