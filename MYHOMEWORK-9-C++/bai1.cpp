#include <bits/stdc++.h>
using namespace std;
#define k 10000001
bool isPrime[k];

vector <int> sieve()
{
	for(int i=2; i<k; i++) isPrime[i]=true;
	
	for(int i=2; i*i<k; i++)
	{
		if(isPrime[i]==true)
		{
			for(int j=i*i; j<k; j+=i) 
				isPrime[j]=false;
		}
	}
			
	vector <int> Prime;
	for(int i=2; i<k; i++)
		if(isPrime[i]==true) 
			Prime.push_back(i);
//	for(int i=0; i<Prime.size(); i++) cout<<Prime[i]<<" ";
	
	return Prime;
}

int main()
{
	int n; cin>>n;
	vector <int> my_v=sieve();

	for(int i=0; i<n, my_v[i]<n; i++)
	{
		for(int j=0; j<n, my_v[j]<n; j++)
		{
			if(my_v[i]+my_v[j]==n) 
			{
				cout<<my_v[i]<<" "<<my_v[j];
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}
