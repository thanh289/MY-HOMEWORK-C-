#include <bits/stdc++.h>
#include <ctime> //for time()
#include <cstdlib> //for rand() and srand()

using namespace std;

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r]
void merge(int arr[], int start, int mid, int end){
	int n1 = mid-start+1;
	int n2 = end-mid;
	// Create temp arrays 
	int left[n1], right[n2];
	// Copy data to temp arrays L[] and R[] 
	for(int i=0; i<n1; i++) left[i]= arr[start+i];
	for(int i=0; i<n1; i++) right[i]= arr[mid+1+i];
	
	// Merge the temp arrays back into arr[l..r] 
	
	// Initial index of first subarray and second subarray 
	int x=0, y=0;
	// Initial index of merged subarray
	int k=start;
	
	while(x<n1 && y<n2){
		if(left[x]<= right[y]){
			arr[k]= left[x];
			x++;
		}
		
		else if(left[x]>right[y]){
			arr[k]= right[y];
			y++;
		}
		
		k++;
	}
	
	// Copy the remaining elements of 
    // L[], if there are any  
	while(x<n1){
		arr[k]= left[x];
		x++;
		k++;
	}
	
	// Copy the remaining elements of 
    // R[], if there are any 
	while(y<n2){
		arr[k]= right[y];
		y++;
		k++;
	}
}

// l is for left index and r is  
// right index of the sub-array 
// of arr to be sorted */ 
void merge_sort(int arr[], int left, int right){
	int mid;
	if(left<right){
		// Same as (left+right)/2, but avoids  
        // overflow for large left and right 
        int mid = left + (right - left) / 2;
        
        // Sort first and second halves 
		merge_sort(arr, left, mid);
		merge_sort(arr, mid+1, right);
		merge(arr, left, mid, right);
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
	merge_sort(arr, 0, n);
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";

}
