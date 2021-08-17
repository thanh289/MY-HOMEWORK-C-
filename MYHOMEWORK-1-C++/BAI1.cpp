//BAI 1:
#include <iostream>
using namespace std;

int main()
{	
	//khoi tao mang 
	int a[100];
	
	//khai bao n
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	
	//nhap cac phan tu cua mang 
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	//in ra man hinh cac phan tu
	cout<<"cac phan tu cua mang la: ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
