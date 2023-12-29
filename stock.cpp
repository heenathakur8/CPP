// Problem Statement: You are given an array of prices where prices[i]
//  is the price of a given stock on an ith day.

// You want to maximize your profit by choosing a single day to buy
//  one stock and choosing a different day in the future to sell that stock. Return the maximum profit
//  you can achieve from this transaction. If you cannot achieve any profit, return 0.



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],i=0;
	for(i=0;i<n;i++)
		cin>>ar[i];
	
	int mx=0,mn=INT_MAX;
	for(i=0;i<n;i++)
	{
		mn=min(mn,ar[i]);
		mx=max(mx,(ar[i]-mn));
	}
	cout<<mx;

}