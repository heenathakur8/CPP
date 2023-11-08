#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n][n];

	for(int i=0;i<n;i++)//input valuess
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	int up=0,lo=0;//storing sum: up=upper triangle ,lo=lower triangle 
	for(int i=0;i<n;i++)//first loop for rows
	{
		for(int j=0;j<n;j++)//for column 
		{
			if(i<=j)		//diagonal element occurs at i=j 
				up+=ar[i][j];	//so rows(i)<=column(j)= upper triangle
			if(i>=j)
				lo+=ar[i][j]; 	//i>=j eg. (2,0),(2,1) =lower triangle
		}
		
	}
	cout<<up<<"\n"<<lo;
}