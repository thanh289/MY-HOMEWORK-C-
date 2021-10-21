//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t; cin>>t;
//	while(t--)
//	{
//		int n; cin>>n;
//		vector <int> v;
//		for(int i=0; i<n; i++)
//		{
//			int x; cin>>x;
//			v.push_back(x);
//		}
//		
//		sort(v.begin(), v.end());
//
//		long double sum1=0, sum2=0;
//		for(int i=0; i<n; i++)
//		{
//			sum1+=v[i];
//		}
//		
//		long double tem=-1e9;
//		for(int i=0; i<n-1; i++)
//		{
//			sum1-=v[i];
//			sum2+=v[i];
//			long double ava= sum1/(n-1-i)+sum2/(i+1);
//			tem=max(ava, tem);
//		}
//		cout<<tem<<endl;
//	}
//}

//cái trên bi timelimited va khong in ra duoc phan thap phan

#include<cstdio>
using namespace std;
int t,n;
main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		double sum=0,m=-2e9;
		for(int i=0;i<n;i++)
		{
			int a;scanf("%d",&a);
			sum+=a;
			if(m<a) m=a;
		}
		printf("%.16f\n",m+(sum-m)/(n-1));
		
	}
}
