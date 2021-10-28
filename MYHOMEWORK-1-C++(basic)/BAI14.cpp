//BAI 14:
//viet chuong trinh nhap vao mot so N, in ra man hinh so nguyen to lon nhat nho hon N

#include <iostream>
using namespace std;

//ham xac dinh so nguyen to
int prime(int n)
{
	//tao bien dem
	int count=0;
	for (int i=1;i<n;i++)
	{
		if (n%i==0)
			count =count +1	;	
	}
	
	if (count==1)
	 	return true;
	else
		return false;
}

//ham tim so nguyen to lon nhat nho hon n
void find_max_prime(int n)
{
	if (n==0 || n==1 ||n==2)
		cout<<"khong co so nguyen to nho hon "<<n<<endl;
	
	else
	{
		int tempo ;
		for(int i=2;i<n;i++)
		{
			if (prime(i) ==true)
				tempo=i;
		}
		cout<<"so nguyen to lon nhat nho hon n la: "<<tempo<<endl;
	}	
}



//ham main
int main()
{
	int n;
	cout<<"nhap mot so n bat ki"<<endl;
	cin>>n;
	
	while (n<0)
	{
		cout<<"vui long nhap so tu nhien"<<endl;
		cin>>n;
	}
	
	find_max_prime(n);
	
return 0;	
}
