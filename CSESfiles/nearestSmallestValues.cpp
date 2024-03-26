#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>vect(n);
  for(ll i=0;i<n;i++){
    cin>>vect[i];
  }
  stack<ll>st;
  st.push(-1);
  vector<ll>ans(n);
  for(ll i=0;i<n;i++){
    ll check=vect[i];
    while(st.top()!=-1 && vect[st.top()]>=check){
        st.pop();
    }
    ans[i]=st.top()+1;
    st.push(i);
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
  int test;
  test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}