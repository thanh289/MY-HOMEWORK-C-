#include <bits/stdc++.h>
using namespace std;
int main()
{
	//cách 1: lâu :))
	int t; cin>>t;
	while(t--)
	{
		//cách 1: lâu :))
//		int n, count=0; cin>>n; 
//		for(int i=1; i<=9; i++)
//			count++;
//		for(int i=10; i<=n; i++)
//		{
//			if(i%11==0 || i%111==0 || i%1111==0 || i%11111==0 || i%111111==0 || i%1111111==0 || i%11111111==0 )
//			count++;
//		}
		
		//cách 2:
		int n, n1; cin>>n; n1=n;
		int first_digit, max=0,  digit=0;
		while(n1>0) 
		{
			if(n1<10 && n1>0) first_digit=n1;
			n1/=10;
			digit++;
		}
//		cout<<digit<<" "<<first_digit<<endl;
		for(int i=0; i<digit; i++) max=max*10+first_digit; 
//		cout<<max<<endl;
		if(n>=max) cout<<9*(digit-1)+first_digit<<endl;
		else cout<<9*(digit-1)+first_digit-1<<endl;
	}
}
