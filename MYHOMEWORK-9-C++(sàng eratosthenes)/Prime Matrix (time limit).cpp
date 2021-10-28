#include <bits/stdc++.h>
using namespace std;

vector <int> sieve()
{
	bool isPrime[100001];
	for(int i=2; i<100001; i++) isPrime[i]=true;
	
	for(int i=2; i*i<100001; i++)
	{
		if(isPrime[i]==true)
		{
			for(int j=i*i; j<=10001; j+=i) 
				isPrime[j]=false;
		}
	}
			
	vector <int> v;
	for(int i=2; i<100001; i++)
		if(isPrime[i]==true) 
			v.push_back(i);
	
	return v;
}


int TF(int n)
{
	vector <int> v=sieve();
	int tf;
	for(int i=0; i<v.size(); i++)
	{
		if(n==v[i])
		{
			tf=1;
			return tf;
		}
	}			
	tf=0; 
	return tf;
}


int main()
{
	vector <int> v=sieve();
	int n, m; cin>>n>>m;
	int a[n][m];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) cin>>a[i][j];
	
	vector <int> ans_row;
	for(int i=0; i<n; i++)
	{
		int sum_row=0;
		int step_row=0;
		for(int j=0; j<m; j++)
		{
			if(TF(a[i][j])==0) 
			{
				for(int o=0; o<v.size(); o++)
				{
					if(a[i][j]<v[o])
					{
						step_row= v[o]-a[i][j];	 
						sum_row+=step_row;
						break;
					}
				}
				
			}
		}
//		cout<<sum_row<<"."<<endl;
		ans_row.push_back(sum_row);
	}
//	cout<<endl;
	
	vector <int> ans_col;
	for(int i=0; i<m; i++)
	{
		int sum_col=0;
		int step_col=0;
		for(int j=0; j<n; j++)
		{
			if(TF(a[j][i])==0) 
			{
				for(int o=0; o<v.size(); o++)
				{
					if(a[j][i]<v[o])
					{
						step_col= v[o]-a[j][i];	 
						sum_col+=step_col;
						break;
					}
				}
			}
		}
//		cout<<sum_col<<"."<<endl;
		ans_col.push_back(sum_col);
	}
	
	sort(ans_row.begin(), ans_row.end());
	sort(ans_col.begin(), ans_col.end());
	cout<<min(ans_row[0], ans_col[0])<<endl;

}
