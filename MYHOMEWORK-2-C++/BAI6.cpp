#include <iostream>
using namespace std;

//hang phan tu cua mang
const int Max=1000;

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

//ham xoa phan tu x cua mang
void Xoa_x(int a[], int &n,int x) 
{
    cout<<"\n\nNhap phan tu muon xoa khoi mang: ";
    cin>>x;
    
	for(int i=0; i<n; i++)
	{
		if(a[i] == x) 
		{
			//cu sau moi lan tim dc x, chung ta lai lui cac so dang sau ve truoc
			for(int j=i; j<n-1; j++) 
			{
				a[j] = a[j+1];
            }
			n--;
			i--;
        }
    }
}

//ham main
int main()
{
	int my_array[Max];
	int n_size;
	
	//nhap mang
	nhapmang(my_array, n_size);
	
	//xuat mang
	xuatmang(my_array, n_size);
	//xoa phan tu
	int a;
	Xoa_x(my_array, n_size, a);
	xuatmang(my_array, n_size);

return 0;
}
