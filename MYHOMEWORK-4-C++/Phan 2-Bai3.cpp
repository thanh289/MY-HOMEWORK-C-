#include <iostream>
#include <algorithm> //for sort()
using namespace std;

#define MAX 10000

int main()
{
	//khai bao mang
	int a[MAX];
	
	//nhap so truong hop t
	int t;
	cout<<"Nhap so truong hop: ";
	cin>>t;
	
	
	while(t>0)
	{
		//nhap so so phan tu cua mang
		int n;
		cout<<"\n\nNhap so phan tu cua day: ";
		cin>>n;
		
		//nhap phan tu vao mang
		cout<<"Cac phan tu cua day: "<<endl;
		for(int i=0; i<n; i++)
			cin>> a[i];
			
		//sap xep lai mang
		sort(a, a+n);
			
		double sum=0;
		for(int i=0; i<n; i++)
		{
			sum=sum+a[i]; //tong cua day
		}
	
		double sum1=sum; 
		double sum2=0;
		double ava, tempo=-10e9; //bien trung binh va bien tam
		for(int i=0; i<n-1; i++)
		{
			sum1=sum1-a[i];  //tong cua f(a)
			sum2+=a[i];		//trong cua f(b)

			ava= (sum1/(n-i-1))+(sum2/(i+1)); //gia tri tb
			if(ava>tempo)
				tempo=ava; //in ra gia tri trung binh lon nhat
		}
		
		cout<<"Gia tri trung binh lon nhat la: "<<tempo;
		
		t--; //bien dem
	}	
}
