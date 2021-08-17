//BAI 7
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout<<"Nhap chuoi da cho"<<endl;
	//getline cho lay khoang trang cua chuoi
	getline(cin, str);
	
	cout<<"In ra man hinh cac ki tu chan trong chuoi: "<<endl;
	//lay do dai chuoi
	int n;
	n = str.size();

	//dung loop lay cac ki tu 
	for(int i=0; i<n; i=i+2)
	{
			cout<<str[i]<<" ";
	}
	
	return 0;
}
