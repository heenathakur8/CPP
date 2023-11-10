#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
		cin>>ar[i];

	//first approach sorting 
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i]<ar[j])
			swap(ar[i],ar[j]);
	    }
	}
	

	//second approach counting 1 and 2's and 0's
	int zero=0,one=0;	//counts zero and one 
	for(i=0;i<n;i++)//yeh statements first loop mei likh skte hai loop kum krne k liye
	{
		if(ar[i]==1)
			one++;
		if(ar[i]==0)
			zero++;
	}


//editing the given array , if there are any occurences of zero and one the array will start editing 
//from ar[0] and we are simultaneously decrementing the counter for zero with each index being updated with the value 0
//similarly when zero=0 and there are occurences of 1 i.e "one"(frequency) value is greater than zero array is updated with 1's 
//also 'one' is continuosly decreemented 
//when both zero and one =0 the rest of the indices are filled with 2's


	for(i=0;i<n;i++)
	{
		if(zero==0 && one==0)	
			ar[i]=2;
				
		if(zero==0 && one>0)
		{
			ar[i]=1;
			one--;
		}
		
		if(zero>0)
		{
			ar[i]=0;
			zero--;
		}
	}
	for(i=0;i<n;i++)
		cout<<ar[i];

	//approach 3: using high mid and low
	//where ar[mid]=0 ,ar[low],ar[mid] are swapped and low++,mid++
	//where ar[mid]=1,it is kept as it is and mid++
	//where ar[mid]=2 it is swapped with ar[high] and high-- 
	
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		if(ar[mid]==0)
		{
			swap(ar[low],ar[mid]);
			low++;
			mid++;
		}
		if(ar[mid]==2)
		{
			swap(ar[mid],ar[high]);
			high--;
			
		}
		if(ar[mid]==1){
			mid++;
		}
	}
	for(i=0;i<n;i++)
		cout<<ar[i]<<" " ;
}
