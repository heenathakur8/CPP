#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],i=0,l=0,h=n-1,mid,key,mn=INT_MIN;
	for(i=0;i<n;i++)
		cin>>ar[i];
	cin>>key;
	mid=(l+h)/2;
		
	while(l<=h )
	{	
		if(ar[mid]==key-1)
		{
			mn=key-1;
			break;
		}
		else if(ar[mid]>key-1)
			h=mid-1;
		else
			l=mid+1;

		mid=(l+h)/2;
		if(ar[mid]<key)
			mn=max(mn,ar[mid]);
		
	}
	cout<<mn;
}