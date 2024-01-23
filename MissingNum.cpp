#include <bits/stdc++.h>
using namespace std;

int index(int ar[], int n, int k) {
    int l=0, h=n - 1;
    while (l<=h) {
        int mid=(l + h) / 2;
        int mis=ar[mid] - (mid + 1);
        if (mis < k) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }
    return (k+h+1);
}

int main()
{
    int n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int key;
    cin>>key;
    cout<<index(ar,n,key);
     
}
