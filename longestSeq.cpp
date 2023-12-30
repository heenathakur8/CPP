 // You are given an array of ‘N’ integers.
 // You need to find the length of the longest sequence which contains
 // the consecutive elements

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],i=0;
	for(i=0;i<n;i++)
		cin>>ar[i];

	//sorting 
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i]<ar[j])
				swap(ar[i],ar[j]);
		}
	}
    //checking consecutive elements 
	for(i=0;i<n;i++)
		cout<<ar[i]<<" ";
	int cntr=0,m=0,j=0;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j<n)
		{
			if((ar[j]+1)==ar[j+1])

			{
				cntr++;
				j++;
			}
			else
				break;
		}
		m=max(m,cntr);
		cout<<cntr<<" cntr ";
		cntr=0;
	}
	cout<<"\n "<<m+1;
}




//optimal 1
//after sorting 
int main()
{
	for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lstsmlr) {
            cnt += 1;
            lstsmlr = a[i];
        }
        else if (a[i] != lstsmlr) {
            cnt = 1;
            lstsmlr = a[i];
        }
        lst = max(lst, cnt);
        cout<<lst;
}

//optimal 2
int main()
{
	unordered_set <int> s;
	for(i=0;i<n;i++)
	{
		cin>>a;
		s.insert(a);
	}
	int lg=0;
	for(auto k: it)
	{
		if(s.find(it-1)==s.end())
		{
			cnt=1;
			int x=it;
		}
		while(s.find(x+1)!=s.end())
		{
			x=x+1;
			cnt+=1;
		}
		lg=max(lg,cnt);
	}
	cout<<lg;
}
