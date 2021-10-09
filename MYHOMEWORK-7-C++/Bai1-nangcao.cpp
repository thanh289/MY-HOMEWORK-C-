#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	//input
	vector <string> v;
	int n; cin>>n;
	for(int i=0; i<n; i++)
	{
		string a;cin>>a;
		v.push_back(a);
	}
	

	int digit=0;
	for(int i=1;i<n; i++)
	{
		int a=max(v[i-1].size() , v[i].size());
		digit=max(digit, a);
	}
	cout<<digit<<endl;

	for(int i=0; i<n; i++)
	{
		if(v[i].size() < digit)
		
	}

return 0;
}
