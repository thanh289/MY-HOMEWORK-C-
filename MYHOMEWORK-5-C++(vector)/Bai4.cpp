#include <iostream>
#include <vector>
using namespace std;

//cach nay do phuc tap qua lon

/*
struct find_way{
	int city1;
	int city2;
	int distance;
};

void city_map (vector <find_way> &map, int city,  int way)
{

	map.resize(way);


	cout<<"Nhap du lieu cho ban do: "<<endl;
	for(int i=0; i<way; i++)
	{
		cin>>map[i].city1>>map[i].city2>>map[i].distance;
	}
}


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



int main()
{
	int n, m;
	cout<<"Nhap so thanh pho: ";
	cin>>n;
	cout<<"Nhap so duong: ";
	cin>>m;

	vector <find_way> vec;
	city_map(vec, n, m);
	
	
	near_city(vec, n);
	
	distance_to_city(vec, n);
return 0;
}

*/


//cach hay
int main()
{
	//n: the number of city
	//m: the number of ways
	int n, m;
	cin>>n>>m;
	//create vector
	vector<vector<int> > data(m+1);
	//creat 2D array to save distance
	int distance[m+1][m+1];
	
	for(int i=1; i<=m; i++)
	{
		//type city1, city2 and distance 
		int a, b, x;
		cin>>a>>b>>x;
		
		//reason to use vector here
		//from one city we can travel to other city
		//that mean using vector doesn't limit the elements each row
		data[a].push_back(b);
		data[b].push_back(a);
		
		//here is the reason why we use 2D array
		distance[a][b]=distance[b][a]=x;
	}
	
	
	cout<<"Ý 1"<<endl;
	for(int i=1; i<=n; i++)
	{
		cout<<i<<" --> ";
		for(int j=0; j<data[i].size(); j++)  	//data[i].size: number  of elements in row i
			cout<<data[i][j]<<",";
		cout<<endl;
	}
	
	cout<<"Ý 2"<<endl;
	for(int i=1; i<=n; i++)
	{
		cout<<"Khoang cach tu thanh pho "<<i<<" den cac thanh pho khac: "<<endl;
		for(int j=0; j<data[i].size(); j++)
		{
			cout<<"Den thanh pho "<<data[i][j]<<" la: "<<distance[i][data[i][j]]<<endl;
		}
	}
}
