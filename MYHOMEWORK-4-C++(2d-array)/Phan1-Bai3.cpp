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
void XuatMang(int arr[][COL], int &r, int &c)
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

//ham xoa hang
void deleteRow(int arr[][COL], int &r, int &c)
{
	int n;
	cout<<"Nhap hang ban muon xoa: ";
	cin>>n;
	
	
	if(n<r && n>=0)
	{
		for(int i=n; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				arr[i][j]=arr[i+1][j]; //day cac vi tri o duoi len tren
			}
		}
		r--; 
	
		cout<<"\nMang sau khi bi xoa la: "<<endl;
		XuatMang(arr, r, c);
	}
	
	else
		cout<<"\nVuot qua mang roi!"<<endl;
}

//ham xoa cot
void deleteCol(int arr[][COL], int &r, int &c)
{
	int n;
	cout<<"Nhap cot ban muon xoa: ";
	cin>>n;
	
	if(n<c && n>=0)
	{
		for(int i=n; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				arr[i][j]=arr[i][j+1]; //day cac vi tri o sau ve truoc
			}
		}
		c--; 
	
		cout<<"\nMang sau khi bi xoa la: "<<endl;
		XuatMang(arr, r, c);
	}
	
	else
		cout<<"\nVuot qua mang roi!"<<endl;
}

//ham them hang
void addRow(int arr[][COL], int &r, int &c)
{
	
	//nhap vi tri hang muon them
	int n;
	cout<<"Nhap vi tri hang ban muon them: ";
	cin>>n;
	
	//khoi tao so ngau nhien
	srand(time(NULL));

	if(n>=0 && n<r)	
	{
		//day cac so tu tren xuong duoi de chen vao
		for(int i=r; i>n; i--)
		{
			for(int j=c-1; j>=0; j--)
			{
				arr[i][j]=arr[i-1][j]; //buoc day xuong
			}
		}
	
		//chen cac so ngau nhien vao hang da chon
		for(int i=0; i<c;i++)
		{
			arr[n][i]=rand() %100;
		}
	
		//tang mot hang sau khi them vao
		r++;
	
		//in mang ra man hinh
		cout<<"Mang sau khi them la: "<<endl;
		XuatMang(arr, r, c);
	}
	
	else
		cout<<"\nVuot qua mang roi!"<<endl;
}

void addCol(int arr[][COL], int &r, int &c)
{
	//nhap vi tri cot muon them
	int n;
	cout<<"Nhap vi tri cot ban muon them: ";
	cin>>n;
	
	//khoi tao so ngau nhien
	srand(time(NULL));

	if(n>=0 && n<c)	
	{
		//day cac so tu trai sang phai de chen vao
		for(int i=r-1; i>=0; i--)
		{
			for(int j=c; j>n; j--)
			{
				arr[i][j]=arr[i][j-1]; //buoc day xuong
			}
		}
	
		//chen cac so ngau nhien vao hang da chon
		for(int i=0; i<r;i++)
		{
			arr[i][n]=rand() %100;
		}
	
		//tang mot hang sau khi them vao
		c++;
	
		//in mang ra man hinh
		cout<<"Mang sau khi them la: "<<endl;
		XuatMang(arr, r, c);
	}
	
	else
		cout<<"\nVuot qua mang roi!"<<endl;	
}


//ham doi vi tri hai hang voi nhau
void changeRowPosition(int arr[][COL], int &r, int &c)
{
	//nhap vi tri hai hang
	int m,n;
	cout<<"Nhap vi tri hai hang muon doi cho nhau: "<<endl;
	cin>>m>>n;
	
	//ta chi can doi vi tri row cho nhau, cac so column giu nguyen
	if(m>=0 && n>=0 && m<r && n<r)
	{
		for(int i=0; i<c; i++)
		{
			swap(arr[n][i],arr[m][i]);  //dung swap() doi vi tri cho nhau
		}
	
		//in mang ra
		cout<<"Mang sau khi doi la: "<<endl;
		XuatMang(arr,r,c);
	}
	
	else
		cout<<"\nVuot qua mang roi!"<<endl;
}

//ham doi vi tri hai cot voi nhau
void changeColPosition(int arr[][COL], int &r, int &c)
{
//nhap vi tri hai cot
	int m,n;
	cout<<"Nhap vi tri hai cot muon doi cho nhau: "<<endl;
	cin>>m>>n;
	

	if(m>=0 && n>=0 && m<c && n<c)
	{
		for(int i=0; i<r; i++)
		{
			swap(arr[i][m], arr[i][n]);
		}
	
		//in mang ra
		cout<<"Mang sau khi doi la: "<<endl;
		XuatMang(arr,r,c);
	}
	
	else
		cout<<"\nVuot qua mang roi!"<<endl;
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
	
	//xoa mot hang
	deleteRow(my_array, row, column);

	//xoa mot cot
	deleteCol(my_array, row, column);
	
	//them mot hang
	addRow(my_array, row, column);
	
	//them mot cot
	addCol(my_array, row, column);
	
	//doi vi tri hai hang voi nhau
	changeRowPosition(my_array, row, column);
	
	//doi vi tri hai cot voi nhau
	changeColPosition(my_array, row, column);
	
return 0;
}
