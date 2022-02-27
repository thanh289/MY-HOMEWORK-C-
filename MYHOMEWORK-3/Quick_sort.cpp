#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
using namespace std;

/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int patition(int arr[], int low, int high){
	int pivot=arr[high]; // pivot 
	
	int left=low;
	int right=high-1;
	
	while(true){
		while(left<=right && arr[left]<pivot) 
			left++;
		while(right>=left && arr[right]>pivot) 
			right--;
		if(left>=right) 
			break;
		swap(arr[left], arr[right]);
		left++; 
		right--;
	}
	swap(arr[left], arr[high]);
	return left;
}

/*LOOK AT THIS EXAMPLE TO UNDERSTAND
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
arr[] = {10, 50, 30, 40, (70), 80, 90}.  // SWAP arr[left] và arr[pivot]
 
NOW 70 IS AT STAY AT THE RIGHT PLACE.*/
//Next, we have to quick sort from index 0 -> 3 (10, 50, 30, 40) and 5 -> 6 (80, 90)



/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quick_sort(int arr[], int low, int high){
	if(low<high){
		/* pi is partitioning index, arr[pi] is now  
        at right place */
		int pi = patition(arr, low, high);
		
		// Separately sort elements before  
        // partition and after partition  
		quick_sort(arr, low, pi-1);
		quick_sort(arr, pi+1, high);
	}
}



int main(){
	int n; cin>>n;
	int arr[n];
	srand(time(NULL));
	for(int i=0; i<n; i++) arr[i]=rand();
	cout<<"Before sort: "<<endl;
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"After sort: "<<endl;
	quick_sort(arr, 0, n);
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
