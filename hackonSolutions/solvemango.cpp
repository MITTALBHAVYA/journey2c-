#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int solve(int n,vector<int>&mangoes)
{
    int count=0;
    vector<int>c;
    c[0]=mangoes[0];
    for(int i=1;i<n;i++)
    {
        c[i]=c[i-1]+mangoes[i];
    }
    for(int i=1;i<n-1;i++)
    {
        int s1=c[i-1];
        int s3=c[n-1]-c[i];
        if(s1+s3>c[i])
        {
            count++;
        }
    }
    return count;
}
void solve(){
    int n;
    cin>>n;
    vector<int>mangoes(n);
    for(int i=0;i<n;i++)
    {
        cin>>mangoes[i];
    }
    cout<<solve(n,mangoes)<<endl;
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