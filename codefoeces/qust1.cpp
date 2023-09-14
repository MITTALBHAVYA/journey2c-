#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
vector<bool>isPrime(10000001,true);
vector<int>check;
void solve(){
  int l,r;
  cin>>l>>r;
  if(l==1)
  {
    cout<<-1<<endl;
  }
  else
  {
            for(auto j:check)
            {
                if(r%j==0 && j<r && j>=l)
                {
                    cout<<j<<" "<<r-j<<endl;
                    return;
                }
                if(j>r)
                {
                    break;
                }
            }
            cout<<-1<<endl;
            return;
  }
}
int main()
{
    for (int p = 2; p * p <= 10000000; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= 10000000; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int p = 2; p <= 10000000; ++p) {
        if (isPrime[p]) {
            check.push_back(p);
        }
    }
    
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