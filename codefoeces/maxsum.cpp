#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n,k,sum=0,ans=0;
        cin>>n>>k;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            arr[i]=x;
        }
        sort(arr.begin(),arr.end());
        //delete by first part;
        for(long long i=2*k;i<n;i++)
        {
            sum+=arr[i];
        }
        //first answer or what?
        ans=sum;
        //hatao lagao compare karo ?
        long long lasat=n-1;
        for(long long i=2*k;i>=2;i-=2)
        {
            sum=sum+arr[i-1]+arr[i-2];
            sum=sum-arr[lasat];
            ans=max(ans,sum);
            lasat--;
        }
        cout<<ans<<endl;
    }
}