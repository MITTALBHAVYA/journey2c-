#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n,x;
  cin>>n>>x;
  vector<int>p(n);
  for(int i=0;i<n;i++)
  {
    cin>>p[i];
  }
  sort(p.begin(),p.end());
  int start=0,end=n-1;
  int count=0;
  while(start<=end)
  {
    if(p[end]>x)
    {
        end--;
    }
    if(p[end]==x)
    {
        count++;
        end--;
    }
    if(p[end]<x)
    {
        if(p[end]+p[start]<=x)
        {
            count++;
            end--;
            start++;
        }
        else
        {
            count++;
            end--;
        }
    }
  }
  cout<<count<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}