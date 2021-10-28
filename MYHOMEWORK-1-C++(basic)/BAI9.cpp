//BAI 9
#include <iostream>
using namespace std;

//ham sap xep insert tang dan
int insertsort_tang(int a[], int n)
{
	for(int i=1; i<n; i++)
	{
		int tempo =a[i];
		int j=i-1;
		
		while(j>=0 && a[j]>tempo)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=tempo;
	}
	
	cout<<"mang sau khi sap xep la: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout <<endl;	
}

//ham main
int main()
{
	//khoi tao mang 
	int a[100];
	
	//khai bao n
	int n;
	cout<<"nhap so phan tu cua mang: "<<endl;
	cin>>n;
	
	//nhap cac phan tu cua mang
	cout<<"mang truoc khi sap xep la"<<endl; 
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}	
	
	insertsort_tang(a,n);
	
	return 0;	
}
