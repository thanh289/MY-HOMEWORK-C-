#include <iostream>
#include <ctime>  //for time()
#include <cstdlib> //for srand() and rand()
using namespace std;

//dinh nghia so phan tu mang
#define MAX 100

//ham nhap mang
void nhapmang(int arr[], int &n)
{
	//so phan tu mang
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n;
	
	//khoi tao so ngau nhien
	srand(time(NULL));
	
	//nhap mang
	for(int i=0;i<n; i++)
		arr[i]= rand() %100;		
}


//ham xuat mang
void xuatmang(int arr[], int &n)
{
	//in mang ra man hinh
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

//ham truy xuat
void test(int arr[], int &n)
{
	if(n<5)
		cout<<"\nSo can nhap phai lon hon hoac bang 5"<<endl;
	
	else
	{
		//nhap so lan truy van
		int k;
		cout<<"\nNhap so lan truy van: ";
		cin>>k;
		
		while(k>0)
		{
			//doan muon truy van
			int x,y;
			cout<<"\nNhap doan muon truy van: "<<endl;
			cin>>x>>y;
			
			//dieu kien
			if(x>=0 && y>=0 && x<n && y<n)
			{
				//tao bien tong
				int sum= 0;
				for(int i=x; i<=y; i++)
				{
					sum+= arr[i]; //tinh tong cac phan tu thuoc doan truy van
				}
				cout<<"Tong cua doan ["<<x<<";"<<y<<"] la: "<< sum<<endl;
			}
			
			else
				cout<<"\nVuot qua mang roi!"<<endl;
			//moi mot lan xong thi tru di boi day la so lan kiem tra
			k--;
		}
	}
}

//ham main
int main()
{
	//khai bao mang va so phan tu mang
	int my_array[MAX];
	int n_size;
	
	//nhap xuat mang
	nhapmang(my_array, n_size);
	cout<<"Ta co mang: ";
	xuatmang(my_array, n_size);
	
	//truy van
	test(my_array, n_size);
	
return 0;
}


