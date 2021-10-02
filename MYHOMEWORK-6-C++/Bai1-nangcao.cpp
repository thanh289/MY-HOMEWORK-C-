#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 1000

int main()
{
	int n; cin>>n;
	int arr[100000];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	map<int, int> my_map;


	int k;
	for(int i=0; i<n; i++)
	{
		k=arr[i];
		if(k<0)
		{
			my_map.insert(make_pair(arr[i], k));	
		}
		
		while(k>10)
		{
			k=k/10;
		}	
		my_map.insert(make_pair(arr[i], k));
	}
	
//	for(map<int, int> :: iterator it= my_map.begin(); it != my_map.end(); it++)  
//        cout<<(*it).first<<" "<<(*it).second<<endl;
	
	int arr_val[100000];
	
	int l=0;
	while (n--)
	{
		for(int i=0; i<n; i++)
		{
			
		}
	}
	
	
	
return 0;	
}
