#include <iostream>
#include <algorithm> //for sort()
#include <vector> //for vector
using namespace std;

//khoi tao kieu du lieu toa do
//voi stuct co the tu tao kieu du lieu minh thich 
//von ve kieu du lieu la kieu int, float, ...
struct toado{
	int x;
	int y;
};


//ham nhap diem
void inputPoint(vector<toado> &point, int n)
{

	//thay doi kich thuoc cua vecto
	point.resize(n);
	
	for(int i=0; i<n; i++)
	{
		cout<<"Hay nhap diem thu "<<i+1<<endl;
		//nhap du lieu vao bien tam thoi
		cin>>point[i].x>>point[i].y;
	}
	
	
	//in ra man hinh
	cout<<"Ta co cac diem: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"("<<point[i].x<<";"<<point[i].y<<")";
		cout<<endl;
	}
		
}



//tao kieu du lieu sap xep theo x
bool cmp_x(const toado& i, const toado& j)
{
	return i.x< j.x;
}

//ham sap xep diem theo thuoc tinh x
void sort_x(vector <toado> &point, int n)
{
	sort(point.begin(), point.end(), cmp_x); 	//them cmp thuoc kieu du lieu bool
	cout<<"Cac diem sau khi sap xep giam dan theo thuoc tinh y: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"("<<point[i].x<<";"<<point[i].y<<")";
		cout<<endl;
	}
}

//tao kieu du lieu sap xep theo y
bool cmp_y(const toado& i, const toado& j)
{
	return i.y> j.y;
}

//ham sap xep diem theo thuoc tinh y
void sort_y(vector <toado> &point, int n)
{
	sort(point.begin(), point.end(), cmp_y); 	//them cmp thuoc kieu du lieu bool
	cout<<"Cac diem sau khi sap xep giam dan theo thuoc tinh y: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"("<<point[i].x<<";"<<point[i].y<<")";
		cout<<endl;
	}
}


//ham main
int main()
{
	//khoi tao vecto kieu toado
	vector <toado> my_point;
	
	//nhap so diem
	int n_size;
	cout<<"Nhap so diem: ";
	cin>>n_size;
	
	//goi ham nhap diem
	inputPoint(my_point, n_size);
	
	//goi ham sap xep theo thuoc tinh x
	sort_x(my_point, n_size);
	//goi ham sap xep theo thuoc tinh y
	sort_y(my_point, n_size);
	
return 0;
}
