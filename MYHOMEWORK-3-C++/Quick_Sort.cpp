#include <iostream>
#include <ctime> //for time()
#include <cstdlib> //for rand() and srand()
using namespace std;



//a Duy day cach dung pivot la phan tu o giua mang
//tuy nhien cach nay co the khien pivot bi thay doi vi tri, gay kho hieu
//boi vay ta se chon chon pivot la phan tu o cuoi mang

//qua trinh phan doan
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot la phan tu cuoi mang
    
    //xet khoang tu low den high -1 
    int left = low;
    int right = high - 1;
    
    while(true)
	{
		//tim phan tu lon hon pivot
		//hieu don gian la neu arr[left] > pivot, vong while se dung va bien se dung tai vi tri can doi vi tri
        while(left <= right && arr[left] < pivot) 
			left++;   
		//tim phan tu nho hon pivot
        while(right >= left && arr[right] > pivot) 
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

/*comment chu y: thu su thi minh da thu neu vong while(left <=right)
  nhin thi co ve se khong co j xay ra nhung no se loi trong truong hop left=right

    while(left <= right)
	{

        while(arr[left] < pivot) 
			left++;   
        while(arr[right] > pivot) 
			right--;
			
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

*/

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
	//khoi tao bien ngau nhien
	srand(time(NULL));
	
	//nhap mang so ngau nhien
	for(int i=0;i<n;i++)
		arr[i]= rand();
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
	int MAX;
	cout<<"Nhap so phan tu cua mang: ";
	cin>>MAX;
	int my_array[MAX];

	
	//nhap xuat mang
	nhapmang(my_array, MAX);
	cout<<"Mang truoc khi sap xep la: ";
	xuatmang(my_array, MAX);
	
	
	//goi lai ham mergeSort
	quickSort(my_array, 0, MAX);
	cout<<"\n\nMang sau khi sap xep la: ";
	xuatmang(my_array, MAX);
	
	
return 0;
}



