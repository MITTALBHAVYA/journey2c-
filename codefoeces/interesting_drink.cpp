#include<math.h>
#include <bits/stdc++.h>
using namespace std;
long long solve(long long x,long long arr[],long long n)
{
    if(x>arr[n-1])
    {
        return n;
    }
    for(int i=0;i<n;i++)
    {
        if(x<arr[i])
        {
            return i;
        }
    }
    return n;
}
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long q;
    cin>>q;
    for(long long i=0;i<q;i++)
    {
        long long x;
        cin>>x;
        long long ans=solve(x,arr,n);
        cout<<ans<<endl;
    }
  return 0;
}