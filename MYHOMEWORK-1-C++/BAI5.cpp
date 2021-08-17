//BAI 5
#include <iostream>
using namespace std;

//ham xac dinh so nguyen to
void prime(int n)
{
	//khai bao bien dem
	int uoc=0;
	
	//neu n la so nguyen to thi n chi co 2 uoc la 1 va chinh no 
	for(int i=1;i<=n;i++)
	{
		if (n%i==0)
			uoc = uoc +1;		
	}
		
	if (uoc==2)
		cout<<"day la so nguyen to";
	else	
		cout<<"day khong la so nguyen to";
			
}

//ham main
int main()
{
	int n;
	cout<<"vui long nhap mot so: ";
	cin>>n;
	
	prime(n);
	
	return 0;
}
