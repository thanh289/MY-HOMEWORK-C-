//BAI 11
#include <iostream>
using namespace std;

//ham sap xep insert giam dan
int insertsort_giam(int a[], int n)
{
	for(int i=1; i<n; i++)
	{
		int tempo =a[i];
		int j=i-1;
		while (j>=0 && a[j]<tempo)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=tempo;
	}
	
	cout<<"mang sau khi sap xep la:"<<endl;
	for(int i=0;i<n;i++)
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
	
	insertsort_giam(a,n);
	
	return 0;
}
