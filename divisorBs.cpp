#include<bits/stdc++.h>
using namespace std;

bool sumDiv(int ar[],double m,int n,int t)
{
	int sum=0;
	
	for(int i=0;i<n;i++)
		sum+=ceil(ar[i]/m);
	return sum<=t;
}

int main()
{
	int n;
	cin>>n;

	int ar[n],mx=0,mn=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		mn=min(mn,ar[i]);
		mx=max(mn,ar[i]);

	}
	int t;
	cin>>t;

	int l=mn,h=mx,mid=(l+h)/2;
	while(l<=h)
	{
		if(sumDiv(ar,mid,n,t))
			h=mid-1;
		else
			l=mid+1;
		mid=(l+h)/2;
	}
	cout<<l;
}