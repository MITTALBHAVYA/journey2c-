#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first) {
        // If first values are equal, sort by second value in descending order
        return a.second > b.second;
    } else {
        // Sort by first value in ascending order
        return a.first < b.first;
    }
}
void solve(){
  ll n;
  cin>>n;
  vector<pair<ll,ll>>vect;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    vect.push_back(make_pair(x,i));
  }
  sort(vect.begin(),vect.end(),cmp);
  ll runs=0,elimi=0;
  ll start=vect[0].first;
  runs=min(start,n);
  ll pre_min=vect[0].second;
  for(ll i=1;i<n;i++){
    if(vect[i].first==start){
        pre_min=min(pre_min,vect[i].second);
    }
    else{
        if(vect[i].second>pre_min){
            elimi++;
        }
        else{
            runs+=min(vect[i].first-start,n-i);
            start=min(vect[i].first,runs);
        }
    }
  }
  cout<<elimi+runs<<endl;
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