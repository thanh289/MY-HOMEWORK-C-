//BAI 4
#include <iostream>
using namespace std;

//tao ham
void sum(int a[],int n)
{
	//in ra man hinh cac phan tu
	cout<<"cac phan tu cua mang la: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	//tinh tong cac phan tu
	int sum=0;
	for (int i=0; i<n;i++)
	{
		sum = sum + a[i];
	}
	cout<<"\ntong cac phan tu cua mang la: "<<sum;	
}

//ham main
int main()
{
	//khai bao mang
	int a[100];
	
	//khai bao n
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	
	//nhap cac phan tu cua mang
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//dung ham sum
	sum(a,n);
	
	return 0;
}
