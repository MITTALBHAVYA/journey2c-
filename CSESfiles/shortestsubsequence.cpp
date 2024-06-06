#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  string str;
  cin>>str;
  ll n= str.size();
  unordered_map<char,ll>mp;
  mp['A']=0;
  mp['C']=1;
  mp['G']=2;
  mp['T']=3;
  vector<bool>here(4,false);
  string dna="ACGT";
  string ans="";
  ll count=0;
  for(ll i=0;i<n;i++){
    char ch = str[i];
    if(!here[mp[ch]])
    {
        here[mp[ch]]=true;
        count++;
        if(count==4){
            ans+=str[i];
            for(ll i=0;i<4;i++){
                here[i]=false;
            }
            count=0;
        }
    }
  }
  for(ll i=0;i<4;i++){
    if(!here[i]){
        ans+=dna[i];
        break;
    }
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}