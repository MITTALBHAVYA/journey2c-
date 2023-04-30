#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   int arr[m];
   for(int i=0;i<m;i++)
   {
    cin>>arr[i];
   }
   sort(arr,arr+m);
   int mn=abs(arr[0]-arr[n-1]);
   for(int i=1;i<m-n+1;i++)
   {
      mn=min(mn,abs(arr[i]-arr[i+n-1]));
   }
   cout<<mn<<endl;
    return 0;
}