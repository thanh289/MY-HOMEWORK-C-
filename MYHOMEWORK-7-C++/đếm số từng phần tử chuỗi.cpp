#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{	
	string s; cin>>s;
	map <char,int> m;
	
	for(int i=0; i<s.size(); i++)
	{
		m[s[i]]++;
	}
	
	for(map <char,int> :: iterator i=m.begin(); i!=m.end(); i++)
		cout<<(*i).first<<" "<<(*i).second<<endl;	
	
return 0;
	
}
