#include <iostream>
using namespace std;

# define MAX 1000

//a Duy day cach dung pivot la phan tu o giua mang
//tuy nhien cach nay co the khien pivot bi thay doi vi tri, gay kho hieu
//boi vay ta se chon chon pivot la phan tu o cuoi mang

//qua trinh phan doan
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    
    while(true)
	{
        while(left <= right && arr[left] < pivot) //tim phan tu lon hon pivot
			left++;   
        while(right >= left && arr[right] > pivot) //tim phan tu nho hon pivot
			right--;
        
        //neu da duyet xong thi thoat vong lap
		if (left >= right) 
			break;
		//con neu chua xong thi doi cho
        swap(arr[left], arr[right]);
        //vi left va right hien tai da xet nen phai thay doi
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}

/*VI DU CHO QUA TRINH PHAN DOAN
arr[] = {10, 80, 30, 90, 40, 50, 70}
Indexes:  0   1   2   3   4   5   6 
 
pivot = 6, left = 0, right = 5
 
arr[left] = 10 < arr[pivot] = 70 và left <= right, left = 1
arr[left] = 80 > arr[pivot] = 70, STOP
 
arr[right] = 50 < arr[pivot] = 70, STOP
 
Do left < right, SWAP arr[left], arr[right]
arr[] = {10, 50, 30, 90, 40, 80, 70}
left = 2, right = 4
 
arr[left] = 30 < arr[pivot] = 70 và left <= right, left = 3
arr[left] = 90 > arr[pivot] = 70, STOP
 
arr[right] = 40 < arr[pivot] = 70, STOP
 
Do left < right, SWAP arr[left], arr[right]
arr[] = {10, 50, 30, 40, 90, 80, 70}
left = 4, right = 3
 
// Do left >= right
arr[] = {10, 50, 30, 40, 70, 80, 90}.  // SWAP arr[left] và arr[pivot]
 
BAY H 70 DA NAM DUNG VI TRI.*/
 


//ham thuc hien quick sort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //pi la index noi phan tu da dung vi tri va la phan tu chia mang ra lam hai mang con 
        int pi = partition(arr, low, high);
 
        //de quy hai mang con trai va phai
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


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
	quickSort(my_array, 0, n_size);
	cout<<"\n\nMang sau khi sap xep la: ";
	xuatmang(my_array, n_size);
	
	
return 0;
}



