#include <iostream>
using namespace std;

//hang phan tu cua mang
const int Max=1000;

//tien khai bao
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
int findTheFirstElem(int arr[],int n, int x);
void insert_sort (int arr[], int n);
void add_elem(int arr[], int &n, int pos, int y);
void delete_elem(int arr[], int &n, int pos);
void update_index(int arr[], int &n, int l, int r);


//ham main
int main()
{
	int my_array[Max];
	int n_size;
	
	//nhap mang
	nhapmang(my_array,n_size);
	//xuat mang
	xuatmang(my_array,n_size);
	
	
	
	//tim vi tri phan tu x
	int x;
	cout<<"\n\nNhap phan tu x muon tim: ";
	cin>>x;
	
	int ide= findTheFirstElem(my_array, n_size, x);
	if (ide!= -1)
		cout<<"x nam o vi tri thu "<<ide<<endl;
	else
		cout<<"Khong tim thay x"<<endl;
		
		
		
	//sap xep insert
	insert_sort (my_array, n_size);
	
	
	
	//chen phan tu vao mang
	int pos;
	cout<<"\n\nNhap vi tri can chen vao mang: ";
	cin>>pos;
	
	int y;
	cout<<"Nhap so muon chen vao mang: ";
	cin>>y;
	
	add_elem(my_array, n_size, pos, y);
	xuatmang(my_array, n_size);
	
	
	
	//xoa phan tu trong mang
	cout<<"\n\nNhap vi tri can xoa cua mang: ";
	cin>>pos;
	
	delete_elem(my_array, n_size, pos);
	xuatmang(my_array,n_size);
	
	
	
	//cap nhat cac phan tu moi trong mang
	cout<<"\n\nnhap doan muon thay doi:"<<endl;
	int left;
	int right;
	cin>>left>>right;
	
	update_index(my_array, n_size, left, right);
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
	cout<<"Cac phan tu cua mang la: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


//ham tim kiem
//neu tim thay thi in ra vi tri cua no
//neu khong tim thay in ra -1
int findTheFirstElem(int arr[],int n, int x)
{
	for (int i=0;i<n;i++)
	{
		if(arr[i]==x)
			return i;
	}
	
	return -1;
}


//ham sap xep tang dan (su dung insert sort)
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
	
	cout<<"\nThu tu cua mang sau khi sap xep la: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

//ham chen phan tu vao mang
//cac tham so  cua mang lan luot la: mang, so phan tu cua mang, vi tri muon chen, so muon chen
void add_elem(int arr[], int &n, int pos, int y)
{
	if (pos>=0  && pos <=n)
	{
		for(int i=n; i>pos; i--)
			arr[i]= arr[i-1];
		arr[pos]= y;
		n++;
	}
}

//ham xoa mot phan tu cua mang
//y tuong: xoa so o vi tri minh muon roi lui cac so dang sau ve 
void delete_elem(int arr[], int &n, int pos)
{
	if(pos>=0 && pos <=n)
	{
		for(int i=pos; i<n-1;i++)
			arr[i]=arr[i+1];
		n--;
	}
}

void update_index(int arr[], int &n, int l, int r)
{
	if(0<=l && r<n)
	{
		cout<<"Nhap cac phan tu moi"<<endl;
		for(int i=l; i<=r; i++)
		{
			cin>>arr[i];
		}
	}
}
