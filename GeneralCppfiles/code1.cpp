#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  string s;
  cin>>s;
  int a=0;
  int b=0;
  for(int i=0;i<5;i++){
    if(s[i]=='A'){
        a++;
    }
    else{
        b++;
    }
  }
  if(a>b){
    cout<<"A"<<endl;
  }
  else{
    cout<<"B"<<endl;
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