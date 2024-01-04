#include<bits/stdc++.h>
using namespace std;

int first(int ar[],int n,int key )
{
	int l=0,h=n-1,mid,mn=INT_MAX;
	bool ans=false;
	while(l<=h)
	{
		mid=(l+h)/2;
	
		if(ar[mid]==key)
		{
			ans=true;
			mn=min(mn,mid);
			h=mid-1;
		}
		else if(ar[mid]>key)
			h=mid-1;
		else
			l=mid+1;
	}
	if(ans)
		return mn;
	else
		return -1;
}

int last(int ar[],int n,int key )
{
	int l=0,h=n-1,mid,mx=INT_MIN;
	bool ans=false;
	while(l<=h)
	{
		mid=(l+h)/2;
	
		if(ar[mid]==key)
		{
			ans=true;
			mx=max(mx,mid);
			l=mid+1;
		}
		else if(ar[mid]>key)
			h=mid-1;
		else
			l=mid+1;
	}
	if(ans)
		return mx;
	else
		return -3;
}
int main()
{
	int n;
	cin>>n;
	int ar[n],i=0,k;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cin>>k;
	int fst=first(ar,n,k);
	int lt=last(ar,n,k);
	cout<<lt-fst+1;

}

