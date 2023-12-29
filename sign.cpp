//There’s an array ‘A’ of size ‘N’ with an equal number of positive 
//and negative elements. Without altering the relative order of 
//positive and negative elements, you must return an array of alternately 
//positive and negative values.


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],cpy[n],i=0;
	for(i=0;i<n;i++)
		cin>>ar[i];
	int cntr=0;
	i=0;
	int l=0,h=(n/2);

	while(h<n)
	{
		if(ar[l]>0&&cntr==0)
		{
			cpy[i]=ar[l];
			cntr++;
			l++;
			i++;
		}
		else
		{
			cpy[i]=ar[h];
			cntr--;
			h++;
			i++;
		}
		
	}

	for(i=0;i<n;i++)
		cout<<cpy[i]<<" ";
}
