#include<bits/stdc++.h>
using namespace std;
bool countdays(int ar[],int m,int n,int tar)
{
	int cnt=1,sum=0;

	for(int i=0;i<n;i++)
	{
		if((sum+ar[i])>m)
		{

			sum=ar[i-1];	
			cnt+=1;
		}
		else
			sum+=ar[i];
	}
	return cnt<=tar;
}

int main()
{
	int n;
	cin>>n;
	int ar[n],sum=0,mx=0;

	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
		mx=max(mx,ar[i]);
	}
	double days;
	cin>>days;

    int low=mx,h=sum,mid=(low+h)/2;

	while(low<=h)
	{
		mid=(low+h)/2;
		if(countdays(ar,mid,n,days))
			h=mid-1;
		else
			low=mid+1;

	}
	cout<<low;

}