#include <iostream>
#include <map>
#include <set>
using namespace std;


struct cmp
{
	bool operator() (int x, int y)
	{
		return x>y;
	}
};


int main()
{
	//dc tuy y dinh dang kieu du lieu trong map
	map <int, int, cmp> m, m1;
	int a[] ={1,2,2,4,1,5,10,7,9,-1};
	int n=10;
	
	//cach 1
	for(int i=0; i<n; i++)
	{
		m.insert(make_pair(a[i],0));
	}
	
	//cach 2
	for(int i=0; i<n; i++)
	{
		m[a[i]]++;
	}
	//key=-1,val=1
	//key=1, val=1 -> key=1, val=2
	//key=2, val=1 -> key=2, val=2 
	//key=5, val=1
	//key=9, val=1
	//key=10,val=1
	
	
	//in ra man hinh theo iterator
	cout<<"\nTa co map: "<<endl;
	for(map<int, int> :: iterator it=m.begin(); it!=m.end(); it++)
	{
		cout<<(*it).first<<" "<<(*it).second<< endl;
	}
	
	cout<<"\n kich thuoc cua map: "       		<<m.size();
	cout<<"\n kiem tra map m co rong khong: "	<<m.empty();
	cout<<"\n kiem tra map m1 co rong khong: "	<<m1.empty();
	
	m.erase(-1) ; //O(log2(n)) con voi mang 1 chieu la O(n)
	
	cout<<"\nTa co map: "<<endl;
	for(map<int, int> :: iterator it=m.begin(); it!=m.end(); it++)
	{
		cout<<(*it).first<<" "<<(*it).second<< endl;
	}
	
	//ham find se tra ve con tro o  vi tri end neu khong tim thay phan tu
	if(m.find(10) != m.end())
	{
		cout<<"tim thay \n";
	}
	
	else
		cout<<"khong tim thay \n";
		
		
return 0;
}

