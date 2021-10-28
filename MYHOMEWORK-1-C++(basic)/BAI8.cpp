//BAI 8
#include <iostream>
using namespace std;


//ham sap xep bubblesort tang dan
int bubblesort_tang(int a[], int n)
{	
	/* y tuong: 
	1.xet moi cap so tu duoi len
	2.neu so dang truoc lon hon so dang sau thi dao vi tri cho nhau
	3.nguoc lai thi giu nguyen
	4.sau moi lan for ta thu dc mot so(hoac hon) dung tai vi tri i
	*/ 
	for(int i=0; i<=n-1;i++)
	{
		for (int j=n-1;j>i; j--)
		{
			if (a[j]<a[j-1])
				swap(a[j],a[j-1]);
		}
	}
	
	cout<<"mang sau khi sap xep la:"<<endl;
	for(int i=0; i<n;i++)
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
	cout<<"nhap so phan tu cua mang: "<<endl;
	cin>>n;
	
	//nhap cac phan tu cua mang
	cout<<"mang truoc khi sap xep la"<<endl; 
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}	
	
	bubblesort_tang(a,n);
	
	return 0;	
}
