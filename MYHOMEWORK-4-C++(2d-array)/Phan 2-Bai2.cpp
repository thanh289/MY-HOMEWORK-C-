#include <iostream>
using namespace std;
#define ROW 100
#define COL 100

//h�m xu?t m?ng
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

//h�m t?o xo?n ?c
void matranxoanoc(int arr[][COL], int dong, int cot)
{
    /*� tu?ng: d�ng theo h�nh xo?n ?c, ta g�n h�ng tr�n c�ng r?i c?t cu?i c�ng
    r?i h�ng cu?i c�ng v� c?t d?u ti�n, khi d� du?c v�ng xo?n don

    v� d?: v?i m?ng 4x4:
    -v�ng xo?n don 1
    1 2 3 4
   12     5
   11     6
   10 9 8 7

    -v�ng xo?n don 2
        13 14
        15 16  */
    
	//t?o bi?n ch?y v�ng l?p
	int i;
    //bi?n v? tr� b?t d?u c?a m?i v�ng xo?n don
    int d=0;
    //c�c gi� tr? c?n g�n
    int val=1;

    //gan lai index d�ng v?i c?t
    int m= dong-1;
    int n= cot-1; 
    
    //v�ng l?p t?o c�c v�ng xo?n don
    while(val<=dong*cot)
    {
        //g�n h�ng d?u ti�n
        for(i=d; i<=n; i++)
    	{
        	arr[d][i]= val++;
    	}

        //g�n c?t cu?i c�ng
    	for(i=d+1; i<=m; i++)
    	{
        	arr[i][n]=val++;
    	}

        //g�n h�ng du?i c�ng
    	for(i=n-1; i>=d && val<= dong*cot ; i--)
    	{
        	arr[m][i]=val++;
    	}

        //g�n c?t d?u ti�n
    	for(i=m-1; i>d && val<= dong*cot ; i--)
    	{
        	arr[i][d]=val++;
    	}

        //thu nh? v�ng xo?n, b?t d?u v�ng xo?n kh�c
    	m--; n--; d++;
    }
    //in m?ng
	cout<<"Ta co ma tran xoan oc la: "<<endl;
    XuatMang(arr, dong, cot);
}

//h�m main
int main()
{
    //khai b�o m?ng v� k�ch c? m?ng
    int my_array[ROW][COL];
    int m;
    int n;
    cout<<"Nhap kich co mang xoan oc: ";
    cin>>m>>n;

    //g?i h�m
    matranxoanoc(my_array, m, n);
return 0;
}
