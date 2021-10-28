#include <iostream>
#include <map>

using namespace std;

int main()
{

	int n, m;
	map<int, int> A, B;
	
	
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		A[x]++;
	}


	cin>>m;
	for(int j=0; j<m; j++)
	{
		int x; cin>>x;
		B[x]++;
	}
	
	
	//lay tung phan tu day A cong voi tung phan tu day B,
	//dung ham find voi map tim phan tu tong do, neu khong thay thi in ra
	
	cout<<"\n\n";
	
	for(map<int, int>::iterator i=A.begin(); i!=A.end(); i++)
	{
		for(map<int, int>::iterator j=B.begin(); j!=B.end(); j++)
		{
			int tempo;
			tempo=(*i).first+(*j).first;
			if(A.find(tempo)==A.end() && B.find(tempo)==B.end())
			{
				cout<<(*i).first<<" "<<(*j).first<<endl;
			}
		}
	}
	
	
return 0;
}


