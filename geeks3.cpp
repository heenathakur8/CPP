#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n =str.length();

	int inc=1,dec=9,nwstr=0;
	for(int i =0 ;i<n;i++)
	{
		if(str[i]=='I')
		{
			nwstr=nwstr*10+inc;	 //storing values as 0*10+1= 1 ,(1*10)+2=10+2=12 and so on
			inc++;
		}
		else 
		{
			nwstr=nwstr*10+dec;
			dec--;
		}
	}
	cout<<nwstr;
}