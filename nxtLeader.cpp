#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],i=0;
	for(i=0;i<n;i++)
		cin>>ar[i];
	
	int cpy[n], m=ar[n-1],j=0;

	//accessing elements from the right of the array
	//storing all the elements greater to the elements present to the right of the array
	for(i=n-2;i>=0;i--)
	{
		if(m<ar[i]){
			m=ar[i];
			cpy[j]=ar[i];
			j++;
		}
		
	}

	//printing matrix in reverse
	for(i=j-1;i>=0;i--)
		cout<<cpy[i]<<" ";
}