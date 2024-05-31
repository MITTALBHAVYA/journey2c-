#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<pair<ll,ll>>vect(n);
  for(ll i=0;i<n;i++){
    cin>>vect[i].second>>vect[i].first;
  }
  sort(vect.begin(),vect.end());
  multiset<ll>check;
  for(ll i=0;i<k;i++){
    check.insert(0);
  }
  //check for the upper bond {upper bond is the just greater than the searching value}
  ll movies=0;
  for(ll i=0;i<n;i++){
    auto it = check.upper_bound(vect[i].second);
    if(it != check.begin()){
        it--;
        check.erase(it);
        check.insert(vect[i].first);
        movies++;
    }
  }
  cout<<movies<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  test=1;
  //cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}