#include <bits/stdc++.h>
#include <ctime> //for time()
#include <cstdlib> //for rand() and srand()

using namespace std;

void bubble_sort(int arr[], int n){
	
//	for(int i=n-1; i>0; i--){
//		for(int j=0; j<i; j++){
//			if(arr[j]>arr[j+1]) 
//				swap(arr[j], arr[j+1]);
//		}
//	}
	
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(arr[j] < arr[j-1])
				swap(arr[j], arr[j-1]);
		}
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
	bubble_sort(arr, n);
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";

}

