//BAI 12
#include <iostream>
#include <string>
using namespace std;

//ham sap xep insert tang dan
int insertsort_tang(string str)
{
	//lay do dai cua chuoi
	int n= str.size();
	for(int i=1; i<n; i++)
	{
		//lay tung ki tu trong chuoi
		char tempo =str[i];
		int j=i-1;
		
		while(j>=0 && (int)str[j]>(int)tempo)
		{
			str[j+1]=str[j];
			j=j-1;
		}
		//neu vong while khong thuc hien thi thuc hien lenh nay
		str[j+1]=tempo;
	}
	
	cout<<"chuoi sau khi sap xep la: "<<endl;
	cout<<str<<endl;	
}

//ham main
int main()
{
	//khai bao chuoi
	string str;
	cout<<"chuoi ban dau la"<<endl;
	getline(cin,str);
	
	insertsort_tang(str);
	
	return 0;	
}
