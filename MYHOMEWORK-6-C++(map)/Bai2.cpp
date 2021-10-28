#include <iostream>
#include <set>

#define MAX 1000
using namespace std;
struct cmp
{
	bool operator()(const int &x, const int &y)
	{
		return x>y;
	}	
};

int main()
{
	//ı 1
	set<int> A;
	A.insert(1);
	A.insert(4);
	A.insert(9);
	
	//ı 2
	set<int, cmp> B;
	
	//ı 3
	for(set<int> :: iterator it=A.begin(); it !=A.end(); it++)
		cout<<*it<<" ";
	cout<<endl;
	for(set<int> :: reverse_iterator itr=A.rbegin(); itr !=A.rend(); itr++)
		cout<<*itr<<" ";
	cout<<endl;
	
	//ı 4 ._.??
	cout<<"Nhap so phan tu cua mang: ";
	int n; cin>>n;
	int arr[MAX];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	
	
	//ı 5
	cout<<"Kiem tra xem co phan tu khong: ";
	int k; cin>>k;
	
	if(A.find(k) != A.end())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
return 0;
}
