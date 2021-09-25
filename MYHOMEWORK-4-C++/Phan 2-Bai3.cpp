#include <iostream>
#include <algorithm> //for sort()
#include <vector>	//for vector 
using namespace std;

#define MAX 10000
//trwocs khi xem cua sol

/*
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
			sum1-=a[i];  //tong cua f(a)
			sum2+=a[i];		//trong cua f(b)

			ava= (sum1/(n-i-1))+(sum2/(i+1)); //gia tri tb
			if(ava>tempo)
				tempo=ava; //in ra gia tri trung binh lon nhat
		}
		
		cout<<"Gia tri trung binh lon nhat la: "<<tempo;
		
		t--; //bien dem
	}	
}
*/

void solve()
{
	int n;
	//nhap so phan tu cua day
	cin>>n;
	
	//tao vector (co the dung mang 1 chieu)
	vector <long long> A(n);
	
	//nhap cac phan tu vao day
	for(int i=0; i<n; i++)
		cin>>A[i];
	
	//sap xep lai day	
	sort(A.begin(), A.end());
	
	//tao ra f(a) va f(b) theo de bai
	long double sum1= 0, sum2=0;
	//luu tong gia tri day vao f(b)
	for(int i=0; i<n; i++)
		sum2+= A[i];
	
	//gan vao bien  ket qua voi gia tri la gioi han yeu cau bai toan
	long double ans=-1e18;
	
	for(int i=0; i<n-1; i++)
	{
		//lay tung phan tu cua f(b) sang f(a) den khi tim dc 
		//gia tri lon nhat theo yeu cau bai toan
		sum2 -= A[i];
		sum1 += A[i];
		
		if(ans < sum1/(i+1) + sum2/(n-i-1))
			ans = sum1/(i+1) + sum2/(n-i-1);
	}
	
	//in ket qua ra man hinh
	cout<<ans<<endl;
}

int main()
{
	int T=1;
	//nhap so lan kiem tra
	cin>>T;
	while(T--)
	{
		//goi ham
		solve();
	}
return 0;
}
