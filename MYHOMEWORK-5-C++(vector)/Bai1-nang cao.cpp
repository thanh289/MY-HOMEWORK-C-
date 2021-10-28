#include <iostream>
#include <vector>	//for vector()
#include <algorithm> //for sort()
using namespace std;

//khoi tao du lieu
struct antique{
	int gia_tri;
	int khoi_luong;
};

//kieu du lieu so sanh
bool cmp_value(const antique& i, const antique& j)
{
	return i.gia_tri> j.gia_tri;
}


//ham main
int main()
{
	vector <antique> Thanh;
	
	int n, k;
	cin>>n>>k;
	
	for(int i=0; i<n; i++)
	{
		int value, weight; 
		cin>>value>>weight;
		
		antique tmp;
		tmp.gia_tri = value;
		tmp.khoi_luong = weight;
		Thanh.push_back(tmp);
	}

	
	sort(Thanh.begin(), Thanh.end(), cmp_value);
	

//	for(int i=0; i<n; i++)
//		cout<<Thanh[i].gia_tri<<" "<<Thanh[i].khoi_luong<<endl;
//	cout<<endl;
	cout<<Thanh.size();
	
	int ans= 0; 
	int weight= 0; 
	for(int i=0; i<n; i++)
	{
		if(weight + Thanh[i].khoi_luong <=k)
		{
			ans+= Thanh[i].gia_tri;
			weight+= Thanh[i].khoi_luong;
		}
	}
	
	
	cout<<ans<<endl;
return 0;
}

