#include<bits/stdc++.h>
using namespace std;


//finding sqrt using binary
int main()
{
	int n;
	cin>>n;

	int l=1,h=n,mid=(h+l)/2,sqr=0;
	while(l<=h)
	{
		sqr=mid*mid;
		cout<<"\nmid: "<<mid<<" h " << h<<" L "<<l ;
		
		 if(sqr<=n)
			l=mid+1;
		else
			h=mid-1;
		

		mid=(h+l)/2;
	}
	cout<<h;
}