#include <iostream>
#include <ctime>  //for time()
#include <cstdlib> //for srand() and rand()

using namespace std;

//dinh nghia so phan tu mang
#define ROW 100
#define COL 100

//ham nhap mang
void NhapMang(int arr[][COL], int &r, int &c)
{
	//khoi tao so ngau nhien
	srand(time(NULL));
	
	//nhap so dong va cot muon in ra
	cout<<"Nhap so hang: ";
	cin>>r;
	cout<<"Nhap so cot: ";
	cin>>c;
	
	//nhap tung phan tu cho mang
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			arr[i][j]= rand() %100;
		}
	}
}

//ham xuat mang
void XuatMang(int arr[][COL], int r, int c)
{
	//xuat tung phan tu cho mang
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void XuatMangDao(int arr[][COL], int r, int c)
{
	//tao ra mang moi de luu vao
	int new_arr[COL][ROW];
	
	//quy tac: doi i cho j la ok
	for(int i=0; i<c; i++)
	{
		for(int j=0; j<r; j++)
		{	
			new_arr[i][j]=arr[j][i];
		}
	}
	
	//in ra man hinh
	XuatMang(new_arr, c, r);
}

//ham main
int main()
{
	//khai bao mang
	int my_array[ROW][COL];
	//so phan tu dong va cot duoc su dung
	int row, column;
	
	//nhap xuat mang
	NhapMang(my_array, row, column);
	cout<<"Ta co mang: "<<endl;
	XuatMang(my_array, row, column);
	
	//sau khi dao ma tran
	cout<<"Mang sau khi dao la: "<<endl;
	XuatMangDao(my_array, row, column);
return 0;
}
