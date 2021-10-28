#include <iostream>
#include <ctime> //for time
#include <cstdlib> //for srand() and rand()
using namespace std;

//ham nhap mang
void nhapmang(int arr[], int &n)
{
	//khoi tao bien random
	srand(time(NULL));
	
	//nhap mang random
	for(int i=0; i<n; i++)
		arr[i] = rand();
	
}


//ham xuat mang
void xuatmang(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

//ham hop mang
void merge(int arr[], int start, int mid, int end)
{
	//khoi tao hai bieen la so phan tu cua hai mang con
	int n1= mid-start+1;
	int n2= end-mid;
	
	//khoi tao hai mang con
	int left[n1], right[n2];
	//gan tung phan tu ham chinh vao hai ham con
	for(int i=0; i<n1; i++) left[i]= arr[start+i];
	for(int j=0; j<n2; j++) right[j]= arr[mid+1+j];
	
	//tao hai bien soat trong hai mang con
	int x=0;
	int y=0;
	//tao bien soat trong ham chinh
	int k=start;
	
	//phan hop mang
	while (x<n1 && y<n2)
	{
		//so sanh phan tu dau tien cua hai mang, neu phan tu cua left nho hon phan tu cua right thi gan vao mang chinh
		if (left[x]<= right[y])
		{
			arr[k]= left[x];
			//gan xong thi tang len ktra phan tu tiep theo
			x++;
		}
		
		//tuong hop voi truong hop tren
		else if (left[x]> right[y])
		{
			arr[k]= right[y];
			y++;
		}
		//gan phan tu vao mang chinh xong thi tang len de gan tiep
		k++;
	}
	
	//neu phan tu o mang right da het thi gan not cac phan tu con lai cua mang left vao arr
	//truoc do cac phan tu con lai da sap xep theo dung thu tu
	if(x< n1)
	{
		arr[k]=left[x];
		k++;
		x++;
	}
	
	//tuong tu voi truong hop phan tu mang left da het
	if(y< n2)
	{
		arr[k]= right[y];
		k++;
		y++;
	}
}

//ham thuc hien sort
//left vaf right la doan ma muon sap xep
void mergeSort(int arr[], int left, int right)
{
	int mid;
	if(left<right)
	{
		mid=(left + right)/2;
		
		//goi hàm de quy tiêp tuc chia dôi tung mang
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

//ham main
int main()
{
	//khai bao
	int MAX;
	cout<<"Nhap so phan tu cua mang: ";
	cin>>MAX;
	int my_array[MAX];
	
	//nhap xuat mang
	nhapmang(my_array, MAX);
	cout<<"Mang truoc khi sap xep la: ";
	xuatmang(my_array, MAX);
	
	//sau khi sap xep
	mergeSort(my_array, 0, MAX);
	cout<<"\nMang sau khi sap xep la: ";
	xuatmang(my_array, MAX);
	
return 0;
}
