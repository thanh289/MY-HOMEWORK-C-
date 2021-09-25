#include <iostream>
#include <ctime>	//for time()
#include <cstdlib>	//for rand() and srand()
using namespace std;

//gioi han so phan tu cua mang
#define MAX 1000
	
//ham truy van
void truyvan(int arr[], int n, int sum[])
{
	//khoi tao so ngau nhien
	srand(time(NULL));
	
	//nhap vao mang
	for(int i=0; i<n; i++)
		arr[i]= rand()%100;
	
	//in mang ra man hinh
	cout<<"Ta co day: "<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
		
	//tao mang cong don
	sum[0]=0;
	for(int i=1; i<=n; i++)
		sum[i]= sum[i-1]+ arr[i-1];
		
	//chi so doan truy van
	int left, right;
	//bien dem
	int T;
	cout<<"Nhap so lan truy  van: ";
	cin>>T;
	
	while(T>0)
	{
		cout<<"Nhap doan muon truy xuat: "<<endl;
		cin>>left>>right;
		
		cout<<"Gia tri doan muon truy xuat: ";
		cout<<sum[right+1]-sum[left]<<endl;
		
		T--;
	}
}

//ham main
int main()
{
	//khoi tao mang va so phan tu
	int my_array[MAX], sum[MAX];
	int n;
	cout<<"Nhap so phan tu cua day: ";
	cin>>n;
	
	//goi ham
	truyvan(my_array, n, sum);
	
return 0;	
}
