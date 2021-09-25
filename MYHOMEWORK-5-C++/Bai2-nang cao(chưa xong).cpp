//y tuong co ve khong dung

#include <iostream>

#include <ctime>	//for time()
#include <cstdlib> //for rand() and srand()

#define MAX 1000

using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	cout<<"Nhap so phan tu cua day: ";
	cin>>n;
	
	int A[n];
	
	
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	
	int B[n];
	B[0]=A[0];
	B[1]=A[1];
	for(int i=2; i<n; i++)
	{
		for(int j=2; j<n; j++)
		{
			if (A[j]==0)
				continue;
				
			if(B[i-1]*2 -B[i-2] !=A[j])
			{

				B[i]=A[j];
	
				A[j]=0;
				break;
			}
		}
	}
	
	if( (B[0]+B[n-2])/2 != B[n-1] && (B[1]+B[n-1])/2 != B[0])
		cout<<"OK"<<endl;
		
	for(int i=0; i<n; i++)
		cout<<B[i]<<" ";
	
return 0;	
}
