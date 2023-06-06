#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  string str;
  cin>>str;
  int count=0;
  vector<string>vect;
  sort(str.begin(),str.end());
  do {  
        count++;
          vect.push_back(str);
    } while(next_permutation(str.begin(), str.end())); 
    cout<<count<<endl;
    for(auto i:vect)
    {
        cout<<i<<endl;
    }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}