//BAI 10
#include <iostream>
using namespace std;

//ham sap xep bubble giam dan
int bubblesort_giam(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if (a[j]>a[j-1])
				swap(a[j],a[j-1]);
		}
	}
	
	cout<<"mang sau khi sap xep la: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}



//ham main
int main()
{
	//khoi tao mang
	int a[100];
	
	//khai bao n
	int n;
	cout<<"nhap so phan tu cua mang:"<<endl;
	cin>>n;
	
	//nhap cac phan tu cua mang
	cout<<"mang truoc khi sap xep la:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}	
	
	bubblesort_giam(a,n);
	
	return 0;
}
