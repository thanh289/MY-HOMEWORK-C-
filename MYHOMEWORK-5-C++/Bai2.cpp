#include <iostream>
#include <vector>	//for vector
#include <ctime>	//for time()
#include <cstdlib>	//for rand() and srand(0
using namespace std;

//ham nhap ma tran
void nhapMaTran(vector<vector <int> > &vec, int row, int col)
{	
	//khoi tao so ngau nhien
	srand(time(NULL));
	
	//nhap ma tran
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			vec[i][j]= rand();
			//vec.at(i).at(j)=rand(); (cach nhap khac)
		}
	}
	
	//cach 2: 
	//cach nay chi su dung khi chua biet do lon cu the cua mang
	
//	for(int i=0; i<vec[i].size(); i++)
//	{
//		for(int j=0; j<col; j++)
//		{
//			vec[i].push_back(rand());
//		}
//	}
	
	
}


//ham xuat  ma tran
void xuatMaTran(vector<vector<int> > &vec)
{
	for(int i=0; i<vec.size(); i++) //lay so hang cua ma tran
	{
		for(int j=0; j<vec[i].size(); j++) //lay so cot cua ma tran
		{
			cout<<vec[i][j]<<"\t";	
		}
		cout<<endl;
	}
}



//ham main
int main()
{	
	//nhap so hang va so cot cua ma tran
	int row;
	int column;
    cout<<"Nhap so hang cua ma tran: ";
    cin>>row;
    cout<<"Nhap so cot cua ma tran: ";
    cin>>column;
    
    //khoi tao vecto 2 chieu A, B va C
    vector <vector<int> > A(row, vector <int> (column));
    vector <vector<int> > B(row, vector <int> (column));
	vector <vector<int> > C(row, vector <int> (column));
	
	//nhap hai ma tran A, B
	nhapMaTran(A, row, column);
	nhapMaTran(B, row, column);
	
	//xuat ma tran
	cout<<"Ta co ma tran A: "<<endl;
	xuatMaTran(A);
	cout<<"Ta co ma tran B: "<<endl;
	xuatMaTran(B);
    
    //tao ra ma tran C=A+B
    for(int i=0; i<row; i++)
    {
    	for(int j=0; j<column; j++)
    	{
    		C[i][j]= A[i][j]+ B[i][j];
		}
	}
	
	//in ra man hinh ma tran C
    cout<<"Ta co ma tran C: "<<endl;
    xuatMaTran(C);
    
    cout<<"\n\n";
return 0;
}
