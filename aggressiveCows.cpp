#include<bits/stdc++.h>
using namespace std;

bool canwe(int ar[],int m,int n,int c)
{
	int cnt=1,diff=ar[0];

	for(int i=1;i<n;i++)
	{
		if(ar[i]-diff>=m)
		{
			diff=ar[i];
			cnt++;
		}
	}
	return cnt>=c;
}

int main()
{
	int n;
	cin>>n;
	int ar[n];
	
	for(int i=0;i<n;i++)
		cin>>ar[i];
	
	int cows;
	cin>>cows;

	sort(ar,ar+n);

	int l=1,h=ar[n-1]-ar[0],mid=(l+h)/2;

	while(l<=h)
	{
		mid=(l+h)/2;
		if(canwe(ar,mid,n,cows))
			l=mid+1;
		else
			h=mid-1;
	}

	cout<<h;

}