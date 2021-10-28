#include <bits/stdc++.h> 
using namespace std;

int main()
{
	//ý 1
	string s1; 
	getline(cin, s1);
	
	int n=s1.size();
	for(int i=0; i<n-1; i++)
	{
		//neu 2 phan tu lien tiep laf khoang trang
		if(s1[i]==' ' && s1[i+1]==' ')
		{
			for(int j=i; j<n; j++)
			{
				//thuc hien thao tac nhu viec xoa 1 phan tu trong mang 1 chieu
				s1[j]=s1[j+1];
			}
			i--; //buoc nay la de khong cho i tang len, kiem tra xem con khoang trang k
			n--;
		}		
	}
	cout<<s1<<endl;
	
	
	//ý 2
	string s2; getline(cin,s2);
	int word=0;
	for(int i=0; i<s2.size()-1; i++)
	{
		if(s2[i]==' ' && s2[i+1]!=' ')
			word++;
	}
	int ans2= word+1;
	cout<<ans2<<endl;
	
	
	//ý 3
	string s3; cin>>s3;
	int ans3=0;
	for(int i=0; i<s3.size(); i++)
	{
		ans3= ans3*10 + (s3[i]-48);
	}
	cout<<ans3<<endl;
	
	
	//ý 4
	string s4; cin>>s4;
	int m=s4.size();
	string tempo1="";
	string tempo2="";
	if(m%2==0)
	{
		for(int i=m-1; i>=m/2; i--)
		{
			tempo1+= s4[i];
		}
		
		for(int i=0; i<m/2;i++)
		{
			tempo2+=s4[i];
		}
		
		if (tempo1==tempo2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	else
	{
		for(int i=m-1; i>m/2; i--)
		{
			tempo1+= s4[i];
		}
		
		for(int i=0; i<int(m/2);i++)
		{
			tempo2+=s4[i];
		}
		
		if (tempo1==tempo2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	
	//ý 5
	string s5; cin>>s5;
	for(int i=0; i<s5.size(); i++)
	{
		s5[i]=s5[i]+32;
	}
	cout<<s5<<endl;
	
return 0;
}
