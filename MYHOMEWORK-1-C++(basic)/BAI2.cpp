//BAI 2: 
#include <iostream>
using namespace std;

int main()
{
	//khai bao mang 10 phan tu
	int a[10];
	
	for(int i=1; i<11; i++)
	{
		a[i-1]=i;
	}
	
	cout<<"cac phan tu cua mang la: "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
