#include<bits/stdc++.h>
using namespace std;


int hoursSum(int ar[],int n,double m)
{
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		double div=ceil(ar[i]/m);
		sum+=div;
	}
	return sum;
}

int main()
{
	int n,mx=0;
	cin>>n;
	int ar[n];

	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		mx=max(mx,ar[i]);
	}
	int hours;
	cin>>hours;

	int h=mx,l=1,mid;

	while(l<=h)
	{
		mid=(h+l)/2;
		int s=hoursSum(ar,n,mid);
		if(s<=hours)
			h=mid-1;
		else
			l=mid+1;
	
	}
	cout<<l;

}