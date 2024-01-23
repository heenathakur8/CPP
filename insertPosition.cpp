#include<bits/stdc++.h>
using namespace std;

int inPos(int ar[],int n ,int k);

int main()
{
	int n;
	cin>>n;
	int ar[n],i=0,k;
	for(i=0;i<n;i++)
		cin>>ar[i];
	cin>>k;

	int ans=inPos(ar,n,k);
	cout<<ans;	
}

int inPos(int ar[],int n,int key)
{
	int l=0,h=n-1,mid,mn=INT_MIN;
	mid=(l+h)/2;
		
	while(l<=h)
	{	
		if(ar[mid]==key)
		{
			mn=mid;
			return mn;
		}
		else if(ar[mid]>key)
			h=mid-1;
		else
			l=mid+1;

		mid=(l+h)/2;
		if(ar[mid]<key)
			mn=max(mn,mid);
		
	}
	return mn+1;

}