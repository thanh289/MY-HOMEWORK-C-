#include <bits/stdc++.h>
using namespace std;

//sang nguyen to
vector <int> seive()
{
	bool isPrime[3001];
	for(int i=2; i<=3000; i++)
	{
		isPrime[i] = true;
	}
	
	
	for(int i=2; i*i<= 3000; i++)
	{
		if(isPrime[i] == true)
		{
			for(int j=i*i; j<=3000; j+=i)
			{
				isPrime[j] = false;
			}
		}
	}
	
	vector <int> p;
	for(int i=2; i<=3000; i++)
		if(isPrime[i]==true) p.push_back(i);
		
	return p;
}


void solve(int n)
{
	vector <int> v=seive();
	int count=0;
	for(int i=1; i<=n; i++)
	{
		int divisor=0;
		for(int j=0; j<v.size(); j++)
		{
			if(i%v[j]==0) divisor++;
			if(v[j]>i) break;
		}
		if (divisor==2) count++;
	}
	cout<<count<<endl;
}

int main()
{
	int n; cin>>n;
	solve(n);
}
