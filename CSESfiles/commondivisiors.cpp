#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll helper(vector<ll>&arr,vector<ll>&count){
    ll high = count.size()-1;
    ll counter=0;
    for(ll i = high;i>=1;i--){
    ll j=i;
    counter=0;
    while(j<=high){
        if(count[j]>=2){
           return j; 
        }
        else if(count[j]==1){
            counter++;
        }
        j+=i;
        if(counter==2){
            return i;
        }
    }
  }
}
void solve(){
  ll n;
  cin>>n;
  ll high=0;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    high=max(high,arr[i]);
  }
  vector<ll>count(high+1,0);
  for(ll i=0;i<n;i++){
    count[arr[i]]++;
  }
  cout<<helper(arr,count)<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}