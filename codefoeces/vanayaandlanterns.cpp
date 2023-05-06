#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,l;
  cin>>n>>l;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  int a=abs(arr[0]-0);
  int b=abs(arr[n-1]-l);
  double mx=max(a,b);
  for(int i=0;i<n-1;i++)
  {
    double x=(arr[i+1]-arr[i])*0.5;
    mx=max(mx,x);
  }
  cout<<setprecision(11)<<mx<<endl;
}