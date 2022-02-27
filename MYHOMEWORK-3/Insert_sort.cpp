#include <bits/stdc++.h>
#include <ctime> //for time()
#include <cstdlib> //for rand() and srand()
using namespace std;

void insert_sort(int arr[], int n){
	//take each number in row and compare with previous number, if it's greater then stop, else keep going and swap 
	for(int i=1; i<n; i++){
		int tempo = arr[i];
		int j=i-1;
		while(j>=0 && tempo<arr[j]){
			//or arr[j+1]=arr[j];
			swap(arr[j], arr[j+1]);
			j=j-1;
		}
		arr[j+1]=tempo;
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
	insert_sort(arr, n);
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
