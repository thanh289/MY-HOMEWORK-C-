#include <bits/stdc++.h>
using namespace std;
#define k 10000001
bool isPrime[k];

int main()
{
	int n; cin>>n;

	for(int i=2; i<=n; i++) isPrime[i]=true;
	
	for(int i=2; i*i<=n; i++)
	{
		if(isPrime[i]==true)
		{
			for(int j=i*i; j<=n; j+=i) 
				isPrime[j]=false;
		}
	}
			
	vector <int> my_v;
	for(int i=2; i<=n; i++)
		if(isPrime[i]==true) 
			my_v.push_back(i);
	
//	int m=my.size()
//	cout<<my_v[my_v.size()-1];
	for(int i=0; i<n, my_v[i]<n; i++)
	{
		int first=my_v[i], second=n-my_v[i];
//		cout<<my_v[i]<<endl;
		if(isPrime[second]==true) 
		{
			cout<<first<<" "<<second;
			return 0;
		}
	}
	cout<<-1<<endl; return 0;
}
