#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll n,k;
  cin>>n>>k;
  ll half=n/2;
  ll minsum=n + half;
  ll maxsum=99999*half + 100000*half;
  if((k<minsum) || (k%2!=minsum%2) || k>maxsum)
  {
    cout<<-1<<endl;
  }
  else
  {
    ll sum=0;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
        arr[i]=1;
      }
      else
      {
        arr[i]=2;
      }
    }
    ll diff=k-minsum;
    ll bull=diff/n;
    ll dozz=diff%n;
    for(ll i=0;i<n;i++)
    {
      arr[i]+=bull;
    }
    for(ll i=0;i<dozz;i++)
    {
      arr[i]++;
    }
    for(ll i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  /*else
  {
    int even_for_10e5=k/100000;
    if(n<even_for_10e5||(k<minsum) || (k%2!=minsum%2))
    {
      cout<<-1<<endl;
    }
    else
    {
      
    }
  }*/
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
 return 0;
}