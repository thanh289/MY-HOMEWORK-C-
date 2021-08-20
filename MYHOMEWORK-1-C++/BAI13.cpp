//BAI 13: 
//viet chuong trinh nhap vao mot so N, phan tich thanh cac thua so nguyen to neu N khong la so nguyen to

#include <iostream>
using namespace std;

//ham xac dinh so nguyen to
int prime(int n)
{
	int count=0;
	for (int i=1;i<n;i++)
	{
		if (n%i==0)
			count++;
	}
	
	if (count==1)
		return true;	
}



//ham phan tich thua so nguyen to
/*y tuong:
	chia N cho cac so nguyen to trong doan [2;N]
	voi moi so nguyen to, dem so lan so N chia het cho no
	sau moi lan chia cho i thi duong nhien N giam di i lan
*/
int phan_tich_thua_so_ng_to(int n)
{
	int count;
	for(int i=2;i<=n;i++)
	{
		count=0;
		while (n%i==0)
		{
			count=count+1;
			n=n/i;
		}
		
	
		if(count>0)
		{
			cout<<i;
			if(count>1)
				cout<<"^"<<count;
			
			if (n>i)
				cout<<"*";
		}	
	}
}
 

//ham main
int main()
{
	int n;
	cout<<"Nhap so n bat ki"<<endl;
	cin>>n;
	
	//yeu cau nhap lai neu khong la so nguyen to
	while(n<0)
	{
		cout<<"Vui long nhap so tu nhien"<<endl;
		cin>>n;
	}
	
	//chia truong hop cho n=0 va n=1
	if (n==0 ||n==1)
	{
		cout<<n<<endl;
		cout<<n<<" khong ";
	}
		
	if (prime(n) ==true)
		cout<<"la so nguyen to"<<endl;
	
	else
	phan_tich_thua_so_ng_to(n);
			
return 0;	
}
