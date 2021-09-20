#include <iostream>
using namespace std;
#define ROW 100
#define COL 100

//hàm xu?t m?ng
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

//hàm t?o xo?n ?c
void matranxoanoc(int arr[][COL], int dong, int cot)
{
    /*ý tu?ng: dúng theo hình xo?n ?c, ta gán hàng trên cùng r?i c?t cu?i cùng
    r?i hàng cu?i cùng và c?t d?u tiên, khi dó du?c vòng xo?n don

    ví d?: v?i m?ng 4x4:
    -vòng xo?n don 1
    1 2 3 4
   12     5
   11     6
   10 9 8 7

    -vòng xo?n don 2
        13 14
        15 16  */
    
	//t?o bi?n ch?y vòng l?p
	int i;
    //bi?n v? trí b?t d?u c?a m?i vòng xo?n don
    int d=0;
    //các giá tr? c?n gán
    int val=1;

    //gan lai index dòng v?i c?t
    int m= dong-1;
    int n= cot-1; 
    
    //vòng l?p t?o các vòng xo?n don
    while(val<=dong*cot)
    {
        //gán hàng d?u tiên
        for(i=d; i<=n; i++)
    	{
        	arr[d][i]= val++;
    	}

        //gán c?t cu?i cùng
    	for(i=d+1; i<=m; i++)
    	{
        	arr[i][n]=val++;
    	}

        //gán hàng du?i cùng
    	for(i=n-1; i>=d && val<= dong*cot ; i--)
    	{
        	arr[m][i]=val++;
    	}

        //gán c?t d?u tiên
    	for(i=m-1; i>d && val<= dong*cot ; i--)
    	{
        	arr[i][d]=val++;
    	}

        //thu nh? vòng xo?n, b?t d?u vòng xo?n khác
    	m--; n--; d++;
    }
    //in m?ng
	cout<<"Ta co ma tran xoan oc la: "<<endl;
    XuatMang(arr, dong, cot);
}

//hàm main
int main()
{
    //khai báo m?ng và kích c? m?ng
    int my_array[ROW][COL];
    int m;
    int n;
    cout<<"Nhap kich co mang xoan oc: ";
    cin>>m>>n;

    //g?i hàm
    matranxoanoc(my_array, m, n);
return 0;
}
