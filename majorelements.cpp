#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,m=0;
	cin>>n;
	int ar[n];
	//approach 1: finding majority elements using hashing
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		m=max(ar[i],m);//finding mxm element

	}
	int hash[m+1]={0};
	for(i=0;i<n;i++)//hashing
	{
		hash[ar[i]]++;
	}
	for(i=0;i<m+1;i++)
	{
		if(hash[i]>=n/2)//frequency greater or equal to n/2 
			cout<<i<<" "<<hash[i];// element and its frequency printed
	}

	
	

	//approach:2 using map
	int a;
	unordered_map <int,int> mp;
	for(i=0;i<n;i++)//input values
	{
		cin>>a;
		mp[a]++;
	}
	auto itr = mp.begin();//iterator
	for(itr = mp.begin(); itr != mp.end(); ++itr)//traversing 
	{
		if(itr->second>=n/2)//checking if value >n/2 and printing 
		cout<<itr->first<<" "<<itr->second;
	}

	



	//appraoch 3: using count function
	//considering the first loop for input
	int cntr=0; 	//variable to count the frequency 
	for(i=0;i<n;i++)
	{
		cntr=count(ar,ar+n,ar[i]); //counting from ar[0] till ar[0+n] for ar[i]
		if(cntr>=n/2)
		{
			cout<<ar[i]<<" "<<cntr<<endl;
			break;
		}

	}

	//approach:4 takeuforward vali optimal 
	int elem=ar[0],cnt=0;
	for(i=0;i<n;i++)
	{
		if(cnt==0)
		{
			cnt=1;
			elem=ar[i];
		}
		else if(elem==ar[i]) 
			cnt++;
		else
			cnt--;
	}


	int cnt1=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]==elem)
			cnt1++;
		
	}
	cout<<cnt1;

}