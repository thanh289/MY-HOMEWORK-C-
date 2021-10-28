#include <iostream>
#include <map>
#include <ctime> //for time()
#include <cstdlib> //for rand() and for srand()
using namespace std;

#define MAX 1000


struct cmp
{
	bool operator() (const int &x, const int &y)
	{
		return x>y;
	}
};

//ham main
int main()
{


	//ı 1
	map <int, int> A; 
 	A[2]=1;
 	A[9]=3;
 	
 	A.insert(make_pair(1,4));
  	A.insert(make_pair(5,8));

	//ı 2
	map<int, int, cmp> B;
	
	//ı 3
	cout<<"Map A theo chieu xuoi: "<<endl;
    for(map<int, int> :: iterator it=A.begin(); it !=A.end(); it++)  
        cout<<(*it).first<<" "<<(*it).second<<endl;
	
	cout<<"Map A theo chieu nguoc: "<<endl;
    for(map<int, int> :: reverse_iterator itr=A.rbegin(); itr !=A.rend(); itr++)
    	cout<<(*itr).first<<" "<<(*itr).second<<endl;
    
    //ı 4
    cout<<"Nhap so phan tu cua mang: ";
    int n; cin>>n;
    
    int arr[MAX];
    for(int i=0; i<n; i++)
        cin>>arr[i];
        
    map<int, int> C;
    
    for(int i=0; i<n; i++)
        C[arr[i]]++;
        
    cout<<"cac phan tu cua mang va so lan xuat hien: "<<endl;
    for(map<int, int> :: iterator it=C.begin(); it !=C.end(); it++)  
        cout<<(*it).first<<" "<<(*it).second<<endl;
    
    //ı 5
    cout<<"kiem tra xem phan tu co ton tai: "<<endl;
    int k; cin>>k;
    if(C.find(k) !=C.end())
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
return 0;
}
