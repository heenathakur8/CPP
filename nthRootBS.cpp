#include<bits/stdc++.h>
using namespace std;


//finding sqrt using binary search
int main()
{
	int n,m;
	cin>>n>>m;

	int l=1,h=n;
	double mid=(h+l)/2;
	double sqr;

	while(l<=h)
	{
		sqr=pow(mid,m);
		

		cout<<"\nmid: "<<mid<<" h " << h<<" L "<<l ;
		
		 if(sqr<=n)
			l=mid+1;
		else
			h=mid-1;		

		mid=(int)(h+l)/2;
	}
	cout<<"\n"<<h;
}