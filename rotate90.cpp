//Given a matrix, your task is to rotate the matrix 90 degrees clockwise.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int ar[n][n],i=0,j=0;
	//input
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}

	//output
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			cout<<ar[j][i];
		}
		cout<<endl;
	}

	//		optimal approch

	//transpose
	//optimal 
	for ( i = 0; i < n; i++) 
	{		
    for ( j = 0; j < i; j++) 
    {
       swap(ar[i][j], ar[j][i]);
        
    }

    }
    //reversing
    for(i=0;i<;i++)
    {
    	reverse(ar[i].begin(),ar[i].end());
    }

    //output by using 2 for loops

}