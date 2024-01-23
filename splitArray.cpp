#include<bits/stdc++.h>
using namespace std;
//same as min pages
bool SubArrays(int ar[],int m,int n,int c)
{
	int cnt=1,s=0;

	for(int i=0;i<n;i++)
	{
		if(ar[i]+s<=m)
			s+=ar[i];
		else
		{
			cnt++;
	    	s=ar[i];
		}
	}
	return cnt>c;
}

int main()
{
	int n;
	cin>>n;
	int ar[n],sum=0,mn=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		mn=min(mn,ar[i]);
		sum+=ar[i];
	}
	
	int st;
	cin>>st;

	int l=mn,h=sum,mid=(l+h)/2;

	while(l<=h)
	{
		mid=(l+h)/2;
		if(SubArrays(ar,mid,n,st))
			l=mid+1;		
		else
			h=mid-1;
			
	}

	cout<<l;

}