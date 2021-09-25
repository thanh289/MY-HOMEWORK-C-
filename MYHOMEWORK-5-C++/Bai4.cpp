#include <iostream>
#include <vector>
using namespace std;

//tao du lieu
struct find_way{
	int city1;
	int city2;
	int distance;
};

//ham tao map
void city_map (vector <find_way> &map, int city,  int way)
{
	//thay doi kich thuoc cua vecto
	map.resize(way);

	//nhap thanh pho 1, thanh pho 2 va khoang cach hai thanh pho
	cout<<"Nhap du lieu cho ban do: "<<endl;
	for(int i=0; i<way; i++)
	{
		cin>>map[i].city1>>map[i].city2>>map[i].distance;
			
		//dieu kien
		if(map[i].city1> city or map[i].city2>city)
			break;
	}
}


//ham tim thanh pho lan can
void near_city(vector <find_way> &map, int city)
{
	cout<<"Cac duong co the di: "<<endl;
	for(int i=1; i<=city; i++)
	{
		for(int j=0; j<city; j++)
		{
			if(map[j].city1==i)
				cout<<map[j].city1<<" den "<<map[j].city2<<endl;
			if(map[j].city2==i)
				cout<<map[j].city2<<" den "<<map[j].city1<<endl;
		}
	}
}

void distance_to_city(vector <find_way> &map, int city)
{
	int k;
	cout<<"Nhap mot thanh pho bat ki: ";
	cin>>k;
	
	for(int i=0; i<city; i++)
	{
		if(map[i].city1==k)
			cout<<"Khoang cach tu "<<map[i].city1<<" den "<<map[i].city2<<" la "<<map[i].distance<<endl;
		if(map[i].city2==k)
			cout<<"Khoang cach tu "<<map[i].city2<<" den "<<map[i].city1<<" la "<<map[i].distance<<endl;	
	}
}


//ham main
int main()
{
	//tao so thanh pho va so canh
	int n, m;
	cout<<"Nhap so thanh pho: ";
	cin>>n;
	cout<<"Nhap so duong: ";
	cin>>m;
	//tao vector
	vector <find_way> vec;
	city_map(vec, n, m);
	
	//
	near_city(vec, n);
	
	//
	distance_to_city(vec, n);
return 0;
}

