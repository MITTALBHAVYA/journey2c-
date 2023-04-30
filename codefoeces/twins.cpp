#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int sum=0,count=0,sum2=0;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
    sum+=arr[i];
   }
   sort(arr,arr+n);
   for(int i=n-1;i>=0;i--)
   {
      count++;
      sum2+=arr[i];
      sum-=arr[i];
      if(sum2>sum)
      {
        break;
      }
   }
   cout<<count<<endl;
}