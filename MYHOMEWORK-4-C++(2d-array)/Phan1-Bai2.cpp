#include <iostream>
#include <ctime>  //for time()
#include <cstdlib> //for srand() and rand()
#include <algorithm> //for sort()
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

//ham tinh tong cac phan tu tung hang cua mang
void tongHang(int arr[][COL], int r, int c)
{
	//tao mot mang khac de luu cac ket qua
	int save[1][r];
	
	//tao bien tong
	int sum= 0;
	
	//tinh tong tung hang
	for(int i=0;i<r;i++)
	{
		for(int j=0; j<c; j++)
		{
			sum+=arr[i][j];
		}
		
		//moi lan tinh xong mot hang thi luu vao 
		save[0][i]=sum;
		//reset lai bien tong de tinh hang khac
		sum=0;
	}
	
	//in cac tong ra man hinh
	cout<<"Tong cac phan tu tung hang cua mang la: ";
	for(int z=0; z<r; z++)
		cout<<save[0][z]<<" ";
}

//ham tim duong cheo mang 2 chieu
void diagonal(int arr[][COL], int r, int c)
{
	cout<<"\nCac phan tu duong cheo cua mang: ";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(i==j)
				cout<<arr[i][j]<<" ";
		}
	}
}

//ham in cac so ngoai bien cua ma tran
void sideOfArray(int arr[][COL], int r, int c)
{
	cout<<"\nCac so o ngoai bien cua ma tran la: ";

	//in cac phan tu o hang dau va hang cuoi
	for(int j=0; j<c; j++)
	{
		cout<<arr[0][j]<<" ";
		cout<<arr[r-1][j]<<" ";
	}
	
	//in cac phan tu o cot dau va cot cuoi
	//phai loai bo cac phan tu da trung lap o tren
	for(int i=1; i<r-1; i++)
	{
		cout<<arr[i][0]<<" ";
		cout<<arr[i][c-1]<<" ";
	}
}

//ham sap xep hang cua mang tang dan
void rowSort(int arr[][COL], int r, int c)
{
	//I don't k how to use sort() in algorithm library for two-dimensional array 
	//so i used bubble sort
	//the same idea with one-d array but we use another (for loop) to sort each row (luyen tieng anh:))
	
	
	for(int i=0; i<r; i++)  //loop sap xep tung hang
	{
		for(int j=0; j<c-1; j++)   //loop vi tri duoc xep dung cho
		{
			for(int k=c-1; k>0; k--)	//for tu cuoi
			{
				if(arr[i][k-1]>arr[i][k]) //neu so o vi tri truo lon hon so sau thi dao vi tri 
					swap(arr[i][k-1], arr[i][k]);
			}
		}
	}
	//in mang sau khi sap xep
	cout<<"Mang sau khi sap xep cac hang la: "<<endl;
	XuatMang(arr, r, c);
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
	
	//tinh tong cac hang
	tongHang(my_array, row, column);
	
	//duong cheo
	diagonal(my_array, row, column);
	
	//ngoai bien cua ma tran
	sideOfArray(my_array, row, column);
	
	//sap xep
	rowSort(my_array, row, column);
return 0;
}
