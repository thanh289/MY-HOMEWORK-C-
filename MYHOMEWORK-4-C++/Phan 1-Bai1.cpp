#include <iostream>
using namespace std;

//dinh nghia so phan tu mang
#define ROW 100
#define COL 100

//tien khai bao mang
void NhapMang(int arr[][COL], int &r, int &c);
void XuatMang(int arr[][COL], int r, int c);

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
	
return 0;	
}


//ham nhap mang
void NhapMang(int arr[][COL], int &r, int &c)
{
	//nhap so dong va cot muon in ra
	cout<<"Nhap so hang: ";
	cin>>r;
	cout<<"Nhap so cot: ";
	cin>>c;
	
	//nhap tung phan tu cho mang
	cout<<"Nhap cac phan tu cua mang: "<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>arr[i][j];
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
