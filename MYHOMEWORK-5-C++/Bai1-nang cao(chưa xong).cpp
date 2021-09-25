#include <iostream>
#include <vector>	//for vector()
#include <algorithm> //for sort()
using namespace std;

//khoi tao du lieu
struct antique{
	int value;
	int weight;
};

//ham an trom
void the_antique_have(vector <antique> &aDuy, int n)
{
	//thay doi kich thuoc vector
	aDuy.resize(n);
	
	cout<<"Nhap gia tri va khoi luong cua vat: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>aDuy[i].value>>aDuy[i].weight;
	}
}


//kieu du lieu bool sap xep 
bool cmp_weight(const antique& i, const antique& j)
{
	return i.weight< j.weight;
}

bool cmp_value(const antique& i, const antique& j)
{
	return i.value< j.value;
}

//ham main
int main()
{
	//tao vector voi du lieu antique
	vector <antique> Thanh;
	
	int n;
	cout<<"So do vat: ";
	cin>>n;
	
	int m;
	cout<<"Khoi luong toi da cua tui: ";
	cin>>m;
	
	//ham nap du lieu do co
	the_antique_have(Thanh, n);
	
	//sap xep theo weight
	sort(Thanh.begin(), Thanh.end(), cmp_weight); 
	
	for(int i=0; i<n-1; i++)
	{
		if(Thanh[i].weight< Thanh[i+1].weight)
		{
			sort(Thanh.begin(), Thanh.begin()+, cmp_value)
		}
	}
	
	
	for(int i=0; i<n-2; i++)
	{
		cout<<"("<<Thanh[i].value<<";"<<Thanh[i].weight<<")";
		cout<<endl;
	}
return 0;
}
