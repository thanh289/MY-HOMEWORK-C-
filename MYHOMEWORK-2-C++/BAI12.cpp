#include <iostream>
using namespace std;

//hang phan tu cua mang
const int MAX=1000;

//ham xuat mang
void xuatmang(long long arr[], int n)
{
	cout<<"Cac phan tu cua mang la: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
		if (arr[i]<0)
			break;
	}
}


//ham fibonacci
void fibonacci(long long f[], int n)
{
	f[0]=0;
	f[1]=1;
	f[2]=1;
	int sum=0;
	for(int i=3; i<=n; i++)
	{
		f[i]=f[i-1]+ f[i-2];
	}
	
	xuatmang(f,n);
}


//ham main
int main()
{
	//khoi tao
	long long my_array[MAX];
	int n_size;
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n_size;

	//in ra man hinh mang chua day fibonacci
	fibonacci(my_array, n_size);

	return 0;		
}
