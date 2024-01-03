#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],i=0,l=0,h=n-1,mid,key;
	bool ans=false;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cin>>key;

	while(l<=h)
	{
		mid=(l+h)/2;
	
		if(ar[mid]==key)
		{
			ans=true;
			break;
		}
		else if(ar[mid]>key)
			h=mid-1;
		else
			l=mid+1;
	}

	if(ans)
		cout<<"\nfound ";
	else
		cout<<"\nnot found ";
}

//recursion
bool bSearch(int ar[],int low,int high, int m)
{
	  if (low > high) return -1; //Base case.

   
    int mid = (low + high) / 2;
    if (ar[m] == k) return mid;
    else if (k > ar[m])
        return bSearch(ar, m + 1, high, k);
    return bSearch(ar, low, m - 1, k)
}