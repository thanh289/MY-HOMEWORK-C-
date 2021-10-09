#include <bits/stdc++.h> 
//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//phan input
	int k; cin>>k;
	string s, ans=""; 
	cin>>s;
	map <char,int> m;
	
	
	for(int i=0; i<s.size(); i++)
		m[s[i]]++;
		


	for(map<char, int>:: iterator i=m.begin(); i!=m.end(); i++)
	{
		//neu khong ton tai thi return -1
		if ((*i).second %k !=0)
		{
			cout<<-1;
			return 0;
		}
		//neu ton tai thi chia so phan tu ra k lan duoc so phan tu moi tap con
		else 
			(*i).second/=k;
	}
	
	while (k--)
	{
		for(map<char, int> ::iterator i=m.begin(); i!=m.end(); i++)
		{
			//luu so lan xuat hien moi phan tu cua tap con vao n
			int n=(*i).second;
			while(n--)
			{
				ans+=(*i).first;
			}
		}
	}
	
	cout<<ans;
return 0;
}
