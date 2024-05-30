#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll>window(n);
  for(ll i=0;i<n;i++){
    cin>>window[i];
  }
  vector<ll>ans;
  ordered_set os;
  //find_by_order(n)==n+1 th element;
  //example to search for k = 3 
  // required search is 2 (k+1)/2
  //example to search for k=4
  //required search for 2 (k+1)/2
  for(ll i=0;i<k;i++){
    os.insert({window[i],i});
  }
  ans.push_back(os.find_by_order((k-1)/2)->first);
  for(ll i=k;i<n;i++){
    os.erase({window[i-k],i-k});
    os.insert({window[i],i});
    ans.push_back(os.find_by_order((k-1)/2)->first);
  }
  for(auto i : ans){
    cout<<i<<" ";
  }
  cout<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
//   cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}