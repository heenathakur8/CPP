#include<bits/stdc++.h>
using namespace std;

bool possible(int ar[],int n,int m,int t)
{
	int cntr=0;
	for(int i=0;i<n;i++)
	{
		if(m>=ar[i])
			cntr++;
		else
			cntr--;
	}
	return(cntr>=t);
// 		return true;
// 	else
// 		return false;
}

int main()
{
	int n,mx=0,mn=INT_MAX;
	cin>>n;
	int ar[n];

	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		mx=max(mx,ar[i]);
		mn=min(mn,ar[i]);
	}
	int roses,boq;
	cin>>roses>>boq;

	int l=mn,h=mx,mid=(l+h)/2,t=roses*boq;
	while(l<=h)
	{

		if(possible(ar,n,mid,t))
			h=mid-1;
		else
			l=mid+1;
		mid=(l+h)/2;

	}
	if(t<=n)
		cout<<l;
	else
		cout<<-1;
}


