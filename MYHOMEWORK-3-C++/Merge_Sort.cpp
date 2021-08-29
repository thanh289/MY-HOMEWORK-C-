#include <iostream>
using namespace std;

//khai bao do lon mang
#define MAX 1000


//ham nhap mang
void nhapmang(int arr[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	cout<<"Nhap cac phan tu cua mang:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}


//ham xuat mang
void xuatmang(int arr[], int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

//gôp hai mang con arr[l....mid] va [mid+1.....r]
void merge(int arr[], int l, int mid, int r)
{
	//so phan tu cua mang con trai
	//can cong 1 de luu so o mid, co the chay tay de hieu hon
	int n1=mid-l+1;
	
	//so phan tu cua mang phai
	int n2=r-mid;
	
	//khoi tao hai mang trai va phai la hai mang con
	int left[n1]; int right[n2];
	
	//gan tung phan tu cua mang chinh vao hai mang con
	for(int i=0; i<n1; i++)   left[i]=arr[l+ i];
	for(int j=0; j<n2; j++)   right[j]=arr[mid+1+j];
		
	
	//tien hanh sap sep laij mang
	//khoi tao hai bien de soat trong hai mang con
	int x=0, y=0;
	
	//khoi tao bien soat trong mang chinh
	int k=l;
	
	//vong lap gan cac bien roi sap xep vao mang chinh
	while(x<n1 && y<n2)
	{
		//neu phan tu o mang trai > phan tu o mang phai
		if(left[x]>= right[y])
		{
			//gan phan tu o mang phai vao mang chinh
			//vi ta sap xep tang dan nen phai gan lan luot tu nho den lon
			arr[k]= right[y];
			//sau khi gan xong, chuyen toi phan tu tiep theo cua mang phai de tiep tuc ktra
			y++;
		}
		
		
		//tuong tu voi truong hop phan tu o mang trai < phan tu o mang phai
		else if(left[x]< right[y])
		{
			arr[k]= left[x];
			x++;
		}
		//sau khi gan xong tiep tuc tang bien k de gan tiep
		k++;
	}
	
	//voi truong hop khi mot trong hai mang da het phan tu, ta gan tat ca cac phan tu con lai vao mang chinh boi cac phan tu da duoc sap xep
	//neu van con phan tu o mang trai
	if(x< n1)
	{
		arr[k]= left[x];
		x++;
		k++;
	}
	
	//neu van con phan tu o mang phai
	if(y< n2)
	{
		arr[k]= right[y];
		k++;
		y++;
	}
	
}


//mergesort
//l là chi so trai và r là chi so phai cua mang can sap xep
void mergeSort(int arr[], int l, int r)
{
	int mid;
	if(l< r)
	{
		mid= (l+ r)/2;
		
		//goi hàm de quy tiêp tuc chia dôi tung mang
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);
		merge(arr, l, mid, r);
	}
	
}


//ham main
int main()
{
	//khai bao mang va so phan tu cua mang
	int my_array[MAX];
	int n_size;
	
	//nhap xuat mang
	nhapmang(my_array, n_size);
	cout<<"Mang truoc khi sap xep la: ";
	xuatmang(my_array, n_size);
	
	
	//goi lai ham mergeSort
	mergeSort(my_array, 0, n_size);
	cout<<"\n\nMang sau khi sap xep la: ";
	xuatmang(my_array, n_size);
	
	
return 0;
}









