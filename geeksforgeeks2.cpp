/*Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. 
The task is to find the column with maximum number of 0s. If more than one column exists, 
print the one which comes first. If the maximum number of 0s is 0 then return -1*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n][n];

	int i,j,cntr=0,m=0,ind=0;
	for(i=0;i<n;i++)		//input values
	{
		for(j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	for(i=0;i<n;i++)		 //for column
	{
		for(j=0;j<n;j++)	//for rows
		{
			if(ar[j][i]==0)		//checking for 0's vertically in a matrix 
				cntr++;
		}
	
		if(cntr>m)
		{
			m=cntr;			//storing mxm value in cntr and storing index if the condition is true
			ind=i;
		}
		cntr=0;
	}
	if(m==0) 				//if there are no 0's which means cntr=m=0 then printing -1
		cout<<"-1";
	else
		cout<<ind;
	
}