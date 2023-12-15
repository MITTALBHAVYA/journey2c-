#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,k;
  cin>>n>>k;
  ll count_odd=0;
  ll count_even=0;
  ll sum=0;
  vector<ll>arr(n);
  ll mini=INT_MAX;
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==1){
        count_odd++;
    }
    mini=min(mini,arr[i]);
    sum+=arr[i];
  }
  count_even=n-count_odd;
  if(count_odd>=k){
    sum+=k;
    cout<<sum<<endl;
  }
  else{
    k=k-count_odd;
    sum+=count_odd;
    if(mini%2==1)
    {
        mini=mini+1;
    }
    sum-=mini;
    while(k--){
        if(mini%2==0){
            mini/=2;
        }
        else{
            mini++;
        }
    }
    sum+=mini;
    cout<<sum<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}